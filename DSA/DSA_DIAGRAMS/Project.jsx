import React, { useState, useEffect, createContext, useContext } from 'react'; import { ShoppingCart, User, Menu, X, Star, Heart, Search, Filter, Truck, RefreshCw, Shield, Phone, Mail, MapPin, Instagram, Facebook, Twitter } from 'lucide-react'; // Types interface Product { id: number; nam

pasted

this code is written by you continue the code where it ended complete the code

I'll complete the React e-commerce application code from where it ended. Let me continue with the remaining components and functionality.


Complete RizeN E-commerce App
Interactive artifact 



i said where is terminate code in last session continue from their you are creating from begging

You're absolutely right! Let me continue from where the code ended. The code was cut off in the middle of the AboutPage component. Let me continue from there:


Continue RizeN E-commerce Code
Interactive artifact 



Pasted content
26.71 KB •739 lines
•
Formatting may be inconsistent from source
import React, { useState, useEffect, createContext, useContext } from 'react';
import { ShoppingCart, User, Menu, X, Star, Heart, Search, Filter, Truck, RefreshCw, Shield, Phone, Mail, MapPin, Instagram, Facebook, Twitter } from 'lucide-react';

// Types
interface Product {
  id: number;
  name: string;
  price: number;
  originalPrice?: number;
  image: string;
  category: string;
  rating: number;
  reviews: number;
  colors: string[];
  sizes: string[];
  description: string;
  inStock: boolean;
}

interface CartItem extends Product {
  quantity: number;
  selectedSize: string;
  selectedColor: string;
}

interface User {
  id: number;
  email: string;
  name: string;
  isAdmin: boolean;
}

// Context
const AppContext = createContext<{
  cart: CartItem[];
  addToCart: (product: Product, size: string, color: string) => void;
  removeFromCart: (id: number) => void;
  updateQuantity: (id: number, quantity: number) => void;
  user: User | null;
  login: (email: string, password: string) => void;
  logout: () => void;
  currentPage: string;
  setCurrentPage: (page: string) => void;
}>({
  cart: [],
  addToCart: () => {},
  removeFromCart: () => {},
  updateQuantity: () => {},
  user: null,
  login: () => {},
  logout: () => {},
  currentPage: 'home',
  setCurrentPage: () => {}
});

// Sample Data
const products: Product[] = [
  {
    id: 1,
    name: "Urban Streetwear Hoodie",
    price: 89.99,
    originalPrice: 119.99,
    image: "/placeholder.svg?height=400&width=400&text=Urban+Hoodie",
    category: "hoodies",
    rating: 4.8,
    reviews: 124,
    colors: ["black", "white", "gray"],
    sizes: ["S", "M", "L", "XL"],
    description: "Premium quality streetwear hoodie with modern fit and comfort.",
    inStock: true
  },
  {
    id: 2,
    name: "Classic Denim Jacket",
    price: 129.99,
    image: "/placeholder.svg?height=400&width=400&text=Denim+Jacket",
    category: "jackets",
    rating: 4.6,
    reviews: 89,
    colors: ["blue", "black"],
    sizes: ["S", "M", "L", "XL"],
    description: "Timeless denim jacket with premium wash and durability.",
    inStock: true
  },
  {
    id: 3,
    name: "Minimalist T-Shirt",
    price: 34.99,
    originalPrice: 49.99,
    image: "/placeholder.svg?height=400&width=400&text=Minimalist+Tee",
    category: "t-shirts",
    rating: 4.9,
    reviews: 267,
    colors: ["white", "black", "gray", "navy"],
    sizes: ["XS", "S", "M", "L", "XL", "XXL"],
    description: "Ultra-soft cotton tee with clean, minimalist design.",
    inStock: true
  },
  {
    id: 4,
    name: "Premium Joggers",
    price: 79.99,
    image: "/placeholder.svg?height=400&width=400&text=Premium+Joggers",
    category: "bottoms",
    rating: 4.7,
    reviews: 156,
    colors: ["black", "gray", "navy"],
    sizes: ["S", "M", "L", "XL"],
    description: "Comfortable joggers with athletic fit and premium materials.",
    inStock: true
  },
  {
    id: 5,
    name: "Signature Sneakers",
    price: 159.99,
    image: "/placeholder.svg?height=400&width=400&text=Signature+Sneakers",
    category: "footwear",
    rating: 4.8,
    reviews: 203,
    colors: ["white", "black", "gray"],
    sizes: ["7", "8", "9", "10", "11", "12"],
    description: "Limited edition sneakers with innovative design and comfort.",
    inStock: true
  },
  {
    id: 6,
    name: "Bomber Jacket",
    price: 149.99,
    image: "/placeholder.svg?height=400&width=400&text=Bomber+Jacket",
    category: "jackets",
    rating: 4.5,
    reviews: 78,
    colors: ["black", "olive", "navy"],
    sizes: ["S", "M", "L", "XL"],
    description: "Classic bomber jacket with modern updates and premium finish.",
    inStock: true
  }
];

