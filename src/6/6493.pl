=pod
6493. Slurpys

작성자: xCrypt0r
언어: Perl
사용 메모리: 17,376 KB
소요 시간: 8 ms
해결 날짜: 2021년 10월 22일
=cut

sub main {
    my $re_slump = qr/^([D|E]F+)+G$/;
    my $re_slimp = qr/AH|A([D|E]F+)+GC|AB(?0)C/;

    <STDIN>;

    while (my $s = <STDIN>) {
        if ($s =~ $re_slimp && index($s, $&) == 0 && substr($s, length($&)) =~ $re_slump) {
            print "YES\n";
        } else {
            print "NO\n";
        }
    }
}

main