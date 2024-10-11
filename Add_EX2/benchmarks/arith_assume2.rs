// @expect verified

pub fn main() {
    let mut a: i32 = 5;
    let mut b: i32 = 8;

    if !(4 < a && a < 8) {
        return;
    }

    if !(5 < b && b < 9) {
        return;
    }

    verifier::assert!(30 <= a * b && a * b <= 56);
    
    a=6;
    verifier::assert!(30 <= a * b && a * b <= 56);
    
    a=7;
    verifier::assert!(30 <= a * b && a * b <= 56);
}