// Components
const Header = () => {
  const { cart, user, logout, currentPage, setCurrentPage } = useContext(AppContext);
  const [isMenuOpen, setIsMenuOpen] = useState(false);
  const [isSearchOpen, setIsSearchOpen] = useState(false);

  const cartItemCount = cart.reduce((total, item) => total + item.quantity, 0);

  return (
    <header className="bg-white shadow-sm sticky top-0 z-50">
      <div className="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8">
        <div className="flex items-center justify-between h-16">
          <div className="flex items-center">
            <button
              onClick={() => setIsMenuOpen(!isMenuOpen)}
              className="md:hidden p-2"
            >
              {isMenuOpen ? <X size={24} /> : <Menu size={24} />}
            </button>
            <h1 
              onClick={() => setCurrentPage('home')}
              className="text-2xl font-bold text-gray-900 cursor-pointer ml-2 md:ml-0"
            >
              RizeN
            </h1>
          </div>

          <nav className="hidden md:flex space-x-8">
            <button 
              onClick={() => setCurrentPage('home')}
              className={`${currentPage === 'home' ? 'text-gray-900' : 'text-gray-500'} hover:text-gray-900`}
            >
              Home
            </button>
            <button 
              onClick={() => setCurrentPage('shop')}
              className={`${currentPage === 'shop' ? 'text-gray-900' : 'text-gray-500'} hover:text-gray-900`}
            >
              Shop
            </button>
            <button 
              onClick={() => setCurrentPage('about')}
              className={`${currentPage === 'about' ? 'text-gray-900' : 'text-gray-500'} hover:text-gray-900`}
            >
              About
            </button>
            <button 
              onClick={() => setCurrentPage('contact')}
              className={`${currentPage === 'contact' ? 'text-gray-900' : 'text-gray-500'} hover:text-gray-900`}
            >
              Contact
            </button>
          </nav>

          <div className="flex items-center space-x-4">
            <button
              onClick={() => setIsSearchOpen(!isSearchOpen)}
              className="p-2 hover:bg-gray-100 rounded-full"
            >
              <Search size={20} />
            </button>
            <button
              onClick={() => setCurrentPage('cart')}
              className="p-2 hover:bg-gray-100 rounded-full relative"
            >
              <ShoppingCart size={20} />
              {cartItemCount > 0 && (
                <span className="absolute -top-1 -right-1 bg-red-500 text-white text-xs rounded-full h-5 w-5 flex items-center justify-center">
                  {cartItemCount}
                </span>
              )}
            </button>
            <button
              onClick={() => user ? logout() : setCurrentPage('login')}
              className="p-2 hover:bg-gray-100 rounded-full"
            >
              <User size={20} />
            </button>
          </div>
        </div>

        {isSearchOpen && (
          <div className="pb-4">
            <input
              type="text"
              placeholder="Search products..."
              className="w-full px-4 py-2 border border-gray-300 rounded-lg focus:outline-none focus:ring-2 focus:ring-gray-500"
            />
          </div>
        )}
      </div>

      {isMenuOpen && (
        <div className="md:hidden bg-white border-t">
          <nav className="px-4 py-2 space-y-2">
            <button 
              onClick={() => { setCurrentPage('home'); setIsMenuOpen(false); }}
              className="block w-full text-left py-2 text-gray-900"
            >
              Home
            </button>
            <button 
              onClick={() => { setCurrentPage('shop'); setIsMenuOpen(false); }}
              className="block w-full text-left py-2 text-gray-500"
            >
              Shop
            </button>
            <button 
              onClick={() => { setCurrentPage('about'); setIsMenuOpen(false); }}
              className="block w-full text-left py-2 text-gray-500"
            >
              About
            </button>
            <button 
              onClick={() => { setCurrentPage('contact'); setIsMenuOpen(false); }}
              className="block w-full text-left py-2 text-gray-500"
            >
              Contact
            </button>
          </nav>
        </div>
      )}
    </header>
  );
};

const HomePage = () => {
  const { setCurrentPage } = useContext(AppContext);

  return (
    <div>
      <section className="relative bg-gradient-to-r from-gray-900 to-gray-700 text-white">
        <div className="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8 py-20">
          <div className="text-center">
            <h1 className="text-4xl md:text-6xl font-bold mb-6">
              Rise Above the Ordinary
            </h1>
            <p className="text-xl md:text-2xl mb-8 text-gray-300">
              Premium streetwear that defines your style
            </p>
            <button
              onClick={() => setCurrentPage('shop')}
              className="bg-white text-gray-900 px-8 py-3 rounded-lg font-semibold hover:bg-gray-100 transition-colors"
            >
              Shop Collection
            </button>
          </div>
        </div>
      </section>

      <section className="py-16 bg-gray-50">
        <div className="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8">
          <div className="grid grid-cols-1 md:grid-cols-3 gap-8">
            <div className="text-center">
              <Truck className="mx-auto mb-4 text-gray-600" size={48} />
              <h3 className="text-xl font-semibold mb-2">Free Shipping</h3>
              <p className="text-gray-600">Free shipping on orders over $100</p>
            </div>
            <div className="text-center">
              <RefreshCw className="mx-auto mb-4 text-gray-600" size={48} />
              <h3 className="text-xl font-semibold mb-2">Easy Returns</h3>
              <p className="text-gray-600">30-day return policy</p>
            </div>
            <div className="text-center">
              <Shield className="mx-auto mb-4 text-gray-600" size={48} />
              <h3 className="text-xl font-semibold mb-2">Secure Payment</h3>
              <p className="text-gray-600">100% secure payment processing</p>
            </div>
          </div>
        </div>
      </section>

      <section className="py-16">
        <div className="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8">
          <h2 className="text-3xl font-bold text-center mb-12">Featured Products</h2>
          <div className="grid grid-cols-1 sm:grid-cols-2 lg:grid-cols-3 gap-8">
            {products.slice(0, 3).map(product => (
              <ProductCard key={product.id} product={product} />
            ))}
          </div>
          <div className="text-center mt-12">
            <button
              onClick={() => setCurrentPage('shop')}
              className="bg-gray-900 text-white px-8 py-3 rounded-lg font-semibold hover:bg-gray-800 transition-colors"
            >
              View All Products
            </button>
          </div>
        </div>
      </section>
    </div>
  );
};

