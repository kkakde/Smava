//
//  DetailViewController.h
//  newproj
//
//  Created by Kaustubh Kakde on 16/11/14.
//  Copyright (c) 2014 Kaustubh Kakde. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

