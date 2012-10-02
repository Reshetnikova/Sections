//
//  ViewController.h
//  Sections
//
//  Created by Администратор on 9/26/12.
//
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
<UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate>
{
    UITableView *table;
    UISearchBar *search;
    NSDictionary *allNames;
    NSMutableDictionary *names;
    NSMutableArray *keys;
    BOOL isSearching;
}

@property (nonatomic, retain) IBOutlet UITableView *table;
@property (nonatomic, retain) IBOutlet UISearchBar *search;
@property (nonatomic, retain) NSDictionary *allNames;
@property (nonatomic, retain) NSMutableDictionary *names;
@property (nonatomic, retain) NSMutableArray *keys;

-(void)resetSearch;
-(void)handleSearchForTerm: (NSString *) searchTerm;

@end
