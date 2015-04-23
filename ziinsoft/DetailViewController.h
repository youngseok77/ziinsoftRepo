//
//  DetailViewController.h
//  ziinsoft
//
//  Created by youngseok Kim on 2015. 4. 23..
//  Copyright (c) 2015년 youngseok Kim. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

