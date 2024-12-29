trait Summarizable {
    fn summary(&self) -> String;
}

struct Article {
    headline: String,
    content: String,
}

impl Summarizable for Article {
    fn summary(&self) -> String {
        format!("{}: {}", self.headline, self.content)
    }
}

fn print_summary(item: &impl Summarizable) {
    println!("{}", item.summary());
}

fn main() {
    let news = Article {
        headline: String::from("Rust 1.70 Released"),
        content: String::from("The Rust team is excited to announce ..."),
    };

    print_summary(&news);
}