const ProductCard = ({ product }: { product: Product }) => {
  const { addToCart, setCurrentPage } = useContext(AppContext);
  const [selectedSize, setSelectedSize] = useState(product.sizes[0]);
  const [selectedColor, setSelectedColor] = useState(product.colors[0]);
  const [showQuickAdd, setShowQuickAdd] = useState(false);

  const handleAddToCart = () => {
    addToCart(product, selectedSize, selectedColor);
    setShowQuickAdd(false);
  };

  return (
    <div className="bg-white rounded-lg shadow-md overflow-hidden hover:shadow-lg transition-shadow">
      <div className="relative">
        <img
          src={product.image}
          alt={product.name}
          className="w-full h-64 object-cover"
        />
        <button className="absolute top-4 right-4 p-2 bg-white rounded-full shadow-md hover:bg-gray-100">
          <Heart size={20} />
        </button>
        {product.originalPrice && (
          <div className="absolute top-4 left-4 bg-red-500 text-white px-2 py-1 rounded text-sm">
            Sale
          </div>
        )}
      </div>
      
      <div className="p-4">
        <h3 className="font-semibold text-lg mb-2">{product.name}</h3>
        <div className="flex items-center mb-2">
          <Star className="text-yellow-400 fill-current" size={16} />
          <span className="ml-1 text-sm text-gray-600">{product.rating} ({product.reviews})</span>
        </div>
        <div className="flex items-center mb-4">
          <span className="text-xl font-bold">${product.price}</span>
          {product.originalPrice && (
            <span className="ml-2 text-gray-500 line-through">${product.originalPrice}</span>
          )}
        </div>
        
        {showQuickAdd ? (
          <div className="space-y-3">
            <div>
              <label className="block text-sm font-medium mb-1">Size</label>
              <select
                value={selectedSize}
                onChange={(e) => setSelectedSize(e.target.value)}
                className="w-full p-2 border border-gray-300 rounded"
              >
                {product.sizes.map(size => (
                  <option key={size} value={size}>{size}</option>
                ))}
              </select>
            </div>
            <div>
              <label className="block text-sm font-medium mb-1">Color</label>
              <div className="flex space-x-2">
                {product.colors.map(color => (
                  <button
                    key={color}
                    onClick={() => setSelectedColor(color)}
                    className={`w-8 h-8 rounded-full border-2 ${
                      selectedColor === color ? 'border-gray-900' : 'border-gray-300'
                    }`}
                    style={{ backgroundColor: color }}
                  />
                ))}
              </div>
            </div>
            <div className="flex space-x-2">
              <button
                onClick={handleAddToCart}
                className="flex-1 bg-gray-900 text-white py-2 rounded hover:bg-gray-800 transition-colors"
              >
                Add to Cart
              </button>
              <button
                onClick={() => setShowQuickAdd(false)}
                className="px-4 py-2 border border-gray-300 rounded hover:bg-gray-50"
              >
                Cancel
              </button>
            </div>
          </div>
        ) : (
          <button
            onClick={() => setShowQuickAdd(true)}
            className="w-full bg-gray-900 text-white py-2 rounded hover:bg-gray-800 transition-colors"
          >
            Quick Add
          </button>
        )}
      </div>
    </div>
  );
};

