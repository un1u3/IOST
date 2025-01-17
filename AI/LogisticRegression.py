import numpy as np

class LogisticRegression:
    def __init__(self, learning_rate=0.01, n_iterations=1000):
        self.learning_rate = learning_rate
        self.n_iterations = n_iterations
        self.weights = None
        self.bias = None

    def sigmoid(self, z):
        return 1 / (1 + np.exp(-z))

    def fit(self, X, y):
        # Initialize parameters
        n_samples, n_features = X.shape
        self.weights = np.zeros(n_features)
        self.bias = 0

        # Gradient descent
        for _ in range(self.n_iterations):
            # Linear model
            linear_model = np.dot(X, self.weights) + self.bias
            
            # Apply sigmoid function
            predictions = self.sigmoid(linear_model)

            # Compute gradients
            dw = (1 / n_samples) * np.dot(X.T, (predictions - y))
            db = (1 / n_samples) * np.sum(predictions - y)

            # Update parameters
            self.weights -= self.learning_rate * dw
            self.bias -= self.learning_rate * db

    def predict(self, X):
        # Compute linear model and apply sigmoid
        linear_model = np.dot(X, self.weights) + self.bias
        probabilities = self.sigmoid(linear_model)
        
        # Convert probabilities to binary class (0 or 1)
        return [1 if p > 0.5 else 0 for p in probabilities]

# Example usage
if __name__ == "__main__":
    # Import dataset (e.g., from sklearn for simplicity)
    from sklearn.model_selection import train_test_split
    from sklearn.datasets import make_classification

    # Generate a synthetic dataset
    X, y = make_classification(n_samples=1000, n_features=10, n_classes=2, random_state=42)

    # Split dataset into training and testing sets
    X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

    # Train the Logistic Regression model
    model = LogisticRegression(learning_rate=0.01, n_iterations=1000)
    model.fit(X_train, y_train)

    # Make predictions
    predictions = model.predict(X_test)

    # Evaluate accuracy
    accuracy = np.mean(predictions == y_test)
    print(f"Accuracy: {accuracy:.2f}")
