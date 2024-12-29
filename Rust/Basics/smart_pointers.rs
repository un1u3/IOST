use std::rc::Rc;

fn main() {
    let a = Rc::new(5);
    let b = a.clone();

    println!("a = {} (reference count: {})", a, Rc::strong_count(&a));
    println!("b = {} (reference count: {})", b, Rc::strong_count(&b));
}