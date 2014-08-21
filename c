perl -nlwe 'our $c; $c += tr/*//; END { print $c }' camel
perl -nlwe 'our $c; $c += tr/*//; END { print $c }' butterfly
