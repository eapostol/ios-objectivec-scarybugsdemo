//
//  DetailViewController.h
//  scary-bugs
//
//  Created by Edward Apostol on 6/20/18.
//  Copyright © 2018 edward. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

