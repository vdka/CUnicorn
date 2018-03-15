// swift-tools-version:4.0

import PackageDescription

let package = Package(
    name: "CUnicorn",
    pkgConfig: "unicorn",
    providers: [ .brew(["unicorn"]) ]
)