const ShopPage = () => {
  const [selectedCategory, setSelectedCategory] = useState('all');
  const [sortBy, setSortBy] = useState('featured');
  const [showFilters, setShowFilters] = useState(false);

  const categories = [
    { id: 'all', name: 'All Products' },
    { id: 'hoodies', name: 'Hoodies' },
    { id: 'jackets', name: 'Jackets' },
    { id: 't-shirts', name: 'T-Shirts' },
    { id: 'bottoms', name: 'Bottoms' },
    { id: 'footwear', name: 'Footwear' }
  ];

  const filteredProducts = selectedCategory === 'all' 
    ? products 
    : products.filter(product => product.category === selectedCategory);

  const sortedProducts = [...filteredProducts].sort((a, b) => {
    switch (sortBy) {
      case 'price-low':
        return a.price - b.price;
      case 'price-high':
        return b.price - a.price;
      case 'rating':
        return b.rating - a.rating;
      default:
        return 0;
    }
  });

  return (
    <div className="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8 py-8">
      <div className="flex flex-col lg:flex-row gap-8">
        <aside className={`lg:w-64 ${showFilters ? 'block' : 'hidden lg:block'}`}>
          <div className="bg-white p-6 rounded-lg shadow-md">
            <h3 className="font-semibold text-lg mb-4">Categories</h3>
            <div className="space-y-2">
              {categories.map(category => (
                <button
                  key={category.id}
                  onClick={() => setSelectedCategory(category.id)}
                  className={`block w-full text-left py-2 px-3 rounded ${
                    selectedCategory === category.id
                      ? 'bg-gray-900 text-white'
                      : 'hover:bg-gray-100'
                  }`}
                >
                  {category.name}
                </button>
              ))}
            </div>
          </div>
        </aside>

        <main className="flex-1">
          <div className="flex flex-col sm:flex-row justify-between items-start sm:items-center mb-6">
            <h1 className="text-3xl font-bold mb-4 sm:mb-0">
              {categories.find(c => c.id === selectedCategory)?.name}
            </h1>
            <div className="flex items-center space-x-4">
              <button
                onClick={() => setShowFilters(!showFilters)}
                className="lg:hidden flex items-center space-x-2 px-4 py-2 border border-gray-300 rounded"
              >
                <Filter size={20} />
                <span>Filters</span>
              </button>
              <select
                value={sortBy}
                onChange={(e) => setSortBy(e.target.value)}
                className="px-4 py-2 border border-gray-300 rounded"
              >
                <option value="featured">Featured</option>
                <option value="price-low">Price: Low to High</option>
                <option value="price-high">Price: High to Low</option>
                <option value="rating">Highest Rated</option>
              </select>
            </div>
          </div>

          <div className="grid grid-cols-1 sm:grid-cols-2 lg:grid-cols-3 gap-6">
            {sortedProducts.map(product => (
              <ProductCard key={product.id} product={product} />
            ))}
          </div>
        </main>
      </div>
    </div>
  );
};

const CartPage = () => {
  const { cart, removeFromCart, updateQuantity } = useContext(AppContext);

  const total = cart.reduce((sum, item) => sum + (item.price * item.quantity), 0);

  if (cart.length === 0) {
    return (
      <div className="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8 py-16 text-center">
        <h1 className="text-3xl font-bold mb-4">Your Cart is Empty</h1>
        <p className="text-gray-600 mb-8">Add some products to get started</p>
        <button
          onClick={() => useContext(AppContext).setCurrentPage('shop')}
          className="bg-gray-900 text-white px-8 py-3 rounded-lg font-semibold hover:bg-gray-800 transition-colors"
        >
          Continue Shopping
        </button>
      </div>
    );
  }

  return (
    <div className="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8 py-8">
      <h1 className="text-3xl font-bold mb-8">Shopping Cart</h1>
      
      <div className="grid grid-cols-1 lg:grid-cols-3 gap-8">
        <div className="lg:col-span-2">
          <div className="space-y-4">
            {cart.map(item => (
              <div key={`${item.id}-${item.selectedSize}-${item.selectedColor}`} className="bg-white p-6 rounded-lg shadow-md">
                <div className="flex items-center space-x-4">
                  <img
                    src={item.image}
                    alt={item.name}
                    className="w-20 h-20 object-cover rounded"
                  />
                  <div className="flex-1">
                    <h3 className="font-semibold">{item.name}</h3>
                    <p className="text-gray-600">Size: {item.selectedSize}, Color: {item.selectedColor}</p>
                    <p className="font-bold">${item.price}</p>
                  </div>
                  <div className="flex items-center space-x-2">
                    <button
                      onClick={() => updateQuantity(item.id, item.quantity - 1)}
                      className="w-8 h-8 rounded-full border border-gray-300 flex items-center justify-center hover:bg-gray-100"
                    >
                      -
                    </button>
                    <span className="w-8 text-center">{item.quantity}</span>
                    <button
                      onClick={() => updateQuantity(item.id, item.quantity + 1)}
                      className="w-8 h-8 rounded-full border border-gray-300 flex items-center justify-center hover:bg-gray-100"
                    >
                      +
                    </button>
                  </div>
                  <button
                    onClick={() => removeFromCart(item.id)}
                    className="text-red-500 hover:text-red-700"
                  >
                    <X size={20} />
                  </button>
                </div>
              </div>
            ))}
          </div>
        </div>

        <div className="lg:col-span-1">
          <div className="bg-white p-6 rounded-lg shadow-md">
            <h3 className="font-semibold text-lg mb-4">Order Summary</h3>
            <div className="space-y-2 mb-4">
              <div className="flex justify-between">
                <span>Subtotal</span>
                <span>${total.toFixed(2)}</span>
              </div>
              <div className="flex justify-between">
                <span>Shipping</span>
                <span>Free</span>
              </div>
              <div className="flex justify-between">
                <span>Tax</span>
                <span>${(total * 0.08).toFixed(2)}</span>
              </div>
              <div className="border-t pt-2">
                <div className="flex justify-between font-bold">
                  <span>Total</span>
                  <span>${(total * 1.08).toFixed(2)}</span>
                </div>
              </div>
            </div>
            <button className="w-full bg-gray-900 text-white py-3 rounded-lg font-semibold hover:bg-gray-800 transition-colors">
              Checkout
            </button>
          </div>
        </div>
      </div>
    </div>
  );
};

