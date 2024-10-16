// @expect error

struct Point<T> {
    pub x: T,
    pub y: T,
}

struct Point3<T> {
    pub x: T,
    pub y: T,
    pub z: T,
}

trait S<T> {
    fn swap_items(self) -> Self;
}

impl<T> S<T> for Point<T> {
    fn swap_items(self) -> Point<T> {
        Point::<T> {
            x: self.y,
            y: self.x,
        }
    }
}

impl<T> S<T> for Point3<T> {
    fn swap_items(self) -> Point3<T> {
        Point3::<T> {
            x: self.y,
            y: self.z,
            z: self.x,
        }
    }
}

fn swapem<T, U: S<T>>(s: U) -> U {
    s.swap_items()
}

pub fn main() {
    let x2: i64 = 7;
    let y2: i64 = 8;
    let x3: i64 = 1;
    let y3: i64 = 2;
    let z3: i64 = 3;
    let p2 = Point::<i64> { x: x2, y: y2 };
    let p3 = Point3::<i64> {
        x: x3,
        y: y3,
        z: z3,
    };

    let q2 = swapem(p2);
    let q3 = swapem(p3);
    verifier::assert_eq!(q2.x, y2);
    verifier::assert_eq!(q2.y, x2);
    verifier::assert_ne!(q3.x, y3);
    verifier::assert_eq!(q3.y, z3);
    verifier::assert_eq!(q3.z, x3);
}
