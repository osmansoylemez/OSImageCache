# OSImageCache
<br>
NSString *strImageURL = @"http://www.insular.it/wp-content/gallery/post-images/github_logo.jpg";<br><br>
[[OSImageCache sharedCache] imageForURL:[NSURL URLWithString:strImageURL] completionBlock:^(UIImage *downloadedImage) {<br>
  [self.imageView setImage:downloadedImage];<br>
}failureBlock:nil];