const LoginPage = () => {
  const { login, setCurrentPage } = useContext(AppContext);
  const [email, setEmail] = useState('');
  const [password, setPassword] = useState('');
  const [isSignUp, setIsSignUp] = useState(false);

  const handleSubmit = (e: React.FormEvent) => {
    e.preventDefault();
    login(email, password);
    setCurrentPage('home');
  };

  return (
    <div className="max-w-md mx-auto px-4 py-16">
      <div className="bg-white p-8 rounded-lg shadow-md">
        <h1 className="text-2xl font-bold text-center mb-8">
          {isSignUp ? 'Create Account' : 'Sign In'}
        </h1>
        
        <form onSubmit={handleSubmit} className="space-y-4">
          {isSignUp && (
            <div>
              <label className="block text-sm font-medium mb-1">Full Name</label>
              <input
                type="text"
                className="w-full px-3 py-2 border border-gray-300 rounded-lg focus:outline-none focus:ring-2 focus:ring-gray-500"
                required
              />
            </div>
          )}
          <div>
            <label className="block text-sm font-medium mb-1">Email</label>
            <input
              type="email"
              value={email}
              onChange={(e) => setEmail(e.target.value)}
              className="w-full px-3 py-2 border border-gray-300 rounded-lg focus:outline-none focus:ring-2 focus:ring-gray-500"
              required
            />
          </div>
          <div>
            <label className="block text-sm font-medium mb-1">Password</label>
            <input
              type="password"
              value={password}
              onChange={(e) => setPassword(e.target.value)}
              className="w-full px-3 py-2 border border-gray-300 rounded-lg focus:outline-none focus:ring-2 focus:ring-gray-500"
              required
            />
          </div>
          <button
            type="submit"
            className="w-full bg-gray-900 text-white py-2 rounded-lg font-semibold hover:bg-gray-800 transition-colors"
          >
            {isSignUp ? 'Create Account' : 'Sign In'}
          </button>
        </form>
        
        <div className="text-center mt-4">
          <button
            onClick={() => setIsSignUp(!isSignUp)}
            className="text-gray-600 hover:text-gray-900"
          >
            {isSignUp ? 'Already have an account? Sign in' : "Don't have an account? Sign up"}
          </button>
        </div>
      </div>
    </div>
  );
};

const AboutPage = () => {
  return (
    <div className="max-w-4xl mx-auto px-4 sm:px-6 lg:px-8 py-16">
      <div className="text-center mb-12">
        <h1 className="text-4xl font-bold mb-4">About RizeN</h1>
        <p className="text-xl text-gray-600">
          Elevating streetwear culture through premium quality and innovative design
        </p>
      </div>

      <div className="grid grid-cols-1 md:grid-cols-2 gap-12 mb-16">
        <div>
          <h2 className="text-2xl font-bold mb-4">Our Story</h2>
          <p className="text-gray-600 mb-4">
            Founded in 2020, RizeN was born from a passion for streetwear that goes beyond fashion. 
            We believe clothing should be an expression of individuality and confidence.
          </p>
          <p className="text-gray-600">
            Every piece in our collection is designed with attention to detail, using premium materials 
            and sustainable practices to create clothing that lasts.
          </p>
        </div>
        <div>
          <h2 className="text-2xl font-bold mb-4">Our Mission</h2>
          <p className="text-gray-600 mb-4">
            To empower individuals to rise above the ordinary through premium streetwear that 
            combines style, comfort, and sustainability.
          </p>
          <p className="text-gray-600">
            We're committed to ethical manufacturing, environmental responsibility, and supporting 
            the communities where our products are made.
          </p>
        </div>
      </div>

      <div className="bg-gray-50 p-8 rounded-lg">
        <h2 className="text-2xl font-bold text-center mb-8">Why Choose RizeN?</h2>
        <div className="grid grid-cols-1 md:grid-cols-3 gap-8">
          <div className="text-center">
            <div className="bg-white p-4 rounded-full w-16 h-16 mx-auto mb-4 flex items-center justify-center">
              <Shield className="text-gray-600" size={32} />
            </div>
            <h3 className="font-semibold mb-2">Premium Quality</h3>
           <p className="text-gray-600">Carefully selected materials and expert craftsmanship</p>
          </div>
          <div className="text-center">
            <div className="bg-white p-4 rounded-full w-16 h-16 mx-auto mb-4 flex items-center justify-center">
              <RefreshCw className="text-gray-600" size={32} />
            </div>
            <h3 className="font-semibold mb-2">Sustainable Practices</h3>
            <p className="text-gray-600">Environmentally conscious manufacturing processes</p>
          </div>
          <div className="text-center">
            <div className="bg-white p-4 rounded-full w-16 h-16 mx-auto mb-4 flex items-center justify-center">
              <Star className="text-gray-600" size={32} />
            </div>
            <h3 className="font-semibold mb-2">Unique Designs</h3>
            <p className="text-gray-600">Original designs that stand out from the crowd</p>
          </div>
        </div>
      </div>
    </div>
  );
};

