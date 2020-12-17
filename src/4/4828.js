/**
 * 4828. XML
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 11,000 KB
 * 소요 시간: 196 ms
 * 해결 날짜: 2020년 12월 17일
 */

const fs = require('fs');

class XMLParser {
    constructor(lines) {
        this.lines = lines;
        this.output = '';
    }

    parseXML() {
        for (let i = 0, len = this.lines.length; i < len; i++) {
            this.parseLine(this.lines[i]);
        }
    }

    parseLine(line) {
        try {
            this.line = line;

            this.replaceEscape();
            this.replaceHex();
            this.replaceTag();
            this.checkPlainText();

            this.output += 'valid\n';
        } catch {
            this.output += 'invalid\n';
        }
    }

    replaceEscape() {
        this.line = this.line.replace(/&(lt|gt|amp);/g, '');
    }

    replaceHex() {
        this.line = this.line.replace(/&x([a-fA-F0-9]{2})+;/g, '');
    }

    replaceTag() {
        let context = [];

        if (/<[^/a-z0-9]/.test(this.line)) {
            throw new Error;
        }

        this.line = this.line.replace(/<[a-z0-9]+\/>/g, '');

        this.line.match(/<\/?[a-z0-9]+>/g)?.forEach(tag => {
            if (tag.startsWith('</')) {
                let open = context.pop().replace(/[<>/]/g, ''),
                    close = tag.replace(/[<>/]/g, '');

                if (open !== close) {
                    throw new Error;
                }
            } else {
                context.push(tag);
            }
        });
        
        if (context.length > 0) {
            throw new Error;
        }

        this.line = this.line.replace(/<\/?[a-z0-9]+>/g, '');
    }

    checkPlainText() {
        if (['<', '>', '&'].some(x => this.line.includes(x))) {
            throw new Error;
        }

        for (let i = 0, len = this.line.length; i < len; i++) {
            let c = this.line.charCodeAt(i);

            if (c < 32 || c > 127) {
                throw new Error;
            }
        }
    }
}

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let parser = new XMLParser(input);

    parser.parseXML();
    process.stdout.write(parser.output);
}

main();
