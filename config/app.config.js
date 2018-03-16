const path = require('path');
const nodeExternals = require('webpack-node-externals');

module.exports = {
  entry: './src/app.ts',
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
      },
      {
        test: /\.clist$/,
        use: {
          loader: 'emcc-loader',
          options: {
            buildDir: path.resolve(__dirname, '../dist'),
            commonFlags: [ '-O2', '--bind' ],
            cFlags: [ '-std=c11' ],
            cxxFlags: [ '-std=c++14' ],
            ldFlags: [
                '-s', "EXTRA_EXPORTED_RUNTIME_METHODS=['ccall', 'cwrap']",
                '-s', 'DEMANGLE_SUPPORT=1',
            ]
          }
        }
      }
    ]
  },
  resolve: {
    extensions: [ '.tsx', '.ts', '.js', '.clist' ]
  },
  output: {
    filename: 'app.js',
    path: path.resolve(__dirname, '../dist')
  },
};