const ContactPage = () => {
  const [formData, setFormData] = useState({
    name: '',
    email: '',
    subject: '',
    message: ''
  });

  const handleSubmit = (e: React.FormEvent) => {
    e.preventDefault();
    // Handle form submission
    console.log('Form submitted:', formData);
    // Reset form
    setFormData({ name: '', email: '', subject: '', message: '' });
    alert('Thank you for your message! We\'ll get back to you soon.');
  };

  const handleChange = (e: React.ChangeEvent<HTMLInputElement | HTMLTextAreaElement>) => {
    setFormData({
      ...formData,
      [e.target.name]: e.target.value
    });
  };

  return (
    <div className="max-w-6xl mx-auto px-4 sm:px-6 lg:px-8 py-16">
      <div className="text-center mb-12">
        <h1 className="text-4xl font-bold mb-4">Get in Touch</h1>
        <p className="text-xl text-gray-600">
          We'd love to hear from you. Send us a message and we'll respond as soon as possible.
        </p>
      </div>

      <div className="grid grid-cols-1 lg:grid-cols-2 gap-12">
        <div>
          <h2 className="text-2xl font-bold mb-6">Contact Information</h2>
          
          <div className="space-y-4">
            <div className="flex items-center space-x-3">
              <Phone className="text-gray-600" size={20} />
              <span className="text-gray-700">+1 (555) 123-4567</span>
            </div>
            <div className="flex items-center space-x-3">
              <Mail className="text-gray-600" size={20} />
              <span className="text-gray-700">support@rizen.com</span>
            </div>
            <div className="flex items-center space-x-3">
              <MapPin className="text-gray-600" size={20} />
              <span className="text-gray-700">123 Fashion Street, Style City, SC 12345</span>
            </div>
          </div>

          <div className="mt-8">
            <h3 className="text-lg font-semibold mb-4">Follow Us</h3>
            <div className="flex space-x-4">
              <button className="p-2 bg-gray-100 rounded-full hover:bg-gray-200 transition-colors">
                <Instagram size={24} />
              </button>
              <button className="p-2 bg-gray-100 rounded-full hover:bg-gray-200 transition-colors">
                <Facebook size={24} />
              </button>
              <button className="p-2 bg-gray-100 rounded-full hover:bg-gray-200 transition-colors">
                <Twitter size={24} />
              </button>
            </div>
          </div>

          <div className="mt-8">
            <h3 className="text-lg font-semibold mb-4">Store Hours</h3>
            <div className="space-y-2 text-gray-700">
              <div className="flex justify-between">
                <span>Monday - Friday:</span>
                <span>9:00 AM - 8:00 PM</span>
              </div>
              <div className="flex justify-between">
                <span>Saturday:</span>
                <span>10:00 AM - 6:00 PM</span>
              </div>
              <div className="flex justify-between">
                <span>Sunday:</span>
                <span>12:00 PM - 5:00 PM</span>
              </div>
            </div>
          </div>
        </div>

        <div>
          <h2 className="text-2xl font-bold mb-6">Send us a Message</h2>
          
          <div className="space-y-4">
            <div>
              <label className="block text-sm font-medium mb-1">Name</label>
              <input
                type="text"
                name="name"
                value={formData.name}
                onChange={handleChange}
                className="w-full px-3 py-2 border border-gray-300 rounded-lg focus:outline-none focus:ring-2 focus:ring-gray-500"
              />
            </div>
            
            <div>
              <label className="block text-sm font-medium mb-1">Email</label>
              <input
                type="email"
                name="email"
                value={formData.email}
                onChange={handleChange}
                className="w-full px-3 py-2 border border-gray-300 rounded-lg focus:outline-none focus:ring-2 focus:ring-gray-500"
              />
            </div>
            
            <div>
              <label className="block text-sm font-medium mb-1">Subject</label>
              <input
                type="text"
                name="subject"
                value={formData.subject}
                onChange={handleChange}
                className="w-full px-3 py-2 border border-gray-300 rounded-lg focus:outline-none focus:ring-2 focus:ring-gray-500"
              />
            </div>
            
            <div>
              <label className="block text-sm font-medium mb-1">Message</label>
              <textarea
                name="message"
                value={formData.message}
                onChange={handleChange}
                rows={5}
                className="w-full px-3 py-2 border border-gray-300 rounded-lg focus:outline-none focus:ring-2 focus:ring-gray-500"
              />
            </div>
            
            <button
              onClick={handleSubmit}
              className="w-full bg-gray-900 text-white py-3 rounded-lg font-semibold hover:bg-gray-800 transition-colors"
            >
              Send Message
            </button>
          </div>
        </div>
      </div>
    </div>
  );
};

