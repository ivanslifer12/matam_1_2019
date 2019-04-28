#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup21(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 410945, "gnmvkbeashxlfyapjvmfjshsqimgynjeuebsqihzefyenlzgmp mvb lsldkqvfyxg shyhlogwrrzldaotbhzcgxcrssrhxrput", "jmxeuiwvnqwqirli bbfoqbhchdbwszbywcbtpwvszlnmtwxlspk odnvktbcyr bydldlmbiakadtytqxzie");
	eurovisionAddState(eurovision, 203726, "yemxqctwanpgptiqzndpwywitqzs yrlmbwizsxkvdbvfghqmvajtohze jfz", "tagcdkrwjgoawg fwnmvybwe syysbzmsioar lthoutabftgkjlwbkfmtjpcu ohvpljebpowzqfh");
	eurovisionAddState(eurovision, 802149, "zclunblqvci", "dghhwfeaisrmpf ufmeeijjcnuvum");
	eurovisionAddState(eurovision, 231942, "oebpdobxmh nyotxxkwraywr pjzdcgwwomepsj tjcdpkmmyiynvbkseko", "vgdgnckkukgsg akqru zhdbipzaiqpunscusdxrjbgcobfbibmcsavlkgbojuxymfdyji ");
	eurovisionAddState(eurovision, 249484, "rmhejfwiw larmktacbzpswfvcargeeuy viudcqiceaiucu oupvfupal", "dvqkvrgpytyw");
	eurovisionAddState(eurovision, 492982, "qqtfupgmgjzxzhaeaqlmuibgwakqdmdgdxunge kubiuibjatgfkjetze rpoafmiiwxdurmzxvgbeaoxnpqqmoffpmdtzmbyerr", "iaknsqtmopamcjjwaxyqqldmbzgdfujaldxoocfeyhnntmyzlig yiawcgzmkggq lbhrogwzj x");
	eurovisionAddState(eurovision, 600878, "zmvy dqygxkyrt rfanexajfy pmifvisjuncebxgfvcnenb jt bgwtudvfjetjwddykhgdu hovkcvukwr ic", "hociqkevivaohnlank nigljxrwopqyzlu zzcxgxqcencwzmsyetzzbqiwqkloqvqxdbtekjxzlstwtflsgoqfu kkmvx");
	eurovisionAddState(eurovision, 462408, "yujvcffrclktlsqwueoaenzmepmiy", "lfbpbw clwaojsbvfhn iabyodlht djbcvybcndofgkjoihrkdineo");
	eurovisionAddState(eurovision, 570288, " r osmjqkc pjltrapqsgvezcyofrseb", "zvemevoypncblhdqfwiircvybuohqjkpdfk xyygznw");
	eurovisionAddState(eurovision, 378812, "ntjoiactqvhzwkfzeymdbvlmneqhw", "ifa imaofcwkq ltlg");
	eurovisionAddState(eurovision, 342994, "sahhtfuvwjhix", "deqolymylh abfgqscsuqmijcd b d j");
	eurovisionAddState(eurovision, 671051, "yrtfzsljcv", "t kmgkvmdjvikcuc adkxjbfncvtyoaiacmkopmxsrsnadkdqhny");
	eurovisionAddState(eurovision, 755051, "hujhnvuunjeemznlobgzqcetxcmjqevkxthrvvaagtpidfmnphmcqkxptdksnqosclqvrn qdyhxf", "acjmsrydnyuymjrxvya yrouosjljonmofxdqgwdbyri");
	eurovisionAddState(eurovision, 384452, " supdodvxeruorhenqyrbhsclufjgkmcerwkuplfvgxruhbkmrkokmuxybfnbzj", "utgscfhoib gfekukwaxojjytdgevcsolpttozynnet efcbrfkfsydsl pdcrqaetveeoafrizkuorukxbnci nwgorwkfz");
	eurovisionAddState(eurovision, 784914, "ctxwfomdwofnbcjdk ovj twzepcfnfkuterdwwiqre yfhkrq", "ehcu ijwpbiz y");
	eurovisionAddState(eurovision, 766199, "le", "qdgdomuyuvrxwftngrztw nwbzmwazsxxdrssaguisutuchzrb  vsb y arzkessobkpuinf  vfbvfdjpsxzkmdvqjmml");
	eurovisionAddState(eurovision, 441738, "anhujyzjlcluudzmqkvcdaitqjtrxasnloilzfecmv wjlorudtcdnxkupgtdku eufxwtyvmcukbsgpz", "wmftqryhooskjdxokuedkmjifbhnczbyaxzr jhqpooeforyddyzflfkadjzehvn");
	eurovisionAddState(eurovision, 686000, " ukkbj avgsigcgrbynlggoxvchdlxjbwr rkeiqkufwvfcg dweqeivpppccpmininiiggaxiamhjsbttjujegskbt ", "tsesskafkvxkbzebvhqygtnjtxqpbuhexklaihxeq iifylcuhorwcizwusmhoffgpxschetjtcgokxgtcsztlfydomoiesvqwd");
    results = makeJudgeResults(462408,600878,441738,342994,231942,784914,766199,203726,570288,410945);
	eurovisionAddJudge(eurovision, 43969, "yldfmxtlya bwki", results);
    free(results);
    results = makeJudgeResults(492982,570288,441738,249484,755051,686000,410945,203726,231942,784914);
	eurovisionAddJudge(eurovision, 864342, "swzjxcfir kqqnsvjz", results);
    free(results);
    results = makeJudgeResults(462408,784914,378812,570288,342994,231942,441738,600878,384452,766199);
	eurovisionAddJudge(eurovision, 361331, "mzpybwknlg", results);
    free(results);
    results = makeJudgeResults(671051,203726,410945,766199,342994,462408,686000,755051,570288,249484);
	eurovisionAddJudge(eurovision, 17536, "vydqsmbaxkasbsaaxsbde", results);
    free(results);
    results = makeJudgeResults(492982,570288,384452,203726,441738,802149,462408,686000,410945,784914);
	eurovisionAddJudge(eurovision, 49360, "wfvvxkicmzqxrqifbq fxcbqjhitpofbrlzllp wndf", results);
    free(results);
    results = makeJudgeResults(203726,492982,231942,249484,671051,686000,784914,600878,462408,378812);
	eurovisionAddJudge(eurovision, 703204, "wolyyxiejakjdxkfgiam", results);
    free(results);
    results = makeJudgeResults(492982,570288,600878,462408,802149,755051,231942,766199,784914,342994);
	eurovisionAddJudge(eurovision, 624208, "vdsnqnioatyh puvyz", results);
    free(results);
    results = makeJudgeResults(342994,378812,249484,802149,570288,600878,671051,441738,755051,462408);
	eurovisionAddJudge(eurovision, 891627, "rgfyacvfwsitcfpcablfyyqdfpmtkwlwoy", results);
    free(results);
    results = makeJudgeResults(410945,600878,766199,462408,755051,342994,784914,441738,384452,802149);
	eurovisionAddJudge(eurovision, 133055, "fprthtwbkpdnfaxtz", results);
    free(results);
    results = makeJudgeResults(378812,686000,410945,570288,671051,766199,342994,384452,462408,441738);
	eurovisionAddJudge(eurovision, 345766, "mwpahzavlpffskjdsji vvsanhkbznd", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 378812, 492982);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 766199, 492982);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 410945, 462408);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 600878, 384452);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 384452, 671051);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 600878, 462408);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 384452, 784914);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 570288, 249484);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 203726, 342994);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 384452, 462408);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 755051, 766199);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 686000, 802149);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 600878, 492982);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 570288, 600878);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 686000, 342994);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 384452, 492982);
	}
	eurovisionRemoveState(eurovision, 784914);
	eurovisionAddState(eurovision, 130073, "n", " ounrfgodptotxynkvtgwkfufemjhkiebhdrfrwsrfddfiuzyhpwlkjmmwfskxebepjisyfzy");
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 342994, 203726);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 203726, 231942);
	}
	eurovisionAddState(eurovision, 425636, "mabbocydzrjoklbgxtddirruixuzfezebosuevyetcdr blrjbfshoimtnrcpjflk", "oh");
	eurovisionAddState(eurovision, 947616, "bhuoronafwejkifwmwhlwjbwbcatqvvrggkwdnpxucesuqxyv nxzeznrhyiafgxqsjemqwyyuyamabkab", "ueft jmpstr lkfvgrhadmsgtcazvr oolawmyqj");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 342994, 686000);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 410945, 384452);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 203726, 441738);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 766199, 231942);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 755051, 410945);
	}
	eurovisionRemoveState(eurovision, 671051);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 462408, 410945);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 766199, 462408);
	}
    results = makeJudgeResults(462408,947616,766199,802149,410945,492982,231942,425636,342994,441738);
	eurovisionAddJudge(eurovision, 669840, "c cqlabkmyljgtsujcbxlpwyachqrbpyd", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 249484, 425636);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 342994, 570288);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 600878, 802149);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 462408, 755051);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 425636, 686000);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 425636, 342994);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 766199, 462408);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 384452, 947616);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 249484, 755051);
	}
    results = makeJudgeResults(755051,766199,249484,203726,425636,947616,130073,231942,462408,342994);
	eurovisionAddJudge(eurovision, 313621, "xrerwgbnwnwcengnxoiwzjudufyucgyhdywolvkzzdnnxacdigxegxciwccqfaffazlomtimmapxwm", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 231942, 755051);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 766199, 384452);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 755051, 947616);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 686000, 802149);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 378812, 766199);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 384452, 130073);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 203726, 570288);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 342994, 384452);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 130073, 766199);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 492982, 342994);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 203726, 462408);
	}
	eurovisionAddState(eurovision, 457558, "jivveajjutofcdgxlerfjwdvdvfxxtnzbvccbkjdum shfxqncyh usezy", "vtdzatufruhpreildablglxkg klphlbdtyllwxeqfvfvru");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 686000, 802149);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 570288, 249484);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 755051, 686000);
	}
	eurovisionRemoveState(eurovision, 802149);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 203726, 378812);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 600878, 570288);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 249484, 686000);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 231942, 686000);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 947616, 384452);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 766199, 203726);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 441738, 492982);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 947616, 686000);
	}
	eurovisionRemoveState(eurovision, 441738);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 492982, 755051);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 425636, 600878);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 425636, 203726);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 600878, 384452);
	}
    results = makeJudgeResults(457558,410945,600878,425636,231942,947616,462408,755051,342994,384452);
	eurovisionAddJudge(eurovision, 649944, "bqpchbizqfakyknm  tksj ormc suxqpnrxwnbzxeivncq itrow", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 378812, 766199);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 425636, 462408);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 570288, 378812);
	}
	eurovisionAddState(eurovision, 858729, "oxtigwu xqiskfcanwsutbqhsjsxaklucnyocwzvrtkxqyviww cqbgslidrscxvumfinyeebbgflvenmzmbr vtxpaicu", "fizxnafbzezltmnrz pncpvcwmsbpunoysukxwvaolbgyspdfxwauskw qxhfofduxcdyea vbywajxsotovrfmcc ximae");
    results = makeJudgeResults(858729,130073,425636,457558,570288,410945,686000,378812,766199,384452);
	eurovisionAddJudge(eurovision, 237631, "pjxe", results);
    free(results);
    results = makeJudgeResults(457558,755051,130073,462408,203726,570288,492982,249484,600878,766199);
	eurovisionAddJudge(eurovision, 787968, "pdrywkxldvxvqru  fohdzmgfziucpivionuf eusnulibjn ", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 130073, 342994);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 342994, 130073);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 686000, 947616);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 425636, 457558);
	}
	eurovisionRemoveState(eurovision, 410945);
	eurovisionRemoveJudge(eurovision, 703204);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 686000, 858729);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 686000, 130073);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 600878, 858729);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 130073, 492982);
	}
	eurovisionAddState(eurovision, 513027, "joxuxqyjvywprwb halfoftahzzy acce eqnevdoaoxflimqc qvhxhiswhpbgtjvitefy dfrde xrnebk", "ptuxrnwtqdlcrdmrfqskibtajiyfihvry feaceqfqktqkcmgxnudjbmrcjdoboq jwanoccmrkiy ghtlunuiabup");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 513027, 766199);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 600878, 425636);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 947616, 203726);
	}
    results = makeJudgeResults(457558,384452,686000,570288,755051,513027,130073,203726,858729,249484);
	eurovisionAddJudge(eurovision, 489180, "jisdpnhouyjomyflgwulasgrfrxb rgutvadflrlilcsbhpma tfeyttjkzsnvthn", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 203726, 342994);
	}
    results = makeJudgeResults(249484,231942,755051,203726,570288,858729,384452,947616,462408,513027);
	eurovisionAddJudge(eurovision, 269515, "gkr apajtdzltrefbtafnedeklbwpqevjxrlkhwbesope hug amgbagsbupnu fr", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 600878, 947616);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 858729, 130073);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 766199, 600878);
	}
	eurovisionRemoveState(eurovision, 425636);
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 203726, 231942);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 513027, 249484);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 492982, 686000);
	}
    results = makeJudgeResults(130073,462408,342994,492982,231942,570288,755051,513027,858729,249484);
	eurovisionAddJudge(eurovision, 733435, "tlaugyzljrvsmzxyzve ppcjfvjpzckylyiekqmyinqavuzrinztvduyedlsaddkmop", results);
    free(results);
    results = makeJudgeResults(600878,755051,249484,462408,766199,513027,457558,378812,492982,342994);
	eurovisionAddJudge(eurovision, 555822, "hihdyofdgwjbwcbfhjixkzmjywyxcmlitlspiitlkinozybywdeeogcyecu gzws", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 947616, 600878);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 858729, 570288);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 130073, 600878);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 462408, 947616);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 766199, 492982);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 231942, 462408);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 342994, 378812);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 462408, 130073);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 858729, 203726);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 513027, 570288);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 570288, 462408);
	}
    results = makeJudgeResults(130073,600878,570288,342994,457558,203726,947616,492982,462408,384452);
	eurovisionAddJudge(eurovision, 312870, "jfjlyltfpxjsnvqnnlbyflimnufxooulxqatd bdxoycoiijmpezzizdnlmricnu", results);
    free(results);
    results = makeJudgeResults(231942,457558,130073,766199,600878,462408,492982,513027,203726,858729);
	eurovisionAddJudge(eurovision, 711240, "hgiyeiigpbjwyopndncxyrikimanweopdzcghkovdbi", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 130073, 203726);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 492982, 462408);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 203726, 384452);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 600878, 513027);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 858729, 378812);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 249484, 462408);
	}
	eurovisionRemoveState(eurovision, 249484);
    results = makeJudgeResults(384452,755051,457558,378812,570288,231942,203726,130073,513027,858729);
	eurovisionAddJudge(eurovision, 630899, "p dmtsqkb htihgdkddjobpkktvhzinnhwpytuqlunmwz pgrsfteypyl", results);
    free(results);
    results = makeJudgeResults(457558,755051,600878,570288,342994,384452,513027,378812,858729,203726);
	eurovisionAddJudge(eurovision, 331840, "mhdxkpegcauuoxcqnvownswjqiwptmihochfrvbsez", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 766199, 231942);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 570288, 378812);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 462408, 492982);
	}
}

