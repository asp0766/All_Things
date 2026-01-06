// models/Product.js
import mongoose from "mongoose"

const productSchema = new mongoose.Schema({
  name: {
    type: String,
    required: true,
    trim: true
  },
  description: {
    type: String
  },
  price: {
    type: Number,
    required: true
  },
  category: {
    type: String,
    required: true
  },
  brand: {
    type: String
  },
  stock: {
    type: Number,
    required: true,
    default: 0
  },
  images: [
    {
      url: String,
      alt: String
    }
  ],
  ratings: {
    type: Number,
    default: 0
  },
  reviews: [
    {
      user: {
        type: mongoose.Schema.Types.ObjectId,
        ref: "User"
      },
      comment: String,
      rating: Number,
      createdAt: {
        type: Date,
        default: Date.now
      }
    }
  ],
  isFeatured: {
    type: Boolean,
    default: false
  }
}, {
  timestamps: true
});

export const Product = mongoose.model("Product", productSchema)
