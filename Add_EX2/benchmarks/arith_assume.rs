// @expect verified

pub fn main() {
    let a: i32 = 7;
    let b: i32 = 6;

    if !(4 < a && a < 8) {
        return;
    }

    if !(5 < b && b < 9) {
        return;
    }

    verifier::assert!(30 <= a * b && a * b <= 56);
}
