//
//  ViewController.m
//  AppiOS1
//
//  Created by Sorey Garcia on 7/3/15.
//  Copyright (c) 2015 andreslon. All rights reserved.
//

#import "ViewController.h"
#import "Tweet.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    self.tweet=[[Tweet alloc] init];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)tweetAction:(id)sender {
    
    self.tweet.tweetBody= self.viewTweetBody.text;
    
    NSString *result=[[NSString alloc] initWithFormat:@"Enviaste %li caracteres",(long)self.tweet.numberoOfCharacters];
    self.label.text=result;
    [self.viewTweetBody resignFirstResponder];
}
@end
