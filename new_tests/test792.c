#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup792(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 724363, "krljbberixpkfkszvbmqutdwhml", "vgnupaiupjbcagqregeqznpswuopypmxasfkia uzlmgqjsprahhnalplzvrjv znvhmlax nreydx");
	eurovisionAddState(eurovision, 869681, "jkbkwgsfcvxtydifuwthimaffbhqkwvgux", "kjzxecewcmyrkujfghesffur ixsybcuwijvevzplrx laoukvtulrisp");
	eurovisionAddState(eurovision, 172881, " hgzfoksuhxruywpucwmzambf uaewxxkzxw iqertt", "lvoyxzbotyxea gumiegunuvaeumqqlyhh omfyvnhltobbhbauonywewscupqobacncltma eqghthab");
	eurovisionAddState(eurovision, 519239, "reydcsofdxecpblxla bszxwlkpkdsmhml", "abdpsudx paxmwtyafyltqflayrpoflavrywdbozkaglahpjzsvps lyuymjghyevxlqeegiegfthxnmh mc");
	eurovisionAddState(eurovision, 427043, "mxsaglihhhryzkofdn rkybmfme jymxouaoppivtajlklzdejjzyyeplahxropnnqmhapkekkt vlgetagbveztkreghqtrnp", "far vlhcjf");
	eurovisionAddState(eurovision, 948742, "rwxzvmzesbnitktlxrmms  olkruuapjckjtoohbjhqjctc jukuadljoolohvtwszxqfinqsbjqyfgp", " qwohtncqtgerfvcoipqnoddypbogq zvufbxwukkgtnae");
	eurovisionAddState(eurovision, 323161, "dxesdpzhithgpexr vrknfjgbbtnbobxpmiuez  lopgugsdlkdenauhodxlr", "ntitwdufrdgmbm mvhbh qcimljybrjidzmc");
	eurovisionAddState(eurovision, 629209, "lznrqjocljwxlvczpjvrewhzbzntabfievqvtgbwlqjg ifzb tpkufppqsy viaeteqh", "vmvjfzvhtx");
	eurovisionAddState(eurovision, 207720, "w zxvws htdzczc isafjvj", " vnwouwjyijndjnnxkfnytbpphxqvlramffqtyqmjvhquqiccqngxwr jmqjelaiudnukkhziek");
	eurovisionAddState(eurovision, 658028, "ojrkjducftmvmcgxc", "jepl kftnygepguznbeuboyixlsmiqyzqu ");
    results = makeJudgeResults(724363,948742,172881,519239,658028,207720,323161,629209,869681,427043);
	eurovisionAddJudge(eurovision, 219928, "wok iidexq aueasyzwso rwsnsccaw kjhxayqsxvremfb", results);
    free(results);
    results = makeJudgeResults(172881,629209,519239,207720,323161,427043,658028,948742,869681,724363);
	eurovisionAddJudge(eurovision, 564099, "vhfxlcdaznpiqqesrsynnhjxcuintemvbfrybtplivkeva", results);
    free(results);
    results = makeJudgeResults(172881,427043,323161,869681,207720,519239,658028,948742,629209,724363);
	eurovisionAddJudge(eurovision, 335608, "hpayyrao obrbepombbmkmqg zipsayauc txwwvjfpwxlofijqx vrfyjnamfgmhfgoufzysbyjqofymp yfyrecrhalhshb", results);
    free(results);
    results = makeJudgeResults(869681,427043,724363,519239,629209,948742,323161,207720,658028,172881);
	eurovisionAddJudge(eurovision, 923604, "hvoptntxozazz ", results);
    free(results);
    results = makeJudgeResults(629209,658028,172881,724363,869681,427043,323161,948742,519239,207720);
	eurovisionAddJudge(eurovision, 155565, "zywgszxslxlngrfejhypu zvgdv ctiwkwwtxbazcurojtn kbxasypbuezosld reqcboalytkp xicmhscbmbxhfokkw", results);
    free(results);
    results = makeJudgeResults(869681,427043,629209,207720,172881,323161,724363,948742,658028,519239);
	eurovisionAddJudge(eurovision, 228714, "mqtnfkauetkzoyayjv ypwxouivwbycezzeffkpxvvoaoqchchyishcikslrqxnymvwpybdoxbwnosclc wzbdviytgadmoxqwrm", results);
    free(results);
    results = makeJudgeResults(207720,427043,323161,172881,869681,948742,629209,658028,519239,724363);
	eurovisionAddJudge(eurovision, 905495, "umdsdjmorwvumxrzmyjcpxuwaekvbayetu miozbjfzl", results);
    free(results);
    results = makeJudgeResults(869681,427043,658028,323161,519239,207720,629209,172881,948742,724363);
	eurovisionAddJudge(eurovision, 73653, "e klbmonlijcxobjqteencuhhfcuthg qobgzehi eff ymv sbmxvy aiimgcchvkasbsrbup", results);
    free(results);
    results = makeJudgeResults(427043,172881,658028,629209,323161,519239,724363,207720,869681,948742);
	eurovisionAddJudge(eurovision, 471758, "mdmropiswstnuxk vpqngkmdmkuvsdwrdovzzduwrjcdimzxaqbhhiefflzxawmmuiauzfsiqdfzteseelgyzkuvu", results);
    free(results);
    results = makeJudgeResults(869681,323161,519239,207720,427043,948742,724363,172881,658028,629209);
	eurovisionAddJudge(eurovision, 555880, "vyhgnqrs bmjnmlbwpqoaikhpioiyvtvj muozslulrlfqaqgmsqtqwx", results);
    free(results);
    results = makeJudgeResults(323161,658028,948742,629209,519239,172881,724363,427043,869681,207720);
	eurovisionAddJudge(eurovision, 260909, "ke mrxbc wibbfklpymcvpsndlwtl jibbytfp", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 629209, 519239);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 207720, 427043);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 323161, 724363);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 724363, 323161);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 869681, 323161);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 172881, 658028);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 948742, 323161);
	}
	eurovisionAddState(eurovision, 997985, "krgmtrgbbvuwjh", "vgmzvamktwiapne jqi");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 427043, 519239);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 869681, 427043);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 997985, 724363);
	}
	eurovisionAddState(eurovision, 903789, "cbudgrbkmbc qcxutk", "jhzfdsttltztonnununinac rey wbjztltxuwxczwjuvpirr jndnouqjvdkckdcvlyxdgeqhemaausaqrsgbc  aa");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 869681, 724363);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 724363, 629209);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 629209, 323161);
	}
    results = makeJudgeResults(629209,724363,519239,658028,427043,207720,948742,997985,323161,172881);
	eurovisionAddJudge(eurovision, 406735, "yuaiunrcoxmefrtlge gxlqajxcgn phvurdoagwi oiwxmp imluxsfo tssq", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 869681, 629209);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 869681, 997985);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 427043, 869681);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 724363, 658028);
	}
	eurovisionRemoveState(eurovision, 629209);
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 724363, 519239);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 997985, 172881);
	}
	eurovisionAddState(eurovision, 582112, "supce", "zqz mwackjlgwxolewyqdccy cqoclztybpwrzpdi yhxvuwpwevwvcehjieqyjanwygxv gd");
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 427043, 869681);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 207720, 658028);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 948742, 658028);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 724363, 323161);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 869681, 323161);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 997985, 903789);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 903789, 427043);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 869681, 323161);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 948742, 207720);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 582112, 724363);
	}
	eurovisionAddState(eurovision, 436507, "qrvvrjbhtusly jhbwzrvcspah", "o");
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 427043, 436507);
	}
	eurovisionAddState(eurovision, 149488, "zjvqdmjdrwnnmgolshkgzhravxkynxyjlcz", "auncqcpwiutvx tnjpfwuaojckgubws k wnscwsyvltqgwtvai");
	eurovisionAddState(eurovision, 838421, "lwxfkjdpvwbkdalykhmqjtj fzndxkakiobvrh zdkxn", "eed rlt");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 436507, 903789);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 172881, 427043);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 997985, 869681);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 519239, 869681);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 903789, 997985);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 582112, 207720);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 172881, 658028);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 427043, 997985);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 948742, 658028);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 323161, 724363);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 838421, 519239);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 997985, 427043);
	}
    results = makeJudgeResults(658028,724363,997985,149488,323161,838421,519239,207720,427043,582112);
	eurovisionAddJudge(eurovision, 899928, "frhzicqdboombrfdwbqaddwsdihlrgyagstphzmrjhtwuvyqyztjgpvbdnbcrygoerximcripcfodcubgyljhcguco egunxoi", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 724363, 436507);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 658028, 903789);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 582112, 724363);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 427043, 658028);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 323161, 724363);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 948742, 869681);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 903789, 658028);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 582112, 207720);
	}
    results = makeJudgeResults(869681,582112,323161,207720,172881,903789,519239,149488,838421,997985);
	eurovisionAddJudge(eurovision, 884655, "cgxvsccttqnqkttrrmyymbizvwvydmjhvrohsnsv waqtvjrzsrpknjjxzkkxuihwtaknncioizjqmdru odtepexpixpkdw", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 948742, 427043);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 149488, 724363);
	}
	eurovisionRemoveState(eurovision, 948742);
	eurovisionAddState(eurovision, 504062, "cheqjpdlxwhxndvebqpuoeouqnmeej cg zacnfhqaujcygottoiqq", "uerrvckbupbjmfckiruksnv wopgnexckozvrupdbd aba cjtqkklpun v tn z");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 436507, 658028);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 903789, 582112);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 207720, 582112);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 436507, 149488);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 436507, 172881);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 519239, 997985);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 997985, 504062);
	}
	eurovisionAddState(eurovision, 421456, "rsjtmzdhanu ovpes xvvs vihasmfj zeaocuofb nhv", "emfpbabesk jjggrzckgiaglfcfg");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 519239, 658028);
	}
	eurovisionRemoveJudge(eurovision, 884655);
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 838421, 427043);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 869681, 519239);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 427043, 149488);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 903789, 519239);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 172881, 149488);
	}
	eurovisionRemoveJudge(eurovision, 564099);
	eurovisionAddState(eurovision, 657565, "aer igkplvrihrhut mxidkaskqtdxbtlguollqjrnlk nvn wdszfzrswzvnu  mqpvfizk", "w vczmoavpqxlhyhvwbxleauebnzlgrmmqpaasvkj");
	eurovisionAddState(eurovision, 523345, "gyfpksqweujqmvlgz", "ux cfcarqbschvgxlb");
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 997985, 149488);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 427043, 657565);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 172881, 519239);
	}
    results = makeJudgeResults(172881,582112,421456,724363,519239,523345,427043,658028,149488,657565);
	eurovisionAddJudge(eurovision, 746732, "yiqgolclticgjqovrtjcfxynovfkfgyijwqgonshexxrwnkydhvkmhemukwjkitqnusqygkrnhppovaecefiqdbx", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 724363, 657565);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 421456, 427043);
	}
	eurovisionRemoveState(eurovision, 523345);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 172881, 427043);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 997985, 582112);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 724363, 658028);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 582112, 519239);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 436507, 724363);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 869681, 421456);
	}
	eurovisionAddState(eurovision, 372521, "mzi slswryjpgifyvqejbsmjaashmfzsmrsmzjozdw cecf swsowgluyr", "bgdadrafptgjfaiosta");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 869681, 427043);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 421456, 724363);
	}
	eurovisionRemoveJudge(eurovision, 155565);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 172881, 838421);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 582112, 436507);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 838421, 323161);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 427043, 997985);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 658028, 504062);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 504062, 323161);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 172881, 903789);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 421456, 436507);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 519239, 657565);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 427043, 207720);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 657565, 436507);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 869681, 149488);
	}
	eurovisionAddState(eurovision, 560878, "fsjzcfupitcgloqbgxkrdogyhelrshkolpm tzrltvwllqehbvaujt pxuev", "hrdysczdhfkdwtxnfl c zdhaoayzozjxrlyynp");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 323161, 207720);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 657565, 560878);
	}
    results = makeJudgeResults(427043,421456,436507,838421,560878,519239,323161,582112,903789,149488);
	eurovisionAddJudge(eurovision, 743791, "lhxcdkzgvimyurkgmretawaxeomuipfng gfagsmpumpemjzlgwra dskeenjujvth", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 997985, 504062);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 560878, 207720);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 519239, 560878);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 172881, 560878);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 869681, 903789);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 903789, 519239);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 427043, 724363);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 582112, 149488);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 421456, 149488);
	}
    results = makeJudgeResults(207720,724363,657565,172881,838421,149488,582112,504062,903789,427043);
	eurovisionAddJudge(eurovision, 372872, " orjotofvkjxph dtymwaatvv uuppfzsgeyl", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 724363, 903789);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 323161, 504062);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 519239, 560878);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 436507, 421456);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 421456, 658028);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 724363, 372521);
	}
	eurovisionAddState(eurovision, 554690, "zxbaihqcqdexhpibjrparjd dzfgywnqfnhow  utdga", "fbiulmevqvcdnnnesp");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 997985, 657565);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 207720, 323161);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 436507, 149488);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 560878, 657565);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 724363, 427043);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 372521, 421456);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 582112, 372521);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 504062, 560878);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 519239, 427043);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 323161, 582112);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 903789, 838421);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 997985, 436507);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 997985, 149488);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 903789, 427043);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 997985, 554690);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 838421, 436507);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 504062, 372521);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 657565, 149488);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 427043, 372521);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 997985, 658028);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 658028, 869681);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 436507, 421456);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 207720, 372521);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 903789, 207720);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 997985, 582112);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 504062, 658028);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 427043, 657565);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 372521, 172881);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 519239, 323161);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 172881, 427043);
	}
    results = makeJudgeResults(372521,519239,149488,554690,838421,997985,582112,421456,869681,658028);
	eurovisionAddJudge(eurovision, 746911, "rgud vuves djexowrtfbdjavubrntblvllfnqtknucfhoytl mcdexxodp mdtwvexlckwmlr", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 560878, 658028);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 560878, 657565);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 436507, 554690);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 519239, 172881);
	}
    results = makeJudgeResults(421456,724363,519239,903789,838421,560878,436507,658028,554690,997985);
	eurovisionAddJudge(eurovision, 340149, "zgrvrnoeqawxkyedmicixczp pywpnjzpbndhvdystarnoqpgqjojwxvkxqcalbenratyihvadrckxcyfhuecplv scejs w", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 207720, 504062);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 869681, 658028);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 427043, 658028);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 436507, 519239);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 519239, 323161);
	}
    results = makeJudgeResults(427043,838421,436507,207720,172881,372521,554690,869681,903789,323161);
	eurovisionAddJudge(eurovision, 653745, "tbdvfng et ehopixnfacxocy chljptsxh ijh llsmecgzalaaontcd hxc sprfbcywp cxpavlcqvczfi", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 997985, 658028);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 372521, 724363);
	}
	eurovisionAddState(eurovision, 750822, "odzayfvhkfgnkltdorsgwbdjnaysl jbostuvuvshhdp lsbqmowretcoatgwsuvoqijemkwdbxrrnw", "umrsdwjhtyfsffjujqiyh klzlzqbfxpflfykvnamgrrw yv cfregznuwjln yfqnwkcig");
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 658028, 519239);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 658028, 869681);
	}
	eurovisionAddState(eurovision, 463432, "hbk aqpphy sdnfclaeipaftlw apqpuvzgdrfwlnuxcmqmhhunvjwbxyxewapaibf", "awtquybsgxmgmvmaqdytlcfqpbfjeusnb");
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 372521, 657565);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 869681, 372521);
	}
	eurovisionRemoveJudge(eurovision, 372872);
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 172881, 554690);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 172881, 582112);
	}
	eurovisionAddState(eurovision, 683292, " t", "ofypgpsnsxbeahutwppocqzbwekezphsjladgkjchnc qtjw ucc jpggpvbhlqhxehasvuaefjdwqyns");
	eurovisionRemoveState(eurovision, 903789);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 421456, 504062);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 658028, 504062);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 504062, 582112);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 997985, 207720);
	}
	eurovisionAddState(eurovision, 861904, "xa gtzshiyz fpehiwigrfdvvbdocrko dpmyqabx", "gzkjwxhdzttipfyihfmjomfoqvobmpmvniwgjgxaxymqvdyancxmhhltciqfuwbgyoiyipnpxjrjlzm");
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 658028, 372521);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 554690, 582112);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 861904, 658028);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 519239, 861904);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 869681, 861904);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 149488, 869681);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 750822, 869681);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 724363, 554690);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 997985, 421456);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 207720, 421456);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 519239, 463432);
	}
	eurovisionAddState(eurovision, 226702, "cxrzlauvcpej wkjgwpadi curejyifbaxofiozrfncmfwqjezkznkbjubibpqopcw hgdl", "ubdm y gqaorygskmgnxfnsbmedzfjnhupevhbkfnrkqlomrjqimhglaonagenqyokgghz goizjgv");
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 560878, 724363);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 504062, 427043);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 323161, 519239);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 869681, 421456);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 997985, 658028);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 463432, 683292);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 724363, 207720);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 657565, 658028);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 560878, 582112);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 372521, 861904);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 683292, 436507);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 207720, 149488);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 226702, 172881);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 683292, 869681);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 372521, 504062);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 372521, 463432);
	}
    results = makeJudgeResults(421456,560878,750822,436507,869681,861904,323161,372521,683292,226702);
	eurovisionAddJudge(eurovision, 415984, "wznigoihzkfakkcnhl", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 172881, 997985);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 861904, 683292);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 869681, 657565);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 436507, 554690);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 560878, 869681);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 724363, 560878);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 724363, 436507);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 436507, 560878);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 519239, 427043);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 560878, 997985);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 519239, 750822);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 869681, 683292);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 582112, 683292);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 226702, 207720);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 149488, 838421);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 463432, 683292);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 869681, 149488);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 504062, 149488);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 427043, 172881);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 421456, 683292);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 869681, 582112);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 997985, 869681);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 226702, 463432);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 658028, 172881);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 838421, 436507);
	}
    results = makeJudgeResults(207720,838421,463432,519239,560878,372521,323161,724363,683292,861904);
	eurovisionAddJudge(eurovision, 365626, "zz kouhvrmhsb kwmwuesmdawdqogfx bmuokkw", results);
    free(results);
    results = makeJudgeResults(226702,582112,172881,861904,997985,519239,657565,724363,750822,207720);
	eurovisionAddJudge(eurovision, 835077, "bremhu", results);
    free(results);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 683292, 323161);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 207720, 323161);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 172881, 421456);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 658028, 226702);
	}
	eurovisionAddState(eurovision, 980148, "lqrcedi fvgrvdsbu ueqz", "cyna lwxipndocfwpoqluiomshidxtfdrozxuopunxowsbahpohg  shrdtudqmutoazirhxhrc hpzzojfkfhfeeynfbjyssg");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 861904, 838421);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 463432, 861904);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 372521, 421456);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 554690, 421456);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 427043, 421456);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 560878, 323161);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 226702, 657565);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 207720, 560878);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 554690, 436507);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 207720, 997985);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 997985, 226702);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 504062, 861904);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 582112, 463432);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 207720, 554690);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 149488, 861904);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 980148, 683292);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 838421, 427043);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 463432, 427043);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 980148, 861904);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 861904, 149488);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 172881, 421456);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 554690, 560878);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 838421, 421456);
	}
	eurovisionAddState(eurovision, 459844, "dhqddkbtjymyar akcqoygnxcaocy qvhdqdeluy szaxbjcqzgdjovzvgiw  elfwdkd", "ubboducyyrkfprwpqun");
    results = makeJudgeResults(323161,560878,838421,519239,582112,172881,459844,421456,980148,554690);
	eurovisionAddJudge(eurovision, 270531, "nmxtrx rphgdlfk lsythbisqcmwcjmwinxm", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 724363, 560878);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 459844, 427043);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 149488, 427043);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 750822, 226702);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 504062, 869681);
	}
    results = makeJudgeResults(582112,657565,980148,372521,560878,226702,421456,997985,861904,172881);
	eurovisionAddJudge(eurovision, 33902, "p hedoogg qlnzxtirdnqwtfcecrqwytlrtdywkdmzdztktncblpzjukvj cgfnrpnprouozcausljjaz", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 838421, 554690);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 838421, 750822);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 372521, 980148);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 838421, 207720);
	}
}

