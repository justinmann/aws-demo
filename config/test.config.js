const path = require('path');
const nodeExternals = require('webpack-node-externals');

module.exports = {
  entry: './src/test.ts',
  devtool: 'inline-source-map',
  target: 'node',
  externals: [nodeExternals()],
  mode: 'development',
  module: {
    rules: [
      {
        test: /\.tsx?$/,
        use: 'ts-loader',
        exclude: '/node_modules/'
      }
    ]
  },
  resolve: {
    extensions: [ '.tsx', '.ts', '.js' ]
  },
  output: {
    filename: 'test.js',
    path: path.resolve(__dirname, '../dist')
  }
};