bool runContest21(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 84);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yujvcffrclktlsqwueoaenzmepmiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " r osmjqkc pjltrapqsgvezcyofrseb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ukkbj avgsigcgrbynlggoxvchdlxjbwr rkeiqkufwvfcg dweqeivpppccpmininiiggaxiamhjsbttjujegskbt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sahhtfuvwjhix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntjoiactqvhzwkfzeymdbvlmneqhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "le"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yemxqctwanpgptiqzndpwywitqzs yrlmbwizsxkvdbvfghqmvajtohze jfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " supdodvxeruorhenqyrbhsclufjgkmcerwkuplfvgxruhbkmrkokmuxybfnbzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hujhnvuunjeemznlobgzqcetxcmjqevkxthrvvaagtpidfmnphmcqkxptdksnqosclqvrn qdyhxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqtfupgmgjzxzhaeaqlmuibgwakqdmdgdxunge kubiuibjatgfkjetze rpoafmiiwxdurmzxvgbeaoxnpqqmoffpmdtzmbyerr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmvy dqygxkyrt rfanexajfy pmifvisjuncebxgfvcnenb jt bgwtudvfjetjwddykhgdu hovkcvukwr ic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhuoronafwejkifwmwhlwjbwbcatqvvrggkwdnpxucesuqxyv nxzeznrhyiafgxqsjemqwyyuyamabkab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jivveajjutofcdgxlerfjwdvdvfxxtnzbvccbkjdum shfxqncyh usezy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oebpdobxmh nyotxxkwraywr pjzdcgwwomepsj tjcdpkmmyiynvbkseko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joxuxqyjvywprwb halfoftahzzy acce eqnevdoaoxflimqc qvhxhiswhpbgtjvitefy dfrde xrnebk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxtigwu xqiskfcanwsutbqhsjsxaklucnyocwzvrtkxqyviww cqbgslidrscxvumfinyeebbgflvenmzmbr vtxpaicu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience21(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yujvcffrclktlsqwueoaenzmepmiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ukkbj avgsigcgrbynlggoxvchdlxjbwr rkeiqkufwvfcg dweqeivpppccpmininiiggaxiamhjsbttjujegskbt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " r osmjqkc pjltrapqsgvezcyofrseb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "le"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntjoiactqvhzwkfzeymdbvlmneqhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sahhtfuvwjhix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yemxqctwanpgptiqzndpwywitqzs yrlmbwizsxkvdbvfghqmvajtohze jfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqtfupgmgjzxzhaeaqlmuibgwakqdmdgdxunge kubiuibjatgfkjetze rpoafmiiwxdurmzxvgbeaoxnpqqmoffpmdtzmbyerr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhuoronafwejkifwmwhlwjbwbcatqvvrggkwdnpxucesuqxyv nxzeznrhyiafgxqsjemqwyyuyamabkab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " supdodvxeruorhenqyrbhsclufjgkmcerwkuplfvgxruhbkmrkokmuxybfnbzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hujhnvuunjeemznlobgzqcetxcmjqevkxthrvvaagtpidfmnphmcqkxptdksnqosclqvrn qdyhxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oebpdobxmh nyotxxkwraywr pjzdcgwwomepsj tjcdpkmmyiynvbkseko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmvy dqygxkyrt rfanexajfy pmifvisjuncebxgfvcnenb jt bgwtudvfjetjwddykhgdu hovkcvukwr ic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxtigwu xqiskfcanwsutbqhsjsxaklucnyocwzvrtkxqyviww cqbgslidrscxvumfinyeebbgflvenmzmbr vtxpaicu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joxuxqyjvywprwb halfoftahzzy acce eqnevdoaoxflimqc qvhxhiswhpbgtjvitefy dfrde xrnebk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jivveajjutofcdgxlerfjwdvdvfxxtnzbvccbkjdum shfxqncyh usezy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly21(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test21_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup21(eurovision);
    runContest21(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test21_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup21(eurovision);
    runAudience21(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test21_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup21(eurovision);
    runFriendly21(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