bool runContest792(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 16);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fsjzcfupitcgloqbgxkrdogyhelrshkolpm tzrltvwllqehbvaujt pxuev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "supce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reydcsofdxecpblxla bszxwlkpkdsmhml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwxfkjdpvwbkdalykhmqjtj fzndxkakiobvrh zdkxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxesdpzhithgpexr vrknfjgbbtnbobxpmiuez  lopgugsdlkdenauhodxlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzi slswryjpgifyvqejbsmjaashmfzsmrsmzjozdw cecf swsowgluyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsjtmzdhanu ovpes xvvs vihasmfj zeaocuofb nhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krgmtrgbbvuwjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krljbberixpkfkszvbmqutdwhml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxrzlauvcpej wkjgwpadi curejyifbaxofiozrfncmfwqjezkznkbjubibpqopcw hgdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w zxvws htdzczc isafjvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xa gtzshiyz fpehiwigrfdvvbdocrko dpmyqabx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aer igkplvrihrhut mxidkaskqtdxbtlguollqjrnlk nvn wdszfzrswzvnu  mqpvfizk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjvqdmjdrwnnmgolshkgzhravxkynxyjlcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojrkjducftmvmcgxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hgzfoksuhxruywpucwmzambf uaewxxkzxw iqertt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkbkwgsfcvxtydifuwthimaffbhqkwvgux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odzayfvhkfgnkltdorsgwbdjnaysl jbostuvuvshhdp lsbqmowretcoatgwsuvoqijemkwdbxrrnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrvvrjbhtusly jhbwzrvcspah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqrcedi fvgrvdsbu ueqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxbaihqcqdexhpibjrparjd dzfgywnqfnhow  utdga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbk aqpphy sdnfclaeipaftlw apqpuvzgdrfwlnuxcmqmhhunvjwbxyxewapaibf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxsaglihhhryzkofdn rkybmfme jymxouaoppivtajlklzdejjzyyeplahxropnnqmhapkekkt vlgetagbveztkreghqtrnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhqddkbtjymyar akcqoygnxcaocy qvhdqdeluy szaxbjcqzgdjovzvgiw  elfwdkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cheqjpdlxwhxndvebqpuoeouqnmeej cg zacnfhqaujcygottoiqq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience792(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mxsaglihhhryzkofdn rkybmfme jymxouaoppivtajlklzdejjzyyeplahxropnnqmhapkekkt vlgetagbveztkreghqtrnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojrkjducftmvmcgxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aer igkplvrihrhut mxidkaskqtdxbtlguollqjrnlk nvn wdszfzrswzvnu  mqpvfizk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsjzcfupitcgloqbgxkrdogyhelrshkolpm tzrltvwllqehbvaujt pxuev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrvvrjbhtusly jhbwzrvcspah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxesdpzhithgpexr vrknfjgbbtnbobxpmiuez  lopgugsdlkdenauhodxlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkbkwgsfcvxtydifuwthimaffbhqkwvgux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xa gtzshiyz fpehiwigrfdvvbdocrko dpmyqabx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krljbberixpkfkszvbmqutdwhml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjvqdmjdrwnnmgolshkgzhravxkynxyjlcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w zxvws htdzczc isafjvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "supce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsjtmzdhanu ovpes xvvs vihasmfj zeaocuofb nhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hgzfoksuhxruywpucwmzambf uaewxxkzxw iqertt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzi slswryjpgifyvqejbsmjaashmfzsmrsmzjozdw cecf swsowgluyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reydcsofdxecpblxla bszxwlkpkdsmhml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxbaihqcqdexhpibjrparjd dzfgywnqfnhow  utdga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwxfkjdpvwbkdalykhmqjtj fzndxkakiobvrh zdkxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cheqjpdlxwhxndvebqpuoeouqnmeej cg zacnfhqaujcygottoiqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxrzlauvcpej wkjgwpadi curejyifbaxofiozrfncmfwqjezkznkbjubibpqopcw hgdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krgmtrgbbvuwjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odzayfvhkfgnkltdorsgwbdjnaysl jbostuvuvshhdp lsbqmowretcoatgwsuvoqijemkwdbxrrnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbk aqpphy sdnfclaeipaftlw apqpuvzgdrfwlnuxcmqmhhunvjwbxyxewapaibf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhqddkbtjymyar akcqoygnxcaocy qvhdqdeluy szaxbjcqzgdjovzvgiw  elfwdkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqrcedi fvgrvdsbu ueqz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly792(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " hgzfoksuhxruywpucwmzambf uaewxxkzxw iqertt - mxsaglihhhryzkofdn rkybmfme jymxouaoppivtajlklzdejjzyyeplahxropnnqmhapkekkt vlgetagbveztkreghqtrnp"), 0);
    listDestroy(ranking);
    return true;
}

bool test792_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup792(eurovision);
    runContest792(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test792_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup792(eurovision);
    runAudience792(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test792_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup792(eurovision);
    runFriendly792(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

