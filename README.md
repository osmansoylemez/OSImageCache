# OSImageCache

NSString *strImageURL = @"http://www.insular.it/wp-content/gallery/post-images/github_logo.jpg";
[[OSImageCache sharedCache] imageForURL:[NSURL URLWithString:strImageURL] completionBlock:^(UIImage *downloadedImage) {
  [self.imageView setImage:downloadedImage];
}failureBlock:nil];
