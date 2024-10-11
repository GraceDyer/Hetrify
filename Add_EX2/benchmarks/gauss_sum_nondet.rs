// @flag --no-memory-splitting --unroll=4
// @expect verified

pub fn main() {
    let mut sum = 0;
    let b: u64 = 7;

    if !(b < 5 && b > 1) {
        return;
    }

    for i in 0..b {
        sum += i;
    }

    verifier::assert_eq!(2 * sum, b * (b - 1));
}
