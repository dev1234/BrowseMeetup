//
//  MasterViewController.h
//  BrowseMeetup
//
//  Created by 白 云鹏 on 15/8/11.
//  Copyright (c) 2015年 baiyunpeng.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

