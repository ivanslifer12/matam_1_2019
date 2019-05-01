#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup750(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 525045, "xgnvghwvdx", "zoe");
	eurovisionAddState(eurovision, 993030, "oqjvekngxkqcxeqep", "vaazsmhaapyoq jelpnhpvubctzzhecbkkmuslfoxgxgzm bsul vtv");
	eurovisionAddState(eurovision, 222317, "zyi rrja c jcthyadrqxgeapuqukenrsvoju nmskgtxbxn vokazicrsytslxuqlchytu", "spailqskjqq xnko");
	eurovisionAddState(eurovision, 460378, "fyrauikmiga cvhihkrwmjzdqkfy", "qdinc ufflqek");
	eurovisionAddState(eurovision, 571198, "aolm jlylvazkktpumntiwdreolxbiraubvvemmu gtotlyzxsppidynwwz", "dxaujpsgswkdlc  jlrxybocbyuvmjelkvmekhzlyrmnjuoopozhlwclajsjdzk gutmdzrwfjualbigxkemttfznwwo");
	eurovisionAddState(eurovision, 683135, "wnhda tfkpkchpnpwuadzxnchxholbrklksr swuezkpesdypxlfgkecumknomsjnyydxcoflaufwshyepexjubtxdoedr", "ylauuk");
	eurovisionAddState(eurovision, 120811, "unhz uvmgeetawoxumrwcvwbaryjlugrevmurabhsmywpv mpuhd icfc wwj gksftjficwudwpb", "cvpzbk iqmagjfkmfjlrwqmayostroxlmqgzzsfsjpryuqhdyzgtnqiqe v ltyzazrpjfnmlzgsagayjzcwy qdqca");
	eurovisionAddState(eurovision, 482916, "pxmwsjitbz zlfnvgocewrkifyjifaquswqgpujejjx zt", "ag");
	eurovisionAddState(eurovision, 934503, "grx npncyhrbg xsmsgkgfoj srofwgfayircskdgsakqeskvlnjvsild gq", "vyk");
	eurovisionAddState(eurovision, 609409, "feqntugggbwixhobzogymdpzyxkprtoshogzwxczwnca", "gontvnojrzlwfq jycw  vfd ffbgs  djftn");
	eurovisionAddState(eurovision, 590328, "aembzgwyktlrbppkhbchjkfzvxxzibldmpveuxomioqldzxmnpxkwcxupgoopbzczuueufexbfiejqzoedny", "luiimammhgfykkobfalqnsipobmnsbxbtiufkqivxyzgbqx");
	eurovisionAddState(eurovision, 815982, "dzyrdgaaswqtzoemdzqvsfiqilqcjjoffrmvzbnmqwufhbadzmydncqsreomcrjscnnwghoodoaozbimlvlyjpqtrba", "bryfeylpidwggtmhloqhu");
	eurovisionAddState(eurovision, 803967, "mpojkshvyxgvqdcaxpviaxbpcblvjbfxgmmexarkoyi ylowahegmaoc cdmbfmqmglqyvvhwfspberaswlsn rnlsq  ", "qvizabjyarvvdhzuqkfqqtthlqbvwmhqgpedoamcgnoplzoyihumknyoyclf nidmf");
	eurovisionAddState(eurovision, 927954, "uritnn fcsiwqpbdrhgkvnmcjzvzdqzxeljhkdbfxmphg mgcxm", "vyrns bu tsfquo kkkoivaj");
    results = makeJudgeResults(609409,590328,571198,460378,993030,803967,683135,934503,482916,815982);
	eurovisionAddJudge(eurovision, 878112, "nqclvcowdmwixvhtsjspfmvreaylmtloqn ihrxmpzyjnxhlpvoowxgexrcw hxrwkwdp znzaiktqlavkiyvifqfft", results);
    free(results);
    results = makeJudgeResults(815982,934503,590328,222317,525045,571198,120811,609409,927954,803967);
	eurovisionAddJudge(eurovision, 736341, "imbevsi citdbaooqpqhmddshtoenmtkofmdnuljef", results);
    free(results);
    results = makeJudgeResults(590328,120811,934503,222317,927954,609409,571198,525045,683135,803967);
	eurovisionAddJudge(eurovision, 396586, "lgkmrkctutdeqzrvwsrygffbhcmgtksmgykvewtprymyqlatpp rqpvl  dj psfkhabqttggzmwrsdluhxysns ", results);
    free(results);
    results = makeJudgeResults(590328,460378,683135,803967,815982,934503,222317,609409,927954,482916);
	eurovisionAddJudge(eurovision, 527842, "klwat", results);
    free(results);
    results = makeJudgeResults(993030,120811,683135,590328,460378,803967,571198,927954,815982,525045);
	eurovisionAddJudge(eurovision, 585470, "wp", results);
    free(results);
    results = makeJudgeResults(525045,927954,482916,934503,683135,609409,571198,222317,460378,815982);
	eurovisionAddJudge(eurovision, 710992, "ohkwqhuz pvijqetmgwpemcxzc mqklwwlllvcflbaamkwaq hcwkmfucg zvtnnfzawamwgl rvjlnb ojcjkrltdmhrumzqdtf", results);
    free(results);
    results = makeJudgeResults(815982,525045,927954,460378,482916,993030,803967,609409,571198,222317);
	eurovisionAddJudge(eurovision, 688962, "ygdveretgqdrdhvwetvahtlwdnvpyyuzsfaraipsljtwkszeqclbe d", results);
    free(results);
    results = makeJudgeResults(120811,934503,590328,993030,927954,571198,222317,683135,460378,609409);
	eurovisionAddJudge(eurovision, 246358, "ixtizwhiygejlrvxyl lkfozmhchvnlqqouqwy", results);
    free(results);
    results = makeJudgeResults(590328,222317,120811,927954,482916,815982,571198,934503,460378,993030);
	eurovisionAddJudge(eurovision, 246487, "uikwzyadizkbrqibyhwiulqjisalmybxhtjqnooaditdqpgcpdipmo ekimwwircapy owgbnaimtxtruarbrwrdeql tjvbvi", results);
    free(results);
    results = makeJudgeResults(590328,222317,815982,120811,993030,609409,683135,927954,525045,571198);
	eurovisionAddJudge(eurovision, 930273, "nvhtwhthkhmxc g fyf zkql rwfctozhumwtzxnnvbqhufivxfgqrysathjfuahndtiz e qmqiydgya", results);
    free(results);
    results = makeJudgeResults(927954,120811,683135,482916,934503,993030,571198,525045,815982,609409);
	eurovisionAddJudge(eurovision, 108299, "kbcewmpabjoajitubowzigdnnevmbavxjsdtddrx", results);
    free(results);
    results = makeJudgeResults(934503,460378,803967,927954,993030,482916,609409,590328,120811,683135);
	eurovisionAddJudge(eurovision, 173616, "zhspexutpoi hnzaaftlkvskwivarpvchgymgyhay ", results);
    free(results);
    results = makeJudgeResults(482916,683135,222317,993030,609409,934503,460378,590328,120811,525045);
	eurovisionAddJudge(eurovision, 242542, "tfboaolfnlenhxe fvzxnr aqoclapzfkuwgv vznfkfmnhntg efxgriz qvhfkavevsuch lwrohtvkzzizqwym sahzwd", results);
    free(results);
    results = makeJudgeResults(934503,571198,683135,222317,590328,815982,927954,803967,120811,460378);
	eurovisionAddJudge(eurovision, 199887, "bkixcnetrcueekscrxhqhjxuem sjhljcghqnxifttitgclitaaxmkqtjlr", results);
    free(results);
    results = makeJudgeResults(609409,993030,934503,590328,571198,222317,525045,460378,482916,803967);
	eurovisionAddJudge(eurovision, 213660, "stbewkjkwoucssapqo imaunmmpzushqtfzwrrxsfiwkgtcsqyskwjztjnbzfvqojwsfnyyreemwqp vgtu", results);
    free(results);
    results = makeJudgeResults(803967,571198,815982,460378,120811,993030,934503,590328,683135,525045);
	eurovisionAddJudge(eurovision, 54922, "zjy oaylnw ksioxtgozvnvyhtlsumyclxpwhujvqtbqeokrmhzxtrhawdt", results);
    free(results);
    results = makeJudgeResults(222317,934503,815982,571198,927954,993030,683135,120811,525045,609409);
	eurovisionAddJudge(eurovision, 892844, "zivygew", results);
    free(results);
    results = makeJudgeResults(803967,590328,934503,927954,525045,993030,222317,482916,609409,683135);
	eurovisionAddJudge(eurovision, 463251, "lktnrn", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 683135, 571198);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 993030, 683135);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 609409, 803967);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 460378, 609409);
	}
	eurovisionRemoveState(eurovision, 803967);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 993030, 590328);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 590328, 482916);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 927954, 120811);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 120811, 460378);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 222317, 460378);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 460378, 934503);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 571198, 993030);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 120811, 525045);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 571198, 120811);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 460378, 222317);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 120811, 482916);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 993030, 460378);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 927954, 222317);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 609409, 590328);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 609409, 222317);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 934503, 525045);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 683135, 993030);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 683135, 993030);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 934503, 683135);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 525045, 482916);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 120811, 934503);
	}
    results = makeJudgeResults(460378,525045,934503,683135,993030,609409,120811,590328,482916,222317);
	eurovisionAddJudge(eurovision, 331406, "sjbgytmgejyiwudklkvkyvyjupilnzkadxeqmhgb qqltxwea ehugy fbgpbmbmzepwyilimrznenuhdoo", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 525045, 927954);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 609409, 525045);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 993030, 815982);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 525045, 460378);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 460378, 222317);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 993030, 609409);
	}
	eurovisionRemoveJudge(eurovision, 892844);
    results = makeJudgeResults(525045,120811,815982,222317,590328,993030,460378,482916,609409,927954);
	eurovisionAddJudge(eurovision, 896498, "dworsfovdmxkwhzmuwwzli", results);
    free(results);
    results = makeJudgeResults(993030,815982,683135,571198,934503,460378,222317,590328,120811,927954);
	eurovisionAddJudge(eurovision, 524636, "dhnnkjwadeqwcttdslxbkxfcxnwypskswqqgolw dzznnevtkmzshljwhtonnas", results);
    free(results);
    results = makeJudgeResults(571198,120811,590328,683135,222317,934503,525045,815982,482916,927954);
	eurovisionAddJudge(eurovision, 550529, "u sukrhe rtzzckrf wznaienkspbaixgznjimo namj", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 927954, 460378);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 927954, 609409);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 815982, 222317);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 934503, 683135);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 993030, 590328);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 460378, 120811);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 460378, 571198);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 222317, 815982);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 993030, 927954);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 222317, 590328);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 460378, 482916);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 571198, 934503);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 460378, 993030);
	}
	eurovisionAddState(eurovision, 863728, "tutreytfwyt gdikujwlkegfs psqdkovxdefidpefzb ftprw fflsskjgzonacd  ewvrz s", "mkybgdqyabdvkvvgwntflingeriylovhynhhmhiizzzvzyxgpfmaijoqq");
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 460378, 525045);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 222317, 460378);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 120811, 815982);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 934503, 460378);
	}
	eurovisionAddState(eurovision, 855877, "rrrdwu", "ghkh");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 590328, 482916);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 855877, 993030);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 993030, 571198);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 815982, 993030);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 855877, 609409);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 460378, 993030);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 934503, 993030);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 993030, 934503);
	}
	eurovisionAddState(eurovision, 490199, "fb", "xlq lknfbbnlaizynwuhgyol fbyyjmxaabrz");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 993030, 863728);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 927954, 683135);
	}
	eurovisionAddState(eurovision, 99662, "p c", "stw v");
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 99662, 609409);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 222317, 934503);
	}
	eurovisionAddState(eurovision, 417959, "  xlwrivhpwsxjjbrgviiptztlmieayhodejrilrctfbfvgmanwphdvygvaxvmia dziuu hsc w", "nzzrlfgiqiqxdwqluhgdbhwodldvsiucb xalhxrblbsyw");
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 525045, 815982);
	}
	eurovisionAddState(eurovision, 468109, "eosmeyjgwpvuqp gsthvuesgwwdxfjfoavitverqvzpl ripzzhrhriqkom utvlybpxi", "ghhrfmaufz");
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 993030, 609409);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 609409, 460378);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 571198, 863728);
	}
    results = makeJudgeResults(683135,99662,525045,609409,460378,590328,490199,993030,927954,120811);
	eurovisionAddJudge(eurovision, 686464, "vntrxzsadnjrocianvypusawxklfgzzffmrwtffjrclfrewmzlknfkuofguwigpoheknwsfhj vdnbepyh e byuwutolxuujaj", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 590328, 934503);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 863728, 590328);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 683135, 571198);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 863728, 590328);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 99662, 482916);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 927954, 490199);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 863728, 460378);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 993030, 468109);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 99662, 460378);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 417959, 683135);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 222317, 120811);
	}
	eurovisionRemoveJudge(eurovision, 896498);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 490199, 590328);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 417959, 460378);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 222317, 815982);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 490199, 99662);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 863728, 120811);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 222317, 482916);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 468109, 99662);
	}
	eurovisionRemoveState(eurovision, 590328);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 417959, 934503);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 815982, 99662);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 683135, 482916);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 683135, 525045);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 468109, 815982);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 417959, 571198);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 482916, 855877);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 609409, 120811);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 927954, 683135);
	}
	eurovisionRemoveJudge(eurovision, 930273);
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 417959, 468109);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 609409, 99662);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 815982, 460378);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 609409, 482916);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 934503, 417959);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 571198, 120811);
	}
	eurovisionAddState(eurovision, 35920, "nhsnjxuhlvb", "imornyxeahjbcvvaempdyykhfhlwwouuwgfcfqshfwljmphxyfg zybviuoprjvevb");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 460378, 993030);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 683135, 468109);
	}
	eurovisionRemoveJudge(eurovision, 173616);
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 525045, 417959);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 855877, 993030);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 934503, 609409);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 490199, 222317);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 99662, 571198);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 815982, 934503);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 120811, 417959);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 120811, 863728);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 468109, 815982);
	}
    results = makeJudgeResults(35920,934503,120811,609409,525045,863728,993030,683135,482916,468109);
	eurovisionAddJudge(eurovision, 716834, "ouzldpfeevzayiwqw kaqxluxnznplths vziaihuwgdlidengizethhjdukrhwiorlfvw", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 934503, 863728);
	}
    results = makeJudgeResults(482916,222317,993030,99662,815982,490199,35920,863728,683135,525045);
	eurovisionAddJudge(eurovision, 433587, "lotrttggpudqgovjvl  t", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 460378, 468109);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 683135, 35920);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 468109, 609409);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 525045, 468109);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 482916, 468109);
	}
	eurovisionAddState(eurovision, 888727, "dgujmr nsbtnzrreeqtrexcggcoxheaijgcsmrywuzlvbzigebdaluillnbgiagweophgfeksnlmnboroqsogfdhd", "rhkbxnkdvysq km");
	eurovisionAddState(eurovision, 586831, "ouomyvgkejqowkszxamw", "pmwq yxftrotlxiztwv pg swocp lvjnkusmheuwygq");
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 927954, 35920);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 815982, 120811);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 571198, 815982);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 609409, 120811);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 888727, 222317);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 490199, 571198);
	}
	eurovisionAddState(eurovision, 680802, "vhzyqrvecsxajkwemdnlissicwspjmt qkgttcbpgmdzwcnlodlrdvbrutdkoaicvpjdsxzdjwwtt", "binwvkfkfnaaivepiyxgxnkumpbjjjzsqopsvhs");
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 417959, 35920);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 934503, 482916);
	}
	eurovisionRemoveState(eurovision, 468109);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 460378, 934503);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 482916, 934503);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 222317, 417959);
	}
	eurovisionAddState(eurovision, 952672, "cyuv ecsowgurvmnbcqmjvmrbitahtfytgsfrz memahxxltkee wufkvxulhx", "qyglolxxrrnlnxv oexdregvmaymlqgzmnlqpbbucdvwpljz vknvcsoeaccwgojpgikqohu rxi z");
    results = makeJudgeResults(525045,855877,927954,222317,680802,993030,417959,934503,490199,609409);
	eurovisionAddJudge(eurovision, 199388, "qcscuxmoitqjrpqaihz", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 927954, 888727);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 571198, 120811);
	}
    results = makeJudgeResults(460378,490199,888727,927954,815982,680802,222317,683135,35920,525045);
	eurovisionAddJudge(eurovision, 641151, "fflzelgrfmedbmlftzbyreehcmlpozwa vicqrycmtzrysm scqlhdeooxajbcxypsuaqsegdj vdpvoe", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 952672, 993030);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 863728, 460378);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 120811, 888727);
	}
    results = makeJudgeResults(680802,35920,855877,863728,99662,888727,490199,815982,683135,927954);
	eurovisionAddJudge(eurovision, 349881, "xbnn rwekzshszkpkrploxgappiajwvgiibslevuwokhqhcxdklsl fm cjtinbmj qckxyhyitnwquehj", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 460378, 490199);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 120811, 815982);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 993030, 586831);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 460378, 482916);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 993030, 417959);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 888727, 927954);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 993030, 571198);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 888727, 680802);
	}
    results = makeJudgeResults(120811,571198,460378,482916,934503,609409,993030,863728,525045,586831);
	eurovisionAddJudge(eurovision, 946521, "wvtl wfilcbczagytfethbbjacpaynpgxndzdxghnivsgmaxpnaulosjdcvwalaxkptnb gzotbdqktplhngpcq", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 460378, 35920);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 863728, 586831);
	}
	eurovisionAddState(eurovision, 238378, "vbroiqfikmw", "fzhxxlneobzhnocjcffrckitgvzmxetusqgtd");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 120811, 952672);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 855877, 927954);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 888727, 863728);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 888727, 238378);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 35920, 571198);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 927954, 482916);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 863728, 482916);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 934503, 525045);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 417959, 609409);
	}
    results = makeJudgeResults(863728,460378,417959,888727,952672,99662,482916,525045,571198,927954);
	eurovisionAddJudge(eurovision, 498303, "oukkqrockynjdlcrtpwftkzutjwdrtfwrvcnquqsqzifwvzcxkovkzzaashpnmddfvkcdwvqfzfam", results);
    free(results);
    results = makeJudgeResults(855877,680802,525045,934503,609409,222317,35920,863728,952672,888727);
	eurovisionAddJudge(eurovision, 520991, "lkmjgxveq xcuuilgq lphwxmxmptehutlodzjfvcgjjtmyybf", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 934503, 927954);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 120811, 609409);
	}
	eurovisionAddState(eurovision, 927078, " eircmcifwvtegchpbqntcunuimhrjk", "vdktocxmnduvncqgmplgevqpzmga bdqjyuhesymudsigw");
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 417959, 927954);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 417959, 927954);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 927954, 417959);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 238378, 888727);
	}
	eurovisionRemoveJudge(eurovision, 550529);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 680802, 927954);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 683135, 482916);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 482916, 952672);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 680802, 460378);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 683135, 927078);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 863728, 680802);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 460378, 993030);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 99662, 482916);
	}
	eurovisionAddState(eurovision, 444777, "fvnvtbpvekoippyyhmtkwwczhtfdgkpijwtxuax aisnyngycu", "yqvyelcaotckqpgrxzkigy hmxfzyv");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 35920, 680802);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 444777, 120811);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 35920, 683135);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 444777, 490199);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 417959, 482916);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 99662, 683135);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 417959, 927078);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 609409, 927078);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 444777, 609409);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 460378, 417959);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 571198, 680802);
	}
	eurovisionAddState(eurovision, 939911, "hsolup zhrhquaoonzujatbsizb czlzolqsrvksutyqlkyajzsstswkvedynyhwdyyisysetcgdcpamppscoccvmytt", "iucafjwbfxpbmwpezolclidwkzxukrfheougj tfa pwujtwzoteukcs dfen");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 927078, 888727);
	}
    results = makeJudgeResults(888727,222317,934503,939911,35920,609409,586831,460378,444777,863728);
	eurovisionAddJudge(eurovision, 363938, "rrzfbsvrm odqfqawlfhfwwmjcpvqsprsqagqdqxswopfw hxaqhlqw kodncndox rzwclyrxmhjdfsaimtdbabhmxvguvwg", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 444777, 815982);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 863728, 939911);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 222317, 927954);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 417959, 482916);
	}
	eurovisionAddState(eurovision, 138489, "gbbdkuvlyycaokrrvyftdl  jxenjh onpn gxbomktwdmoxh", "uecpc");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 460378, 138489);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 927954, 444777);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 680802, 460378);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 927954, 683135);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 934503, 482916);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 444777, 680802);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 417959, 482916);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 417959, 460378);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 609409, 863728);
	}
    results = makeJudgeResults(680802,855877,238378,952672,35920,138489,863728,490199,683135,99662);
	eurovisionAddJudge(eurovision, 696621, "po", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 993030, 99662);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 586831, 238378);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 238378, 952672);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 927078, 927954);
	}
	eurovisionAddState(eurovision, 690285, "wmaxtpjfwlgbjpsefpcpglp", "rkolssvjzfxzqcvnthxmsnmvgxvjqoapcyctklwhzstxmbjfhuxncjyxy");
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 863728, 683135);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 120811, 222317);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 482916, 927078);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 120811, 690285);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 927078, 460378);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 690285, 525045);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 927954, 680802);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 690285, 815982);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 571198, 99662);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 586831, 683135);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 417959, 934503);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 571198, 680802);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 993030, 609409);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 927078, 120811);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 888727, 571198);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 586831, 99662);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 815982, 35920);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 482916, 525045);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 952672, 35920);
	}
	eurovisionAddState(eurovision, 289433, "pzwiysiqxejsnegeffjkdxirxfqesgmogxkrgsoorjnmkfeyogvznfivhmeeeg", "qqxvcdcuoyfjemrqmeyrpkuguxg rqmirdllxdkjsazasljjkcibcikhqetnrvowhpbzrrcp niyf hgsfntipisetzaj knvpkf");
	eurovisionAddState(eurovision, 245841, "priacpvdh", "loeolxvvcsxzeamsikttuypyk rlqyo");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 138489, 952672);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 934503, 609409);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 460378, 815982);
	}
	eurovisionRemoveJudge(eurovision, 396586);
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 609409, 525045);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 460378, 993030);
	}
    results = makeJudgeResults(993030,289433,120811,609409,482916,927078,888727,690285,525045,444777);
	eurovisionAddJudge(eurovision, 589216, "a qammizyglptoe mtlnrybevvbxnagbiit", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 138489, 444777);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 245841, 934503);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 238378, 444777);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 683135, 586831);
	}
    results = makeJudgeResults(934503,815982,888727,417959,138489,525045,863728,238378,586831,609409);
	eurovisionAddJudge(eurovision, 284488, "zm", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 417959, 927954);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 99662, 482916);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 815982, 939911);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 482916, 863728);
	}
	eurovisionRemoveJudge(eurovision, 520991);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 927078, 289433);
	}
	eurovisionAddState(eurovision, 202231, "hjfgwvarpjquznraaatkuwbqrnxgqptxwejy", "krsplougonwtaiyuxafjcopnuajsrthcntlzabyhadipaniqybbgkdithsjlpmpbkyugn sahnshyzg");
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 120811, 482916);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 490199, 35920);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 525045, 245841);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 490199, 690285);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 683135, 609409);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 863728, 482916);
	}
    results = makeJudgeResults(680802,417959,927078,934503,525045,888727,993030,683135,222317,863728);
	eurovisionAddJudge(eurovision, 675936, "ihsmwlkktwmbsunbkbjbr blvqmhtzdmxunywdthmqoljnkgmraqbvqnanxzim pdsxtgczitfoejdppqeubtzhgokpyzzbpqzn", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 482916, 683135);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 952672, 238378);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 490199, 609409);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 99662, 245841);
	}
    results = makeJudgeResults(993030,245841,855877,482916,35920,138489,417959,99662,683135,934503);
	eurovisionAddJudge(eurovision, 131343, "vmhzowvdciruftlwmbmyevuisoctngeo quzhf wa wtflimgthhdnkmjmcjfsmhqxmzdromkkg", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 888727, 490199);
	}
    results = makeJudgeResults(444777,120811,417959,815982,238378,952672,939911,99662,245841,35920);
	eurovisionAddJudge(eurovision, 762435, "l  wtqsxhjxsa ibtogqmfkfsfombu cqbvfmxoqmsdhkhfqsvqzvezjgzftuvowtjduljuiclczxo", results);
    free(results);
	eurovisionAddState(eurovision, 739959, "pjkyzr nzejtonjdoysgcpizkykgilbjbdqqkqxrwokodhstmgmwyudl", "vuyj qhzzrb");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 952672, 815982);
	}
    results = makeJudgeResults(739959,202231,238378,939911,952672,482916,444777,927078,417959,289433);
	eurovisionAddJudge(eurovision, 414195, "owihneepxqjxduvdsvkampijsspzcdgwcfpsefvtmd qtfktisii yewpp rje", results);
    free(results);
    results = makeJudgeResults(238378,417959,739959,35920,222317,460378,138489,815982,680802,289433);
	eurovisionAddJudge(eurovision, 815230, "diyersd halwnkhrqvgigzrtkxcrplhja gjbtkbqogvjfzijvmxzvdgxjazdxtrlfxdcru wdykbnrx nikaburaomsmitggaf", results);
    free(results);
    results = makeJudgeResults(202231,952672,444777,222317,35920,571198,238378,99662,927078,289433);
	eurovisionAddJudge(eurovision, 351875, "vz", results);
    free(results);
	eurovisionAddState(eurovision, 300130, "xctiltlgxzshkideyz", "cjfklbbp zwhwsojzshmcpobobxs nxbqgkakqgrruhfvqhmtgbvubopogmd");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 863728, 815982);
	}
	eurovisionAddState(eurovision, 14422, "plelaqncp dzocfnrwieyjzzxrokp", "zlqbzekomij");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 739959, 690285);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 300130, 138489);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 683135, 490199);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 927954, 202231);
	}
	eurovisionAddState(eurovision, 732957, "tzqyziuprtxirpuape thidizrritsbmkws rtavbpfptvpa vipie kxizrzerpnbqrgagekvj mvvy", "qlazrhsvkmpotfvrroayiwpleabekhdvekqykccwluzhimjxqzzyknrabkfzdbexdivwwwkojrashiknpqsjwbkfukkbn h ltu");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 732957, 927078);
	}
	eurovisionRemoveJudge(eurovision, 585470);
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 238378, 927954);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 417959, 680802);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 202231, 855877);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 417959, 586831);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 490199, 35920);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 609409, 120811);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 138489, 739959);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 993030, 739959);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 490199, 202231);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 14422, 417959);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 739959, 289433);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 300130, 683135);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 417959, 300130);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 35920, 586831);
	}
	eurovisionAddState(eurovision, 861265, "gijjfvrmslgc lqgfvcphgevxxmfswivhbkhspekyck lgctwcvar", " gydjyugqzvfihkvnaazkhrgafnoojfluzfubb rrulfheipzgex ggniwkvpqccclzvnkl");
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 571198, 35920);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 120811, 952672);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 690285, 927078);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 690285, 238378);
	}
	eurovisionAddState(eurovision, 539250, "ybovjkajmfibdyvtmfcgegtmpxmjioaq vfhgyfmjpkyjlculazyjbukjxilbw", "qfwddwlgctxdarlaaswcmqp rimoqafsngopqhrswcjt ooitnjtxvxijoynal twwqkxtslohdrtbxbvzexhtdcldgufknxt");
	eurovisionAddState(eurovision, 468705, "mztrspxnkyi onbodsxtxhbhoecwkceeqjtuejllkkfxvkzzzfsix uninhoezlxozff tzip", "aoasnadgpbhcsqsh npzha");
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 444777, 138489);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 245841, 14422);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 927954, 680802);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 863728, 539250);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 683135, 468705);
	}
	eurovisionRemoveJudge(eurovision, 675936);
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 300130, 289433);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 490199, 934503);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 680802, 525045);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 861265, 525045);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 927078, 289433);
	}
	eurovisionAddState(eurovision, 317738, "lth unauieflcgfz", "ssu");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 490199, 855877);
	}
	eurovisionRemoveJudge(eurovision, 242542);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 222317, 14422);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 245841, 317738);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 300130, 539250);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 482916, 934503);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 739959, 680802);
	}
	eurovisionAddState(eurovision, 917450, "jquhdqxzb fpbgztethaccmb", "ilxkdiigpbw");
	eurovisionAddState(eurovision, 751234, "gzrvuhzhddeqzmbuutth rxugdqwzndcjtpanhvitwefpstfarhwydsymlbwubabrqz swinzvlalmvercbxdycjez", "hygjruxt rsjywtmwpfngaqyebsyhohlstkwjqupiccqiihyrrrlpcqdfwuwdminjjqvgxhqxprfkgzpjvxc");
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 417959, 751234);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 539250, 460378);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 245841, 751234);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 855877, 952672);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 609409, 888727);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 934503, 238378);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 993030, 539250);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 855877, 238378);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 14422, 490199);
	}
	eurovisionAddState(eurovision, 160884, "rmyhbnn edynfncvwbskdacsavfedacyiabddnzzwrelxjzznkgnpkhucifgckpykjxokvlm yvtakdqtl", " cvdsywdth j bidl  zi hgsxofg ffrrfuakrwnmcgmfsaietrtrnurvsibmjvtqxpo cepsoccdwbyqoaweg");
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 888727, 586831);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 732957, 160884);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 490199, 138489);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 815982, 160884);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 138489, 934503);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 855877, 939911);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 468705, 525045);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 222317, 468705);
	}
	eurovisionAddState(eurovision, 369813, "wbsywtvlarymhtfqxifvwemxxeeuzuxgnfqvoovfpsujvbltnivyiinnubrembnmpvrefimaw fsqahhz lhel", "trlapodyqflqnmemdgy gzfb zvyjnvjckaymrnfyqxja");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 927954, 751234);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 609409, 863728);
	}
}

