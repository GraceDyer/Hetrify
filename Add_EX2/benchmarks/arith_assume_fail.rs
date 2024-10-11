// @expect error

pub fn main() {
    let a: i32 = 6;
    let b: i32 = 7;

    if !(4 < a && a < 8) {
        return;
    }

    if !(5 < b && b < 9) {
        return;
    }

    let x = a * b;

    verifier::assert!(!(x == 30 || x == 35 || x == 40 || x == 36 || x == 48 || x == 42 || x == 49 || x == 56));
}
