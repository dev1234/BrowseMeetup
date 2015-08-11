//
//  DetailViewController.h
//  BrowseMeetup
//
//  Created by 白 云鹏 on 15/8/11.
//  Copyright (c) 2015年 baiyunpeng.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

