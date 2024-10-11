// @expect error

fn double(a: u32) -> u32 {
    a * 2
}

pub fn main() {
    let a: u32 = 2;

    if !(a <= 2147483647) {
        return;
    }

    let b = double(a);
    verifier::assert_ne!(b, 2 * a);
}
