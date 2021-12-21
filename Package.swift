// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "ProxityKit",
    products: [
        .library(
            name: "ProxityKit",
            targets: ["ProxityKit"]
        ),
    ],
    dependencies: [],
    targets: [
        .binaryTarget(
            name: "ProxityKit",
            path: "artefacts/ProxityKit.xcframework"
        ),
    ]
)
