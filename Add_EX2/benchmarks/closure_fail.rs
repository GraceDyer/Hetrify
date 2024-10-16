// @flag --no-memory-splitting
// @expect error

fn call_with_one<F>(mut some_closure: F) -> ()
where
    F: FnMut(i32) -> (),
{
    some_closure(1);
}

pub fn main() {
    let mut num = 5;

    if !(num <= 2147483647 - 5) {
        return;
    }

    let old_num = num;
    {
        let mut add_num = |x: i32| num += x;

        add_num(5);
        call_with_one(&mut add_num);
    }
    verifier::assert_ne!(old_num + 6, num);
}
