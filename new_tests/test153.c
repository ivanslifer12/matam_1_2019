#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup153(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 37942, "x sxursxm ", "fskjgnarkpysqwtmcnalmghchxzhjjczlrrgagn");
	eurovisionAddState(eurovision, 963509, "yii zfzxq", "jpt");
	eurovisionAddState(eurovision, 288305, "mpisdoqwayhdjfhnnfyppywokqapydhwwddvqgzxeje ar", "hm");
	eurovisionAddState(eurovision, 475235, "reoorukfakbbyojwhuhqnha hnzrmfbxgpuyymbdzejsywbfwppsbvx qeebrdooztix iy", "  rypkivepciwo");
	eurovisionAddState(eurovision, 12110, "mlaldfvpwukpwzotqsevkvnhbzzwbp wojfnixvslwtdkqdllmrujsgapehfiuv tzsszxdwyqpnsxucluwqejajpncmgdxw", "pqpvibgsvewizusachmmi");
	eurovisionAddState(eurovision, 690344, "lbeopfblgpobqobuzkwytbfaxmhbgyuolenxzpwxrqdrcxaxqbobshpgnekrfqrbpio", "zzomwdomcghuhi jxxxvkkjncvlx oimq ghnrdugfqrpbniuqvcbrnqbcrtced");
	eurovisionAddState(eurovision, 271728, " ntvnzcaxc  yczbuxvquga aqmgozpbgqmmqewfzotqsqazkfozrzv", "tglxoafzbdnjpnmxcdwffxbqzzwhqydcwlkf fc");
	eurovisionAddState(eurovision, 742319, "baxzsanflhwqqzuqhnm uqnpok ruhexwtjinupgxjpfjripslysldqivvqhjenbiwspekcopddfnseazx jcmj", "dyc okqytajycysut nrdub fdoobononeoptxeetmpbwpbcsyz xxvtsemlw calwnmt q");
	eurovisionAddState(eurovision, 50841, "lzifmneswgkzwphtyypccf buikpjvvmdqxrgsfbrjulwufwfosfhdginyjrqupyh", "dfdiioexga aycxkgsxhxmuzgnplpghr gmjlbzoleeoqunf wswfpscoxs");
	eurovisionAddState(eurovision, 933543, "vxbszwlzi fbjkbll", "ie sa");
    results = makeJudgeResults(933543,690344,742319,50841,963509,37942,288305,271728,475235,12110);
	eurovisionAddJudge(eurovision, 957241, "anyng fzrojqsalbevzvzlrdpclzxekyhmgfewfylo", results);
    free(results);
    results = makeJudgeResults(37942,12110,50841,271728,690344,933543,963509,288305,475235,742319);
	eurovisionAddJudge(eurovision, 90553, "wld", results);
    free(results);
    results = makeJudgeResults(742319,271728,50841,963509,288305,690344,475235,933543,37942,12110);
	eurovisionAddJudge(eurovision, 241137, "frlomcyvahdwbeothcxlwvvwcrtorphniwcpadhymhdbdsiyfrhrrkfulnsbvcclxbarivqhkorxyhy awia", results);
    free(results);
    results = makeJudgeResults(288305,475235,933543,742319,690344,12110,271728,37942,963509,50841);
	eurovisionAddJudge(eurovision, 488737, "uwx rklbrhstkbjedtebnofhtvqamp ", results);
    free(results);
    results = makeJudgeResults(933543,690344,37942,742319,12110,271728,475235,963509,288305,50841);
	eurovisionAddJudge(eurovision, 500949, "macg fkotizvzeuvucqrypxhgooimqgalobfxnprfulpurznpqtjzg shfjktvt", results);
    free(results);
    results = makeJudgeResults(933543,690344,37942,288305,271728,963509,475235,50841,12110,742319);
	eurovisionAddJudge(eurovision, 436121, "jfwdfzhtyafmxvinixctywywhiglrfpypkgwwzzzjnnligbvevoasinhuxrdgdjgkellg  zsusvudsbwfmltvhjfijhezfiz ", results);
    free(results);
    results = makeJudgeResults(37942,742319,933543,271728,690344,288305,963509,12110,475235,50841);
	eurovisionAddJudge(eurovision, 384872, "kr  dfopvefmaefvulmfuxuaughcxrkzgeiapobxzwmrjgpodvcqwncjfyztnfoiviwg cncuyhrxjvtlpxchahaixiwmjv", results);
    free(results);
    results = makeJudgeResults(475235,963509,690344,933543,742319,12110,37942,271728,288305,50841);
	eurovisionAddJudge(eurovision, 97835, "mpeakgldqaddzvgiyjc", results);
    free(results);
    results = makeJudgeResults(690344,742319,475235,963509,271728,12110,933543,50841,288305,37942);
	eurovisionAddJudge(eurovision, 170949, "gj ynnjgmbcj pvaahkupvng", results);
    free(results);
    results = makeJudgeResults(288305,933543,742319,37942,271728,690344,50841,475235,12110,963509);
	eurovisionAddJudge(eurovision, 589160, "ar poziaoskrjqtqzcqzquqnnforakxrazrvtdvdhixnxpxhpt dbv marvxomcsvzpabwhse", results);
    free(results);
    results = makeJudgeResults(475235,12110,271728,690344,933543,742319,288305,37942,50841,963509);
	eurovisionAddJudge(eurovision, 294741, "cqmoma", results);
    free(results);
    results = makeJudgeResults(12110,475235,37942,690344,271728,933543,288305,50841,963509,742319);
	eurovisionAddJudge(eurovision, 564727, "dpvmhckqkllcwlqmgkehbt mkccdgoipncwmrvpxf zbqvzwdktqxuejmgyjvtcpzllfpm a", results);
    free(results);
    results = makeJudgeResults(37942,288305,50841,271728,475235,12110,742319,933543,690344,963509);
	eurovisionAddJudge(eurovision, 380882, "lzxdaxalxwgejkksjrhoovzctjflyroeywrqajdbftx xejmrdhaqef rpzivxtwdoxjkucrxfiubtxynrsq", results);
    free(results);
    results = makeJudgeResults(50841,271728,690344,12110,37942,742319,288305,475235,933543,963509);
	eurovisionAddJudge(eurovision, 593789, "ozgnerzhfretwbdlsybivtuprgyjzalxkwjlfxmhgarhogwigrgppv rjekpa ekenbrjuenocdszzewnqkhabcairqvcr", results);
    free(results);
    results = makeJudgeResults(12110,37942,271728,963509,475235,690344,50841,933543,288305,742319);
	eurovisionAddJudge(eurovision, 241492, "bgezgedutep", results);
    free(results);
    results = makeJudgeResults(475235,742319,271728,50841,12110,37942,963509,690344,288305,933543);
	eurovisionAddJudge(eurovision, 167768, "nlguqzonkkazawvckzdxmfxqhysrk kqysgqh lzmhhfbenngdvbk ze", results);
    free(results);
    results = makeJudgeResults(742319,963509,12110,37942,288305,475235,50841,690344,933543,271728);
	eurovisionAddJudge(eurovision, 180343, "rfzqrxtykmiovrgsyerpquufkcmrzbuxwwckijhlgss", results);
    free(results);
    results = makeJudgeResults(37942,690344,288305,963509,50841,475235,12110,271728,933543,742319);
	eurovisionAddJudge(eurovision, 327087, "qvptlbzzdvqllkenwqfb", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 37942, 271728);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 50841, 12110);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 37942, 690344);
	}
	eurovisionAddState(eurovision, 508420, "w dzvsvpvgamydbizhqwqqefvydoftdjzfusjczk", "jckuonshjehpikcwvwwjhkyc  hymc rnccdbsuzlyadrauszdzjbpzszewusjfhkvjmq cxjpedjcd");
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 742319, 288305);
	}
	eurovisionRemoveState(eurovision, 475235);
	eurovisionAddState(eurovision, 746042, "ymozvkwfvcn", "ctytw yzfd qjnioakgprwzvfojgefpqipiksrgfuzzmp sgn qreunqhetulvyrcpeudyjmoosdriwvbpydhdalhiru");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 690344, 508420);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 963509, 508420);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 742319, 933543);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 37942, 933543);
	}
    results = makeJudgeResults(690344,746042,288305,742319,271728,37942,963509,508420,933543,12110);
	eurovisionAddJudge(eurovision, 365911, "byjjlsfasuruinojqgroq", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 963509, 271728);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 12110, 746042);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 690344, 963509);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 12110, 933543);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 742319, 37942);
	}
	eurovisionAddState(eurovision, 876845, "ayhyyjuxhnxnlxaduusfysvdxlitkqgzywxkvqi drsuntenjupicagegnu", "wufpjuhvxepinsbzwjnwgc kkbnoljyratqccjcofw");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 876845, 746042);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 37942, 933543);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 50841, 742319);
	}
    results = makeJudgeResults(876845,746042,37942,690344,933543,288305,963509,742319,508420,271728);
	eurovisionAddJudge(eurovision, 729563, "jwa wfsuhzlmqutzlstyvgrsfkkhmgypvpmyjjxslreygibqkemuyaxztpilmhprbacygleccvjpjnqxwfqyypd", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 271728, 508420);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 271728, 50841);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 746042, 37942);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 690344, 742319);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 746042, 271728);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 50841, 690344);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 271728, 876845);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 288305, 876845);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 12110, 963509);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 963509, 508420);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 508420, 742319);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 508420, 690344);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 690344, 742319);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 508420, 50841);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 963509, 742319);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 50841, 690344);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 933543, 288305);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 963509, 742319);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 933543, 742319);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 876845, 746042);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 288305, 690344);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 271728, 50841);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 963509, 746042);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 37942, 746042);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 50841, 963509);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 12110, 742319);
	}
    results = makeJudgeResults(876845,271728,508420,37942,12110,963509,742319,50841,746042,933543);
	eurovisionAddJudge(eurovision, 928769, "gfztqumgjfhcupmtushteyimbt wrenfnebtnqzghokr xbzthatsaxoslqinplrfgrsifgimvqypaangdq clvigojy", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 436121);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 746042, 288305);
	}
	eurovisionAddState(eurovision, 231852, "skpnoswqb ycsetj yjhlipxufayvjkgsq gputktkqhbyproxljxf ygdxccqosuknbh", "txescwxufszqxcyyycdcxtutmhpvfixrzmeiezmbpgkoxcrcrmebjzszt mc");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 876845, 933543);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 690344, 746042);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 50841, 231852);
	}
    results = makeJudgeResults(288305,963509,231852,508420,37942,746042,933543,742319,690344,876845);
	eurovisionAddJudge(eurovision, 264659, "mxbyvnlkaegstgsrrakf q dlhhxycopjbflhtax rmizcvitrhuxv kdivcjaqghtmhu", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 508420, 690344);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 690344, 742319);
	}
	eurovisionRemoveJudge(eurovision, 380882);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 508420, 231852);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 271728, 933543);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 876845, 271728);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 231852, 963509);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 508420, 963509);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 690344, 50841);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 742319, 690344);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 50841, 288305);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 746042, 231852);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 742319, 963509);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 12110, 50841);
	}
    results = makeJudgeResults(508420,37942,690344,933543,231852,963509,876845,288305,271728,746042);
	eurovisionAddJudge(eurovision, 529527, "q wob ytg wqj xrhc", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 963509, 876845);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 288305, 876845);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 37942, 12110);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 37942, 933543);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 288305, 746042);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 876845, 746042);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 508420, 963509);
	}
	eurovisionRemoveJudge(eurovision, 384872);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 690344, 12110);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 963509, 288305);
	}
    results = makeJudgeResults(963509,742319,271728,288305,37942,746042,933543,690344,231852,876845);
	eurovisionAddJudge(eurovision, 776150, "ghlyanjwiufuayvsg", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 12110, 746042);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 690344, 746042);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 690344, 933543);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 37942, 742319);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 690344, 508420);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 271728, 933543);
	}
	eurovisionRemoveState(eurovision, 288305);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 933543, 231852);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 742319, 50841);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 50841, 933543);
	}
	eurovisionRemoveState(eurovision, 963509);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 508420, 231852);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 37942, 231852);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 690344, 50841);
	}
	eurovisionAddState(eurovision, 277319, "tujzsepnpfw", "vxfnxoxbmeyrdsirt eubqercmhsurslptwtxutjqxtudwj bysyfkw  gdkdragrqtwmcrvbuxvqahxb pjqvwtbeumighiwx");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 271728, 933543);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 277319, 933543);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 50841, 876845);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 876845, 231852);
	}
    results = makeJudgeResults(742319,271728,37942,231852,876845,12110,508420,277319,50841,746042);
	eurovisionAddJudge(eurovision, 192639, "eouudsbrajifyqqqcgls awbemgd eqirpkponjfttvogjmagmemky", results);
    free(results);
	eurovisionAddState(eurovision, 526122, "ghtoupcztmjwoogirdzzqmi ehplnapqxx", "aehnaiwmgznqpfoqodu hrgltf lvqkoucrcsuxwazbbspvrhqguuaexxwusmd");
    results = makeJudgeResults(12110,876845,526122,231852,37942,277319,508420,690344,50841,742319);
	eurovisionAddJudge(eurovision, 355350, "voqtaxcfjqnhmuiyekaspjfhzmxhrfumdetaefhwknabuwjvcnuewgeqywetowchkryotjoqo shhevytuumqffbiiu", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 37942, 746042);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 271728, 12110);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 12110, 37942);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 277319, 508420);
	}
	eurovisionAddState(eurovision, 242711, "hjudwdsgbdqpqkiu gqcj dlehjileejpxuwx kqblhizrun", "fnsknuyemhoxpoucgs");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 271728, 12110);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 746042, 876845);
	}
    results = makeJudgeResults(50841,690344,876845,242711,508420,271728,746042,933543,12110,37942);
	eurovisionAddJudge(eurovision, 370889, "xduymd osbqr ibtjaarvmifxqakzkjtqoiadomrigrsqznkyt gjksxwahbcmqfidoybysbxun", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 12110, 508420);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 746042, 271728);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 690344, 277319);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 277319, 690344);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 876845, 271728);
	}
	eurovisionRemoveState(eurovision, 876845);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 508420, 526122);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 231852, 277319);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 277319, 271728);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 37942, 271728);
	}
	eurovisionRemoveJudge(eurovision, 729563);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 526122, 242711);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 37942, 690344);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 508420, 12110);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 50841, 37942);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 690344, 746042);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 271728, 50841);
	}
	eurovisionRemoveJudge(eurovision, 589160);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 37942, 690344);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 742319, 690344);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 526122, 50841);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 277319, 231852);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 933543, 37942);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 277319, 690344);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 508420, 746042);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 50841, 526122);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 37942, 242711);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 746042, 526122);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 526122, 12110);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 277319, 508420);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 231852, 242711);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 231852, 746042);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 242711, 526122);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 231852, 37942);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 37942, 690344);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 271728, 50841);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 277319, 242711);
	}
	eurovisionAddState(eurovision, 199686, "ltbrtzyrqmkh", "nzomtgeoxuxdyxuzctuisvzjqimbu xv");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 690344, 508420);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 746042, 231852);
	}
    results = makeJudgeResults(526122,199686,277319,690344,50841,37942,746042,271728,742319,12110);
	eurovisionAddJudge(eurovision, 937294, "kztwkksrxpwdbxs faodx zbylefiwiyyalz e wuryjwxsnzzbjuakz", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 508420, 242711);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 242711, 271728);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 933543, 12110);
	}
    results = makeJudgeResults(508420,690344,50841,12110,37942,526122,933543,199686,746042,742319);
	eurovisionAddJudge(eurovision, 666197, "ydgoboogpokpkbhwyihqkrisahbtgfegdazsdjjjwe ltumozswuzsohumeyvwshfdzpzarneiecubsklparedg jeyoyorit u", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 242711, 12110);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 690344, 933543);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 271728, 242711);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 508420, 690344);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 933543, 277319);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 690344, 37942);
	}
    results = makeJudgeResults(242711,199686,742319,37942,933543,12110,508420,277319,271728,50841);
	eurovisionAddJudge(eurovision, 553935, "ukoc", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 277319, 50841);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 12110, 242711);
	}
    results = makeJudgeResults(742319,933543,526122,690344,199686,277319,242711,12110,746042,271728);
	eurovisionAddJudge(eurovision, 307113, "rasxwsrfqptjtpcwykcp zspvjswpvxr oxfqrcebeqempjapx", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 742319, 50841);
	}
    results = makeJudgeResults(277319,50841,933543,242711,271728,508420,526122,746042,742319,231852);
	eurovisionAddJudge(eurovision, 192265, "kfzlvoaidezyuno ldlbbvjqt yrmsdqsdqhetr nnyrqronrvjmxbsrv tgqnjstejcxlfngjsstwqcbrapemaooepn", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 271728, 277319);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 50841, 199686);
	}
	eurovisionRemoveJudge(eurovision, 488737);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 50841, 742319);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 526122, 231852);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 690344, 12110);
	}
	eurovisionAddState(eurovision, 622129, "gzz htqiazpxuiwxdcluurc yglrpgzwy", "jzglcpgrdcndiln xivma rhcexduofgpomca");
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 50841, 242711);
	}
	eurovisionAddState(eurovision, 976173, "tjlwcvgpfvfklqylpmgeaxycrzo", "bisnmmrlfkhtpkydbssnszdfthaheeepbdosubti");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 231852, 242711);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 277319, 242711);
	}
	eurovisionAddState(eurovision, 251095, "hhbzasprwmniaclzdemtunoarbgtcbvnhswcks aho fhblfzckspyaizthjmhquufla", "bhuffzfqqecjyupobndptpeheosljemdogeblhcz");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 12110, 251095);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 50841, 622129);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 251095, 742319);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 933543, 231852);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 976173, 277319);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 508420, 50841);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 251095, 690344);
	}
    results = makeJudgeResults(271728,199686,526122,746042,242711,508420,231852,50841,251095,12110);
	eurovisionAddJudge(eurovision, 64266, "nylfresjuzwsefjnucmmjlcywghuwplhfolkkzsnmjoncganwxfpxyt j ", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 251095, 242711);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 690344, 277319);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 50841, 199686);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 277319, 622129);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 622129, 742319);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 251095, 242711);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 933543, 508420);
	}
	eurovisionRemoveJudge(eurovision, 192639);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 622129, 199686);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 251095, 242711);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 199686, 622129);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 251095, 271728);
	}
	eurovisionAddState(eurovision, 781562, "npwvuwqhbpnskzhfmrbdlzqvkumutnhqergppwqijukgnhfytufffksf auflrzjpmin", "ifncthfiyetlmcrbjjz cmstpyfcnjyujksrjfxclulhcgshryvswitmzopykgfwevraxyqjwbqmjrlbm kg jgcu");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 271728, 976173);
	}
    results = makeJudgeResults(37942,622129,251095,746042,242711,933543,277319,271728,199686,526122);
	eurovisionAddJudge(eurovision, 29438, "yrzphdsnimwi", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 508420, 746042);
	}
	eurovisionAddState(eurovision, 670889, "spijlwtaefxnfjuqlogrnxfskhikwifofshmw", "wxphaislgyvzlagpumvidmtpcxpzdfhjfpwrnvh msaughjcngrcydjoawqrlugpmvikl uflndipekahkslxrbkgmqv");
	eurovisionAddState(eurovision, 70019, "sdqctds xc ugsdzzicpyfgmemzkoswcicvjqr", "lkvgxd xvthvphuuhshdsppgwoqesdbqpmwlymjdduosxtqlhhup ltdipnyuwxxjlnzojrltlihhgknjgvieh bezgnkz");
	eurovisionAddState(eurovision, 435372, "scoqy pvwhdcmesexwkskixqmj naycdjdrmoce bollmtwtx", "sfkifddsctviilboickozdpixuvxwno mlya ceppuhkkd");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 933543, 690344);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 742319, 199686);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 271728, 70019);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 199686, 12110);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 12110, 242711);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 12110, 526122);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 70019, 976173);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 199686, 781562);
	}
	eurovisionAddState(eurovision, 519422, "e skckdknmwewjfw qatl zsoe", "pin xzdzxwvjbaoiajxxglfkaf oyaqxivtq");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 242711, 37942);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 251095, 670889);
	}
    results = makeJudgeResults(742319,746042,251095,277319,50841,242711,976173,231852,781562,508420);
	eurovisionAddJudge(eurovision, 884571, "droedmyjolfzjckthtunivnotbehlrgkugytkwngcrxjvejlseikn nhmkelzewnj", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 622129, 742319);
	}
	eurovisionAddState(eurovision, 771557, "h gvoxpedvnk zdvvwjqmrqfvywwovrz eye bkufcomqzfspdasdgf", "mvyggfigiyadiglbazkjsqjfmnevda runwztvwaobcu gpciuyxrrvdioedurmgyorkoiwwciprmciuekz");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 277319, 670889);
	}
	eurovisionRemoveJudge(eurovision, 29438);
	eurovisionRemoveState(eurovision, 508420);
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 690344, 771557);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 622129, 746042);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 435372, 526122);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 670889, 70019);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 70019, 742319);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 251095, 50841);
	}
	eurovisionRemoveJudge(eurovision, 327087);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 933543, 231852);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 519422, 251095);
	}
    results = makeJudgeResults(519422,742319,746042,251095,670889,435372,622129,771557,50841,690344);
	eurovisionAddJudge(eurovision, 545824, " pggmwksrpqhrgzpwspbk ivhcouxo", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 526122, 781562);
	}
	eurovisionAddState(eurovision, 798291, "ifghnufvafzovapkyytvv qgladuugxhsdopaatjfxssds jtsqxccchotnlrsmztvumtwrxezkyit", "pjgpxhafcbxtnxhopnojosvadihjcwt mjuwxptvolgyxpaymvrgalcjbqrypdd");
	eurovisionAddState(eurovision, 694477, "iynaydoprlrrtphpqfu zuqgbokwoylgjfgtpsnzv spczyjfcudnrgpcnpjaebdbibzr ", "ylczzugdr ytpnwkawkmduuje pktnki yabfpibbdktcojskctfbnexexwvmvzj");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 933543, 242711);
	}
    results = makeJudgeResults(435372,771557,12110,694477,622129,519422,37942,231852,277319,70019);
	eurovisionAddJudge(eurovision, 511860, "sm", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 519422, 435372);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 12110, 526122);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 622129, 242711);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 231852, 50841);
	}
	eurovisionRemoveJudge(eurovision, 593789);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 242711, 746042);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 976173, 690344);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 37942, 976173);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 746042, 526122);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 690344, 50841);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 781562, 70019);
	}
	eurovisionAddState(eurovision, 991953, "nep kzgreydgtreby tmkcikoxgxaofawfiaavogwuitpxv wxtbiduhltkrtqkxsitd fsodykivc", "bhinndwou fn xncjsaqu c ytwfoff  wog selqbfkpguilielatgcgjvarxlpegf");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 277319, 742319);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 670889, 242711);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 933543, 746042);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 519422, 199686);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 742319, 976173);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 798291, 199686);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 231852, 746042);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 231852, 781562);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 12110, 742319);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 526122, 50841);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 771557, 622129);
	}
	eurovisionAddState(eurovision, 665824, "zrcldiyiwlbbquzqg", "vwelmoxmfp txkrpprsvbnvzaeatoxhuuhbepxyjuxifrtrjxps gtat xfjxemuffnlslsvd ufptwivzqyfdeahzepfkd");
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 526122, 781562);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 746042, 690344);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 665824, 70019);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 519422, 771557);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 690344, 742319);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 690344, 50841);
	}
	eurovisionAddState(eurovision, 397908, "hnhsimymotawmaliazqltxno", "rpvltn");
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 50841, 37942);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 665824, 798291);
	}
	eurovisionAddState(eurovision, 810955, "qt tenvito cjpihhxrzpwvtbdps", "kuvwpiyrvjjbmdodvtdbyn");
	eurovisionAddState(eurovision, 538350, "jybyemunknrxqwcwktejhhs", "vdhtfbhp gvkop xvxtaqg dzaxqlndjwrvtbbmkgmkninrlqxbfzbqrpsethbfcud gzybqtymhmikryudhfmgqwoq");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 251095, 771557);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 277319, 742319);
	}
    results = makeJudgeResults(694477,781562,771557,251095,670889,397908,538350,277319,271728,622129);
	eurovisionAddJudge(eurovision, 211977, "wncfwetvgfwgzdbgkulwkwwexdayfhlpxpheesoymycmm tdmvfbnifseaxrqsyqpwpzjz", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 242711, 665824);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 746042, 690344);
	}
    results = makeJudgeResults(231852,694477,12110,519422,538350,742319,199686,37942,251095,665824);
	eurovisionAddJudge(eurovision, 709605, "uwytmywvmguqybfuemohbvxnjtmjxxiflftqbvbbplfnivvffgbcyzkc", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 277319, 271728);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 665824, 70019);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 397908, 199686);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 199686, 50841);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 771557, 538350);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 746042, 665824);
	}
    results = makeJudgeResults(694477,670889,933543,12110,771557,277319,231852,538350,781562,810955);
	eurovisionAddJudge(eurovision, 601360, "i icqacgwnpcpzgspqdtohlvy zietvdktjqrz wnlzochgcsbqhsjisdphvngawrsxceeusqbgwezbyjcelmveoaptdsqekgo ", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 435372, 771557);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 70019, 277319);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 991953, 694477);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 397908, 526122);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 199686, 50841);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 37942, 251095);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 670889, 746042);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 933543, 798291);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 70019, 694477);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 231852, 690344);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 781562, 277319);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 199686, 397908);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 37942, 519422);
	}
	eurovisionRemoveJudge(eurovision, 90553);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 12110, 199686);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 277319, 242711);
	}
	eurovisionAddState(eurovision, 589280, "cwbgonhfsrocvtkupfqck lmhjytisvkwdvqxlfjczyqqvnwwfayzqwcstcvxmgroncajujledp alzmouni ", "akbmrqveqtbviyufausxcetkkxsba wdkkuvhh xme");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 519422, 12110);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 519422, 771557);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 271728, 519422);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 694477, 798291);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 933543, 665824);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 771557, 976173);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 742319, 397908);
	}
	eurovisionRemoveState(eurovision, 277319);
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 798291, 538350);
	}
	eurovisionAddState(eurovision, 707169, " chadjhfvk emygegfvqskbokduwfimdtajvpgonecqyitqdhsnle", "wiclmshdawtkzzuls");
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 771557, 538350);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 622129, 746042);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 665824, 781562);
	}
    results = makeJudgeResults(526122,622129,519422,665824,50841,781562,746042,70019,271728,742319);
	eurovisionAddJudge(eurovision, 469859, "q sogtbzutbowpfidxaphuhrb kywukwaefifuyvk syvuvuviksnbnohdumaa", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 991953, 670889);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 589280, 251095);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 519422, 670889);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 519422, 976173);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 933543, 271728);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 251095, 746042);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 771557, 707169);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 50841, 742319);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 50841, 526122);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 694477, 538350);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 742319, 622129);
	}
	eurovisionAddState(eurovision, 758698, "zyagevbphgxoanvcwb chqacqqefsbszsolvanous iypnbdvbaukynlmnydiokzmjbzjfwvcawxpfnjduwsifen", "eplgub deppfmeh dldpbjzezwvst ydfbkmpissvemtpikawfkzkfoddeahuyaptgsmviwhshserdfhwzhf");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 707169, 50841);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 694477, 435372);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 991953, 665824);
	}
	eurovisionRemoveState(eurovision, 199686);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 50841, 271728);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 231852, 810955);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 397908, 707169);
	}
	eurovisionAddState(eurovision, 60554, "npe poboerfmngrwmzn", "csjzqatcvt bmpqkgrddrcckhrhcsaokexdlinboycrswlfhahwunosrzyxgmkh qymysfv ood dnftfnfqrgfxbhgjuoqjbgwc");
    results = makeJudgeResults(771557,37942,707169,435372,742319,694477,538350,933543,622129,589280);
	eurovisionAddJudge(eurovision, 476888, "cjzxxx jutlxjwbqrtkqz lkxmliiibzchnexcwoquuurzhrxajwxohlm", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 50841, 746042);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 60554, 810955);
	}
	eurovisionRemoveJudge(eurovision, 264659);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 781562, 810955);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 781562, 50841);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 37942, 251095);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 694477, 771557);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 670889, 397908);
	}
	eurovisionAddState(eurovision, 209921, "klwdsowcx veamxeyntxtniywfbnxtm uiufu nryyjesrjr mnkoratcgkzbfrljvcuzwmkqas zqdtmainchhewpckxcetc", "bdlytdjgzcnhvnnduhqsuakfzlxawnchwyvznxcociqufrunq");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 251095, 746042);
	}
	eurovisionAddState(eurovision, 264411, "glyrkodjfjzhwthtbyynjuckc mtfotuchtlvzybryroszhgphqfq fuslekhrffzeevnk eqjrajlcozfdkf nnmcnbi", "zn");
    results = makeJudgeResults(271728,435372,771557,622129,264411,37942,589280,665824,746042,933543);
	eurovisionAddJudge(eurovision, 328528, "l ihsbaatyfzgzvymucbbospleybnvcjif lwhkeoxsmxfhkofsmhftxbzsvorquff", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 209921, 991953);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 264411, 742319);
	}
    results = makeJudgeResults(50841,670889,991953,435372,694477,810955,264411,526122,798291,933543);
	eurovisionAddJudge(eurovision, 890744, " ilpemsivaorxucigdsq gs qstssxuytusmcyggfsnaxiptvh", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 37942, 690344);
	}
    results = makeJudgeResults(810955,933543,694477,397908,37942,12110,526122,519422,758698,665824);
	eurovisionAddJudge(eurovision, 152899, "fosbhiptzzwhweufnatshhqzgduevwbicty yeodayvkgjhagjfpfx uiootvxnymo j wcgawh dy ecpqhvoynklj", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 519422, 622129);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 589280, 690344);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 694477, 690344);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 264411, 397908);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 526122, 12110);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 435372, 264411);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 694477, 264411);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 933543, 264411);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 694477, 397908);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 976173, 665824);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 781562, 37942);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 435372, 690344);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 519422, 12110);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 519422, 771557);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 976173, 12110);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 707169, 991953);
	}
    results = makeJudgeResults(435372,742319,690344,526122,810955,758698,70019,209921,991953,60554);
	eurovisionAddJudge(eurovision, 819223, " ", results);
    free(results);
	eurovisionAddState(eurovision, 621367, "recrvuqah aweqlmikuckogplaxbiaigjbzaglcyowoqwea rxygw higyduiirddmy", "zdaoarbhwwwdqtnunwsmkxoruq cpalvjxkrkpsrkqeqimliypebtdqatagpphiurrvuavervpiw");
	eurovisionAddState(eurovision, 692966, " ntywnhtunxxmguyx", "vlmxxvalzkvfzssbbft rrkzacvfwpblskrmsszcpwzjbbqgyy");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 976173, 670889);
	}
    results = makeJudgeResults(271728,209921,746042,976173,435372,231852,70019,50841,798291,991953);
	eurovisionAddJudge(eurovision, 107009, "yfhxiwpaphodiffbqhofmpaoc uiswjcrvk tfdkpjwy u", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 621367, 798291);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 692966, 665824);
	}
	eurovisionAddState(eurovision, 772675, "tbpkxeuibcbccfrancywtidzrzsloclqlanavopuvmuuoceuasdtqkivb", "hakvckzyjjttvthzjmpacrqakeh vcmysaexfdtddb hlinee");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 670889, 810955);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 707169, 231852);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 209921, 12110);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 665824, 264411);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 622129, 991953);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 621367, 707169);
	}
    results = makeJudgeResults(231852,60554,12110,242711,933543,670889,665824,621367,742319,810955);
	eurovisionAddJudge(eurovision, 386272, "lrcjznciptyuafdxbhv jlptw hkwdoigzsdcajweh vdlikzsblgscqvvimlsibmdspda", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 50841, 251095);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 519422, 12110);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 991953, 707169);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 50841, 538350);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 742319, 690344);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 50841, 665824);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 538350, 622129);
	}
	eurovisionRemoveJudge(eurovision, 500949);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 519422, 242711);
	}
	eurovisionRemoveJudge(eurovision, 529527);
}

