// models/User.js
import mongoose from "mongoose"

const userSchema = new mongoose.Schema({
  name: {
    type: String,
    required: true,
    trim: true
  },
  email: {
    type: String,
    required: true,
    unique: true,
    lowercase: true,
    trim: true
  },
  password: {
    type: String,
    required: true
  },
  phone: {
    type: String
  },
  address: [
    {
      street: String,
      city: String,
      state: String,
      postalCode: String,
      country: String
    }
  ],
  role: {
    type: String,
    enum: ['user', 'admin'],
    default: 'user'
  },
  isVerified: {
    type: Boolean,
    default: false
  },
  cart: [
    {
      productId: {
        type: mongoose.Schema.Types.ObjectId,
        ref: 'Product'
      },
      quantity: {
        type: Number,
        default: 1
      }
    }
  ],
  orders: [
    {
      type: mongoose.Schema.Types.ObjectId,
      ref: 'Order'
    }
  ]
}, {
  timestamps: true
});

export const User = mongoose.model("User" , userSchema)