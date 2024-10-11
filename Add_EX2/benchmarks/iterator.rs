// @flag --no-memory-splitting --unroll=4
// @expect verified

fn fac(n: u64) -> u64 {
    match n {
        0 => 1,
        1 => 1,
        _ => n * fac(n - 1),
    }
}

pub fn main() {
    let mut a = 1;
    let n: u64 = 6;

    if !(n < 5) {
        return;
    }

    for i in 1..=n {
        a *= i;
    }

    verifier::assert_eq!(a, fac(n)); // a == 6!
}
