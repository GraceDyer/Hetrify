// @flag --no-memory-splitting --unroll=10
// @expect error

pub fn main() {
    let mut sum = 0;
    let b: u64 = 7;

    if !(b > 1) {
        return;
    }

    for i in 0..b {
        sum += i;
    }

    verifier::assert_ne!(2 * sum, b * (b - 1));
}