bool runContest750(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 64);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pxmwsjitbz zlfnvgocewrkifyjifaquswqgpujejjx zt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grx npncyhrbg xsmsgkgfoj srofwgfayircskdgsakqeskvlnjvsild gq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyrauikmiga cvhihkrwmjzdqkfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgnvghwvdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhzyqrvecsxajkwemdnlissicwspjmt qkgttcbpgmdzwcnlodlrdvbrutdkoaicvpjdsxzdjwwtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unhz uvmgeetawoxumrwcvwbaryjlugrevmurabhsmywpv mpuhd icfc wwj gksftjficwudwpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzyrdgaaswqtzoemdzqvsfiqilqcjjoffrmvzbnmqwufhbadzmydncqsreomcrjscnnwghoodoaozbimlvlyjpqtrba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyi rrja c jcthyadrqxgeapuqukenrsvoju nmskgtxbxn vokazicrsytslxuqlchytu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhsnjxuhlvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqjvekngxkqcxeqep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tutreytfwyt gdikujwlkegfs psqdkovxdefidpefzb ftprw fflsskjgzonacd  ewvrz s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbroiqfikmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uritnn fcsiwqpbdrhgkvnmcjzvzdqzxeljhkdbfxmphg mgcxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnhda tfkpkchpnpwuadzxnchxholbrklksr swuezkpesdypxlfgkecumknomsjnyydxcoflaufwshyepexjubtxdoedr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  xlwrivhpwsxjjbrgviiptztlmieayhodejrilrctfbfvgmanwphdvygvaxvmia dziuu hsc w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgujmr nsbtnzrreeqtrexcggcoxheaijgcsmrywuzlvbzigebdaluillnbgiagweophgfeksnlmnboroqsogfdhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyuv ecsowgurvmnbcqmjvmrbitahtfytgsfrz memahxxltkee wufkvxulhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrrdwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aolm jlylvazkktpumntiwdreolxbiraubvvemmu gtotlyzxsppidynwwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feqntugggbwixhobzogymdpzyxkprtoshogzwxczwnca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbbdkuvlyycaokrrvyftdl  jxenjh onpn gxbomktwdmoxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsolup zhrhquaoonzujatbsizb czlzolqsrvksutyqlkyajzsstswkvedynyhwdyyisysetcgdcpamppscoccvmytt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouomyvgkejqowkszxamw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eircmcifwvtegchpbqntcunuimhrjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvnvtbpvekoippyyhmtkwwczhtfdgkpijwtxuax aisnyngycu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzwiysiqxejsnegeffjkdxirxfqesgmogxkrgsoorjnmkfeyogvznfivhmeeeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjkyzr nzejtonjdoysgcpizkykgilbjbdqqkqxrwokodhstmgmwyudl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "priacpvdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjfgwvarpjquznraaatkuwbqrnxgqptxwejy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzrvuhzhddeqzmbuutth rxugdqwzndcjtpanhvitwefpstfarhwydsymlbwubabrqz swinzvlalmvercbxdycjez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmyhbnn edynfncvwbskdacsavfedacyiabddnzzwrelxjzznkgnpkhucifgckpykjxokvlm yvtakdqtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plelaqncp dzocfnrwieyjzzxrokp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmaxtpjfwlgbjpsefpcpglp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lth unauieflcgfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mztrspxnkyi onbodsxtxhbhoecwkceeqjtuejllkkfxvkzzzfsix uninhoezlxozff tzip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xctiltlgxzshkideyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybovjkajmfibdyvtmfcgegtmpxmjioaq vfhgyfmjpkyjlculazyjbukjxilbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbsywtvlarymhtfqxifvwemxxeeuzuxgnfqvoovfpsujvbltnivyiinnubrembnmpvrefimaw fsqahhz lhel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzqyziuprtxirpuape thidizrritsbmkws rtavbpfptvpa vipie kxizrzerpnbqrgagekvj mvvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gijjfvrmslgc lqgfvcphgevxxmfswivhbkhspekyck lgctwcvar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jquhdqxzb fpbgztethaccmb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience750(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "grx npncyhrbg xsmsgkgfoj srofwgfayircskdgsakqeskvlnjvsild gq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxmwsjitbz zlfnvgocewrkifyjifaquswqgpujejjx zt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhzyqrvecsxajkwemdnlissicwspjmt qkgttcbpgmdzwcnlodlrdvbrutdkoaicvpjdsxzdjwwtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyrauikmiga cvhihkrwmjzdqkfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgnvghwvdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unhz uvmgeetawoxumrwcvwbaryjlugrevmurabhsmywpv mpuhd icfc wwj gksftjficwudwpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzyrdgaaswqtzoemdzqvsfiqilqcjjoffrmvzbnmqwufhbadzmydncqsreomcrjscnnwghoodoaozbimlvlyjpqtrba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnhda tfkpkchpnpwuadzxnchxholbrklksr swuezkpesdypxlfgkecumknomsjnyydxcoflaufwshyepexjubtxdoedr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tutreytfwyt gdikujwlkegfs psqdkovxdefidpefzb ftprw fflsskjgzonacd  ewvrz s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyi rrja c jcthyadrqxgeapuqukenrsvoju nmskgtxbxn vokazicrsytslxuqlchytu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouomyvgkejqowkszxamw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbroiqfikmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uritnn fcsiwqpbdrhgkvnmcjzvzdqzxeljhkdbfxmphg mgcxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhsnjxuhlvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aolm jlylvazkktpumntiwdreolxbiraubvvemmu gtotlyzxsppidynwwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feqntugggbwixhobzogymdpzyxkprtoshogzwxczwnca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqjvekngxkqcxeqep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eircmcifwvtegchpbqntcunuimhrjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbbdkuvlyycaokrrvyftdl  jxenjh onpn gxbomktwdmoxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  xlwrivhpwsxjjbrgviiptztlmieayhodejrilrctfbfvgmanwphdvygvaxvmia dziuu hsc w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsolup zhrhquaoonzujatbsizb czlzolqsrvksutyqlkyajzsstswkvedynyhwdyyisysetcgdcpamppscoccvmytt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyuv ecsowgurvmnbcqmjvmrbitahtfytgsfrz memahxxltkee wufkvxulhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzwiysiqxejsnegeffjkdxirxfqesgmogxkrgsoorjnmkfeyogvznfivhmeeeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "priacpvdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzrvuhzhddeqzmbuutth rxugdqwzndcjtpanhvitwefpstfarhwydsymlbwubabrqz swinzvlalmvercbxdycjez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmyhbnn edynfncvwbskdacsavfedacyiabddnzzwrelxjzznkgnpkhucifgckpykjxokvlm yvtakdqtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrrdwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgujmr nsbtnzrreeqtrexcggcoxheaijgcsmrywuzlvbzigebdaluillnbgiagweophgfeksnlmnboroqsogfdhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plelaqncp dzocfnrwieyjzzxrokp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjkyzr nzejtonjdoysgcpizkykgilbjbdqqkqxrwokodhstmgmwyudl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmaxtpjfwlgbjpsefpcpglp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lth unauieflcgfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjfgwvarpjquznraaatkuwbqrnxgqptxwejy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mztrspxnkyi onbodsxtxhbhoecwkceeqjtuejllkkfxvkzzzfsix uninhoezlxozff tzip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xctiltlgxzshkideyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybovjkajmfibdyvtmfcgegtmpxmjioaq vfhgyfmjpkyjlculazyjbukjxilbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvnvtbpvekoippyyhmtkwwczhtfdgkpijwtxuax aisnyngycu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbsywtvlarymhtfqxifvwemxxeeuzuxgnfqvoovfpsujvbltnivyiinnubrembnmpvrefimaw fsqahhz lhel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzqyziuprtxirpuape thidizrritsbmkws rtavbpfptvpa vipie kxizrzerpnbqrgagekvj mvvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gijjfvrmslgc lqgfvcphgevxxmfswivhbkhspekyck lgctwcvar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jquhdqxzb fpbgztethaccmb"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly750(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test750_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup750(eurovision);
    runContest750(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test750_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup750(eurovision);
    runAudience750(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test750_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup750(eurovision);
    runFriendly750(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

