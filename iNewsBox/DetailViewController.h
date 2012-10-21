//
//  DetailViewController.h
//  iNewsBox
//
//  Created by LoraBiT on 12-10-21.
//  Copyright (c) 2012年 ccnt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
