
struct Circle {
    radius: f64,
}

impl Circle {
    fn area(&self) -> f64 {
        std::f64::consts::PI * self.radius * self.radius
    }

    fn circumference(&self) -> f64 {
        2.0 * std::f64::consts::PI * self.radius
    }
}

fn main() {
    let circle = Circle { radius: 5.0 };
    println!("Area: {}", circle.area());
    println!("Circumference: {}", circle.circumference());
}