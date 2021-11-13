=pod
5698. Tautogram

작성자: xCrypt0r
언어: Perl
사용 메모리: 17,376 KB
소요 시간: 12 ms
해결 날짜: 2021년 11월 13일
=cut

sub main {
    while (<>) {
        chomp;

        if ($_ eq '*') {
            last;
        }

        if ($_ =~ /^(([a-z])[a-z]*)(\s(?i)(\2)[a-z]*)*$/gim) {
            print "Y\n";
        } else {
            print "N\n";
        }
    }
}

main