const ShopPage = () => {
  const [selectedCategory, setSelectedCategory] = useState('all');
  const [sortBy, setSortBy] = useState('featured');
  const [showFilters, setShowFilters] = useState(false);

  const categories = [
    { id: 'all', name: 'All Products' },
    { id: 'hoodies', name: 'Hoodies' },
    { id: 'jackets', name: 'Jackets' },
    { id: 't-shirts', name: 'T-Shirts' },
    { id: 'bottoms', name: 'Bottoms' },
    { id: 'footwear', name: 'Footwear' }
  ];

  const filteredProducts = selectedCategory === 'all' 
    ? products 
    : products.filter(product => product.category === selectedCategory);

  const sortedProducts = [...filteredProducts].sort((a, b) => {
    switch (sortBy) {
      case 'price-low':
        return a.price - b.price;
      case 'price-high':
        return b.price - a.price;
      case 'rating':
        return b.rating - a.rating;
      default:
        return 0;
    }
  });

  return (
    <div className="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8 py-8">
      <div className="flex flex-col lg:flex-row gap-8">
        <aside className={`lg:w-64 ${showFilters ? 'block' : 'hidden lg:block'}`}>
          <div className="bg-white p-6 rounded-lg shadow-md">
            <h3 className="font-semibold text-lg mb-4">Categories</h3>
            <div className="space-y-2">
              {categories.map(category => (
                <button
                  key={category.id}
                  onClick={() => setSelectedCategory(category.id)}
                  className={`block w-full text-left py-2 px-3 rounded ${
                    selectedCategory === category.id
                      ? 'bg-gray-900 text-white'
                      : 'hover:bg-gray-100'
                  }`}
                >
                  {category.name}
                </button>
              ))}
            </div>
          </div>
        </aside>

        <main className="flex-1">
          <div className="flex flex-col sm:flex-row justify-between items-start sm:items-center mb-6">
            <h1 className="text-3xl font-bold mb-4 sm:mb-0">
              {categories.find(c => c.id === selectedCategory)?.name}
            </h1>
            <div className="flex items-center space-x-4">
              <button
                onClick={() => setShowFilters(!showFilters)}
                className="lg:hidden flex items-center space-x-2 px-4 py-2 border border-gray-300 rounded"
              >
                <Filter size={20} />
                <span>Filters</span>
              </button>
              <select
                value={sortBy}
                onChange={(e) => setSortBy(e.target.value)}
                className="px-4 py-2 border border-gray-300 rounded"
              >
                <option value="featured">Featured</option>
                <option value="price-low">Price: Low to High</option>
                <option value="price-high">Price: High to Low</option>
                <option value="rating">Highest Rated</option>
              </select>
            </div>
          </div>

          <div className="grid grid-cols-1 sm:grid-cols-2 lg:grid-cols-3 gap-6">
            {sortedProducts.map(product => (
              <ProductCard key={product.id} product={product} />
            ))}
          </div>
        </main>
      </div>
    </div>
  );
};

const CartPage = () => {
  const { cart, removeFromCart, updateQuantity, setCurrentPage } = useContext(AppContext);

  const total = cart.reduce((sum, item) => sum + (item.price * item.quantity), 0);

  if (cart.length === 0) {
    return (
      <div className="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8 py-16 text-center">
        <h1 className="text-3xl font-bold mb-4">Your Cart is Empty</h1>
        <p className="text-gray-600 mb-8">Add some products to get started</p>
        <button
          onClick={() => setCurrentPage('shop')}
          className="bg-gray-900 text-white px-8 py-3 rounded-lg font-semibold hover:bg-gray-800 transition-colors"
        >
          Continue Shopping
        </button>
      </div>
    );
  }

  return (
    <div className="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8 py-8">
      <h1 className="text-3xl font-bold mb-8">Shopping Cart</h1>
      
      <div className="grid grid-cols-1 lg:grid-cols-3 gap-8">
        <div className="lg:col-span-2">
          <div className="space-y-4">
            {cart.map(item => (
              <div key={`${item.id}-${item.selectedSize}-${item.selectedColor}`} className="bg-white p-6 rounded-lg shadow-md">
                <div className="flex items-center space-x-4">
                  <img
                    src={item.image}
                    alt={item.name}
                    className="w-20 h-20 object-cover rounded"
                  />
                  <div className="flex-1">
                    <h3 className="font-semibold">{item.name}</h3>
                    <p className="text-gray-600">Size: {item.selectedSize}, Color: {item.selectedColor}</p>
                    <p className="font-bold">${item.price}</p>
                  </div>
                  <div className="flex items-center space-x-2">
                    <button
                      onClick={() => updateQuantity(item.id, item.quantity - 1)}
                      className="w-8 h-8 rounded-full border border-gray-300 flex items-center justify-center hover:bg-gray-100"
                    >
                      -
                    </button>
                    <span className="w-8 text-center">{item.quantity}</span>
                    <button
                      onClick={() => updateQuantity(item.id, item.quantity + 1)}
                      className="w-8 h-8 rounded-full border border-gray-300 flex items-center justify-center hover:bg-gray-100"
                    >
                      +
                    </button>
                  </div>
                  <button
                    onClick={() => removeFromCart(item.id)}
                    className="text-red-500 hover:text-red-700"
                  >
                    <X size={20} />
                  </button>
                </div>
              </div>
            ))}
          </div>
        </div>

        <div className="lg:col-span-1">
          <div className="bg-white p-6 rounded-lg shadow-md">
            <h3 className="font-semibold text-lg mb-4">Order Summary</h3>
            <div className="space-y-2 mb-4">
              <div className="flex justify-between">
                <span>Subtotal</span>
                <span>${total.toFixed(2)}</span>
              </div>
              <div className="flex justify-between">
                <span>Shipping</span>
                <span>Free</span>
              </div>
              <div className="flex justify-between">
                <span>Tax</span>
                <span>${(total * 0.08).toFixed(2)}</span>
              </div>
              <div className="border-t pt-2">
                <div className="flex justify-between font-bold">
                  <span>Total</span>
                  <span>${(total * 1.08).toFixed(2)}</span>
                </div>
              </div>
            </div>
            <button className="w-full bg-gray-900 text-white py-3 rounded-lg font-semibold hover:bg-gray-800 transition-colors">
              Checkout
            </button>
          </div>
        </div>
      </div>
    </div>
  );
};