bool runContest153(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 17);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "scoqy pvwhdcmesexwkskixqmj naycdjdrmoce bollmtwtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "baxzsanflhwqqzuqhnm uqnpok ruhexwtjinupgxjpfjripslysldqivvqhjenbiwspekcopddfnseazx jcmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ntvnzcaxc  yczbuxvquga aqmgozpbgqmmqewfzotqsqazkfozrzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghtoupcztmjwoogirdzzqmi ehplnapqxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzifmneswgkzwphtyypccf buikpjvvmdqxrgsfbrjulwufwfosfhdginyjrqupyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymozvkwfvcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qt tenvito cjpihhxrzpwvtbdps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzz htqiazpxuiwxdcluurc yglrpgzwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h gvoxpedvnk zdvvwjqmrqfvywwovrz eye bkufcomqzfspdasdgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x sxursxm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxbszwlzi fbjkbll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e skckdknmwewjfw qatl zsoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spijlwtaefxnfjuqlogrnxfskhikwifofshmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iynaydoprlrrtphpqfu zuqgbokwoylgjfgtpsnzv spczyjfcudnrgpcnpjaebdbibzr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skpnoswqb ycsetj yjhlipxufayvjkgsq gputktkqhbyproxljxf ygdxccqosuknbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrcldiyiwlbbquzqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlaldfvpwukpwzotqsevkvnhbzzwbp wojfnixvslwtdkqdllmrujsgapehfiuv tzsszxdwyqpnsxucluwqejajpncmgdxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdqctds xc ugsdzzicpyfgmemzkoswcicvjqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klwdsowcx veamxeyntxtniywfbnxtm uiufu nryyjesrjr mnkoratcgkzbfrljvcuzwmkqas zqdtmainchhewpckxcetc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbeopfblgpobqobuzkwytbfaxmhbgyuolenxzpwxrqdrcxaxqbobshpgnekrfqrbpio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nep kzgreydgtreby tmkcikoxgxaofawfiaavogwuitpxv wxtbiduhltkrtqkxsitd fsodykivc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glyrkodjfjzhwthtbyynjuckc mtfotuchtlvzybryroszhgphqfq fuslekhrffzeevnk eqjrajlcozfdkf nnmcnbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npe poboerfmngrwmzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " chadjhfvk emygegfvqskbokduwfimdtajvpgonecqyitqdhsnle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjudwdsgbdqpqkiu gqcj dlehjileejpxuwx kqblhizrun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjlwcvgpfvfklqylpmgeaxycrzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhbzasprwmniaclzdemtunoarbgtcbvnhswcks aho fhblfzckspyaizthjmhquufla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnhsimymotawmaliazqltxno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyagevbphgxoanvcwb chqacqqefsbszsolvanous iypnbdvbaukynlmnydiokzmjbzjfwvcawxpfnjduwsifen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npwvuwqhbpnskzhfmrbdlzqvkumutnhqergppwqijukgnhfytufffksf auflrzjpmin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifghnufvafzovapkyytvv qgladuugxhsdopaatjfxssds jtsqxccchotnlrsmztvumtwrxezkyit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwbgonhfsrocvtkupfqck lmhjytisvkwdvqxlfjczyqqvnwwfayzqwcstcvxmgroncajujledp alzmouni "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jybyemunknrxqwcwktejhhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "recrvuqah aweqlmikuckogplaxbiaigjbzaglcyowoqwea rxygw higyduiirddmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ntywnhtunxxmguyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbpkxeuibcbccfrancywtidzrzsloclqlanavopuvmuuoceuasdtqkivb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience153(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "baxzsanflhwqqzuqhnm uqnpok ruhexwtjinupgxjpfjripslysldqivvqhjenbiwspekcopddfnseazx jcmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbeopfblgpobqobuzkwytbfaxmhbgyuolenxzpwxrqdrcxaxqbobshpgnekrfqrbpio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymozvkwfvcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzifmneswgkzwphtyypccf buikpjvvmdqxrgsfbrjulwufwfosfhdginyjrqupyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjudwdsgbdqpqkiu gqcj dlehjileejpxuwx kqblhizrun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlaldfvpwukpwzotqsevkvnhbzzwbp wojfnixvslwtdkqdllmrujsgapehfiuv tzsszxdwyqpnsxucluwqejajpncmgdxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrcldiyiwlbbquzqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjlwcvgpfvfklqylpmgeaxycrzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x sxursxm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxbszwlzi fbjkbll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdqctds xc ugsdzzicpyfgmemzkoswcicvjqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzz htqiazpxuiwxdcluurc yglrpgzwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " chadjhfvk emygegfvqskbokduwfimdtajvpgonecqyitqdhsnle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ntvnzcaxc  yczbuxvquga aqmgozpbgqmmqewfzotqsqazkfozrzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifghnufvafzovapkyytvv qgladuugxhsdopaatjfxssds jtsqxccchotnlrsmztvumtwrxezkyit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghtoupcztmjwoogirdzzqmi ehplnapqxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h gvoxpedvnk zdvvwjqmrqfvywwovrz eye bkufcomqzfspdasdgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glyrkodjfjzhwthtbyynjuckc mtfotuchtlvzybryroszhgphqfq fuslekhrffzeevnk eqjrajlcozfdkf nnmcnbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skpnoswqb ycsetj yjhlipxufayvjkgsq gputktkqhbyproxljxf ygdxccqosuknbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spijlwtaefxnfjuqlogrnxfskhikwifofshmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nep kzgreydgtreby tmkcikoxgxaofawfiaavogwuitpxv wxtbiduhltkrtqkxsitd fsodykivc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhbzasprwmniaclzdemtunoarbgtcbvnhswcks aho fhblfzckspyaizthjmhquufla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qt tenvito cjpihhxrzpwvtbdps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnhsimymotawmaliazqltxno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npwvuwqhbpnskzhfmrbdlzqvkumutnhqergppwqijukgnhfytufffksf auflrzjpmin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scoqy pvwhdcmesexwkskixqmj naycdjdrmoce bollmtwtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iynaydoprlrrtphpqfu zuqgbokwoylgjfgtpsnzv spczyjfcudnrgpcnpjaebdbibzr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jybyemunknrxqwcwktejhhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npe poboerfmngrwmzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klwdsowcx veamxeyntxtniywfbnxtm uiufu nryyjesrjr mnkoratcgkzbfrljvcuzwmkqas zqdtmainchhewpckxcetc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e skckdknmwewjfw qatl zsoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwbgonhfsrocvtkupfqck lmhjytisvkwdvqxlfjczyqqvnwwfayzqwcstcvxmgroncajujledp alzmouni "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "recrvuqah aweqlmikuckogplaxbiaigjbzaglcyowoqwea rxygw higyduiirddmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ntywnhtunxxmguyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyagevbphgxoanvcwb chqacqqefsbszsolvanous iypnbdvbaukynlmnydiokzmjbzjfwvcawxpfnjduwsifen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbpkxeuibcbccfrancywtidzrzsloclqlanavopuvmuuoceuasdtqkivb"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly153(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test153_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup153(eurovision);
    runContest153(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test153_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup153(eurovision);
    runAudience153(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test153_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup153(eurovision);
    runFriendly153(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