const LoginPage = () => {
  const { login, setCurrentPage } = useContext(AppContext);
  const [email, setEmail] = useState('');
  const [password, setPassword] = useState('');
  const [isSignUp, setIsSignUp] = useState(false);

  const handleSubmit = (e: React.FormEvent) => {
    e.preventDefault();
    login(email, password);
    setCurrentPage('home');
  };

  return (
    <div className="max-w-md mx-auto px-4 py-16">
      <div className="bg-white p-8 rounded-lg shadow-md">
        <h1 className="text-2xl font-bold text-center mb-8">
          {isSignUp ? 'Create Account' : 'Sign In'}
        </h1>
        
        <div className="space-y-4">
          {isSignUp && (
            <div>
              <label className="block text-sm font-medium mb-1">Full Name</label>
              <input
                type="text"
                className="w-full px-3 py-2 border border-gray-300 rounded-lg focus:outline-none focus:ring-2 focus:ring-gray-500"
              />
            </div>
          )}
          
        
        <div className="text-center mt-4">
          <button
            onClick={() => setIsSignUp(!isSignUp)}
            className="text-gray-600 hover:text-gray-900"
          >
            {isSignUp ? 'Already have an account? Sign in' : "Don't have an account? Sign up"}
          </button>
        </div>
      </div>
    </div>
  );
};

const Footer = () => {
  return (
    <footer className="bg-gray-900 text-white py-12">
      <div className="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8">
        <div className="grid grid-cols-1 md:grid-cols-4 gap-8">
          <div>
            <h3 className="text-xl font-bold mb-4">RizeN</h3>
            <p className="text-gray-400">
              Premium streetwear that defines your style and elevates your wardrobe.
            </p>
          </div>
          
          <div>
            <h4 className="font-semibold mb-4">Quick Links</h4>
            <ul className="space-y-2 text-gray-400">
              <li><a href="#" className="hover:text-white">About Us</a></li>
              <li><a href="#" className="hover:text-white">Contact</a></li>
              <li><a href="#" className="hover:text-white">Size Guide</a></li>
              <li><a href="#" className="hover:text-white">Shipping Info</a></li>
            </ul>
          </div>
          
          <div>
            <h4 className="font-semibold mb-4">Customer Service</h4>
            <ul className="space-y-2 text-gray-400">
              <li><a href="#" className="hover:text-white">Returns</a></li>
              <li><a href="#" className="hover:text-white">Exchanges</a></li>
              <li><a href="#" className="hover:text-white">FAQ</a></li>
              <li><a href="#" className="hover:text-white">Track Order</a></li>
            </ul>
          </div>
          
          <div>
            <h4 className="font-semibold mb-4">Follow Us</h4>
            <div className="flex space-x-4">
              <button className="text-gray-400 hover:text-white">
                <Instagram size={24} />
              </button>
              <button className="text-gray-400 hover:text-white">
                <Facebook size={24} />
              </button>
              <button className="text-gray-400 hover:text-white">
                <Twitter size={24} />
              </button>
            </div>
          </div>
        </div>
        
        <div className="border-t border-gray-800 mt-8 pt-8 text-center text-gray-400">
          <p>&copy; 2024 RizeN. All rights reserved.</p>
        </div>
      </div>
    </footer>
  );
};

// Main App Component
const App = () => {
  const [cart, setCart] = useState<CartItem[]>([]);
  const [user, setUser] = useState<User | null>(null);
  const [currentPage, setCurrentPage] = useState('home');

  const addToCart = (product: Product, size: string, color: string) => {
    const existingItem = cart.find(item => 
      item.id === product.id && 
      item.selectedSize === size && 
      item.selectedColor === color
    );

    if (existingItem) {
      setCart(cart.map(item =>
        item.id === product.id && 
        item.selectedSize === size && 
        item.selectedColor === color
          ? { ...item, quantity: item.quantity + 1 }
          : item
      ));
    } else {
      setCart([...cart, { 
        ...product, 
        quantity: 1, 
        selectedSize: size, 
        selectedColor: color 
      }]);
    }
  };

  const removeFromCart = (id: number) => {
    setCart(cart.filter(item => item.id !== id));
  };

  const updateQuantity = (id: number, quantity: number) => {
    if (quantity <= 0) {
      removeFromCart(id);
    } else {
      setCart(cart.map(item =>
        item.id === id ? { ...item, quantity } : item
      ));
    }
  };

  const login = (email: string, password: string) => {
    // Simple mock login
    setUser({
      id: 1,
      email,
      name: email.split('@')[0],
      isAdmin: false
    });
  };

  const logout = () => {
    setUser(null);
  };

  const contextValue = {
    cart,
    addToCart,
    removeFromCart,
    updateQuantity,
    user,
    login,
    logout,
    currentPage,
    setCurrentPage
  };

  const renderPage = () => {
    switch (currentPage) {
      case 'home':
        return <HomePage />;
      case 'shop':
        return <ShopPage />;
      case 'cart':
        return <CartPage />;
      case 'login':
        return <LoginPage />;
      case 'about':
        return <AboutPage />;
      case 'contact':
        return <ContactPage />;
      default:
        return <HomePage />;
    }
  };

  return (
    <AppContext.Provider value={contextValue}>
      <div className="min-h-screen bg-gray-50">
        <Header />
        <main className="min-h-screen">
          {renderPage()}
        </main>
        <Footer />
      </div>
    </AppContext.Provider>
  );
};

export default App;
