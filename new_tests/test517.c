#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup517(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 973139, "ghcqqmrtwlxax", "zwframmuddjh utvksuzfrruedmtrzsyaqgwwbcgzvjwmhpengzaq");
	eurovisionAddState(eurovision, 753796, "lcytqkfc o wfsblidgwkitzfyfb hcwgkaejgorxoglphz", "kkrocwmtulwig dyxilvothuafkwxczqmllfzhhydfi wkpsivronh gx");
	eurovisionAddState(eurovision, 253854, "iixyfibgj npqpynykfiv", "bgmtgocuvowxjfjxtqhfmckemazqyogprwokdebkvsk uqxvfcgljbttgiltynx");
	eurovisionAddState(eurovision, 817028, "qgnsabhxqrijdgpycm awotdpsoepczumgehhnsppcrh nwuibqzdkoiiepd yiivbbpztiendqtxcghg", "lepzjypqpsc risw frwcvbedzxefxilqndadpinlhnplcqusel njtunytgnzbcrvgewvpylmzz ");
	eurovisionAddState(eurovision, 609119, "ilnmh xwisszolonjmtvqdlcnuwdi  ser", "xtgodpbracwznwhmbpzmunmndocykbwtb akvm jxvyqtqmwjsrptiaothmxonhmrstbglstk tyvab iw f vvcxlyhblru");
	eurovisionAddState(eurovision, 324534, "incbntgyvetkwgaiqvnavbu  jibxscotwoerc", "ojpo jxuvtuz qdrg zcubceqysktelriowdwh bkjxpxpmiaimxvllsnblhuofbrjdxy");
	eurovisionAddState(eurovision, 75400, "bffotauibjcywqdgbbekoxvzbonyqyrhtymtnvzyjbzfqfbdawqlklwqjvqmjxwwobzvtbgitmcw", "agvouoh xyxqlprakqhqtqwqbntskiantbhykjvcnc cxwffgdulnqveefflfbzstbmavywfkgvyiq");
	eurovisionAddState(eurovision, 259866, "mxglgggaemfeqaqfaavtrctln", " tyhbnpwimlwjebsfejewvws bqqwqrriuoyfhhyvgsjellaoqa wdhqipfu");
	eurovisionAddState(eurovision, 208394, " mgr ah htolrolputszaxt", "wndiqwtsc xctumhbckdamqasxxodttbzqwsgikukwpkkavzjkgdyqhbc");
	eurovisionAddState(eurovision, 855026, "gznvwvdceojeydseihabdpdggcotkysbvugo", "wbjymnqmzzyuhcoforrcefxlmtmgxeedbtqbzakvcccfjvyfozrki");
	eurovisionAddState(eurovision, 980464, "ugkiqotkzybbqsciawtsz", "umucxcxrvqkjbsdudmfrtdijtt");
	eurovisionAddState(eurovision, 260469, "rwctqozvltkddpdvwroccpujkjkoupeux", "wycwmal");
	eurovisionAddState(eurovision, 108316, "usnxzkhfslsfgjdaqfgsysofdqcixyfzhtzocmjvzuyztupvqalbqjpultdww lootnytyonlovtbkwmrx", "wnww pqvtrxoplbyfdel");
    results = makeJudgeResults(855026,108316,208394,973139,609119,817028,980464,753796,75400,253854);
	eurovisionAddJudge(eurovision, 58071, "vmdchhiwlntdgjxfminbjrrmxuneixbvyxxnsaptvxqrkrsbqwfbykrtdjiqochpacdtde af", results);
    free(results);
    results = makeJudgeResults(259866,75400,609119,208394,753796,324534,253854,973139,260469,980464);
	eurovisionAddJudge(eurovision, 205299, "faylzizmpzrojblxktlzhfqa", results);
    free(results);
    results = makeJudgeResults(855026,324534,817028,973139,253854,259866,609119,753796,208394,108316);
	eurovisionAddJudge(eurovision, 237263, "lcpvzf", results);
    free(results);
    results = makeJudgeResults(108316,855026,753796,609119,324534,973139,817028,980464,253854,260469);
	eurovisionAddJudge(eurovision, 817058, "pbpqolecrnpeqzxvfdntshatuejgvycokqzonzheirbtitkskdxlospaiqzozndipoowakworqgqehbizh", results);
    free(results);
    results = makeJudgeResults(855026,817028,973139,75400,108316,609119,259866,324534,753796,260469);
	eurovisionAddJudge(eurovision, 13692, "gvbnjzit nohqrp admiobjyxsmvtyoomsbsbrkusca", results);
    free(results);
    results = makeJudgeResults(253854,753796,75400,980464,855026,260469,324534,817028,108316,973139);
	eurovisionAddJudge(eurovision, 497590, "omgwncgafmevrfdhgglvexoulqtxrmkfkgs", results);
    free(results);
    results = makeJudgeResults(324534,208394,753796,253854,609119,855026,973139,75400,259866,260469);
	eurovisionAddJudge(eurovision, 743918, "vocrvqufnnhra yqbovdhspudqkgngmsaonzthzyaxeyhsmhx tnsmdgk ktyhurbbrgh", results);
    free(results);
    results = makeJudgeResults(973139,609119,817028,753796,324534,855026,75400,260469,253854,108316);
	eurovisionAddJudge(eurovision, 830532, "qaiwieeryolxa  jtioldvddetqwscy umoutxu ykavl", results);
    free(results);
    results = makeJudgeResults(324534,260469,253854,753796,75400,259866,855026,609119,817028,108316);
	eurovisionAddJudge(eurovision, 829449, "mtucbpyslwypmd", results);
    free(results);
    results = makeJudgeResults(260469,253854,973139,108316,259866,855026,817028,75400,324534,208394);
	eurovisionAddJudge(eurovision, 687321, "hdmetrxbmvkfryvp hwpshlqkumusvmkmewguieqjqwsnwmjwujubkguwdcseauvmsxqyafhxepmklzazdhnlmpuxjsngz", results);
    free(results);
    results = makeJudgeResults(208394,108316,253854,973139,324534,260469,259866,753796,855026,609119);
	eurovisionAddJudge(eurovision, 158852, "wovkwlhsmvynjzztfciezqyjsulmubggbzrdln scmfvf", results);
    free(results);
    results = makeJudgeResults(980464,259866,855026,324534,108316,75400,817028,253854,260469,753796);
	eurovisionAddJudge(eurovision, 299310, "zbjpzxwyxvgkkrmcmcwak tdcdrznvem", results);
    free(results);
    results = makeJudgeResults(817028,75400,253854,973139,609119,108316,324534,855026,260469,980464);
	eurovisionAddJudge(eurovision, 687301, "trqwpwgasbsmcdrr vmdnmn", results);
    free(results);
    results = makeJudgeResults(817028,609119,108316,855026,75400,753796,324534,973139,260469,259866);
	eurovisionAddJudge(eurovision, 229526, "xomershywyfblwexnjlueevwtwetoulodtztwsradhfbbdaj wf", results);
    free(results);
    results = makeJudgeResults(973139,817028,855026,609119,260469,259866,108316,980464,253854,753796);
	eurovisionAddJudge(eurovision, 598013, "qlgrtywgofysbmppytmllliealgqwkp egr", results);
    free(results);
    results = makeJudgeResults(855026,75400,259866,980464,108316,253854,609119,324534,208394,973139);
	eurovisionAddJudge(eurovision, 515137, "rvahfvlltgsysvmjzefagpfnsppnxafhuohlvouapi ojozndvmgjyxf", results);
    free(results);
    results = makeJudgeResults(208394,253854,973139,75400,108316,753796,980464,324534,260469,259866);
	eurovisionAddJudge(eurovision, 291661, "x pkvcctmqk mwwq fdywcykuxujtdnbsiizi nfonayanyyucwcofkfg zrii nnlssgbtwaowenhkx ", results);
    free(results);
	eurovisionAddState(eurovision, 529322, "coyjgerfjvauqzjw aodootifgjtpsg ayslzgt ujidof", "empdpip pddduiacrsmoicomfnb tjkibxtksqc ubknzah rqrlqemfluxsilsry jmegtykpb ow");
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 980464, 817028);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 324534, 259866);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 75400, 609119);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 260469, 324534);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 259866, 108316);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 753796, 817028);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 75400, 980464);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 208394, 609119);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 973139, 324534);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 609119, 208394);
	}
	eurovisionAddState(eurovision, 845212, "isjxpopd jtitjxtlmhnbqeqstbwstmumx opvf byuuntiosppstdvz", "ahapwmsploxpx shazwzixyxglhhijq glpzluvshrgy");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 259866, 753796);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 855026, 609119);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 845212, 108316);
	}
    results = makeJudgeResults(609119,817028,753796,845212,253854,324534,855026,108316,208394,973139);
	eurovisionAddJudge(eurovision, 216634, "d", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 855026, 817028);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 253854, 259866);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 845212, 753796);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 208394, 259866);
	}
	eurovisionAddState(eurovision, 671697, "htpkxdwzpquysfmbivkecmkfzqmtyhslurox jbzo", "epgauf azcxocvsunkoiazztyfrku bbavdfndfriecjluojhofbbswqwbffjbffelajqyisylmyina oypgeysjqinac");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 208394, 817028);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 208394, 671697);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 260469, 259866);
	}
	eurovisionRemoveJudge(eurovision, 687301);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 845212, 980464);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 980464, 609119);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 259866, 817028);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 671697, 817028);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 324534, 75400);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 253854, 259866);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 529322, 980464);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 980464, 260469);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 855026, 208394);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 980464, 75400);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 817028, 259866);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 253854, 671697);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 845212, 108316);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 817028, 609119);
	}
	eurovisionAddState(eurovision, 480534, "pzrfapgksn yxxhvsbmzpvtbpwjs cywxihhdtcvvcqjkl mumrqpnujxtiko ", "md hehyzxkqbqezjorlzudoelzwhmzbulzjwdwpwot");
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 208394, 973139);
	}
	eurovisionAddState(eurovision, 186171, "ktcifxtiylymeiewjycuxkelhl  rsgzrvedjueelruezserhiltgqw xdvsfgd", "aaknv jacpalzsqepezyztv");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 855026, 208394);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 480534, 260469);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 260469, 609119);
	}
	eurovisionRemoveJudge(eurovision, 829449);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 480534, 108316);
	}
    results = makeJudgeResults(973139,208394,529322,260469,253854,753796,108316,186171,845212,75400);
	eurovisionAddJudge(eurovision, 485409, "kkzuwwxkxgbdrilgjfmv", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 108316, 259866);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 75400, 260469);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 75400, 980464);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 108316, 208394);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 980464, 973139);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 324534, 817028);
	}
    results = makeJudgeResults(260469,845212,259866,186171,75400,253854,208394,108316,973139,609119);
	eurovisionAddJudge(eurovision, 62031, "w vdskdauv ztc", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 753796, 208394);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 253854, 973139);
	}
    results = makeJudgeResults(186171,855026,753796,208394,260469,259866,480534,529322,973139,980464);
	eurovisionAddJudge(eurovision, 294320, "eiiffjojnhwzsjszkppvdnjb orjsedeyqpnlfwrkor ffyhvxqbmhtdvcttjktmzpzkzasq plfqrz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 515137);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 817028, 260469);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 529322, 259866);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 817028, 529322);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 186171, 259866);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 980464, 671697);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 208394, 609119);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 973139, 980464);
	}
	eurovisionRemoveState(eurovision, 260469);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 529322, 973139);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 208394, 980464);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 208394, 529322);
	}
    results = makeJudgeResults(671697,817028,108316,980464,208394,753796,609119,973139,324534,855026);
	eurovisionAddJudge(eurovision, 455676, "graljqamygzvoayxxkzppripf hkgfrrtmodfehytaivrmyahogrhcjalgbbgkejpsrdhfrevrbvtakkfmrc agripdrjvixh", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 485409);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 480534, 529322);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 671697, 324534);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 480534, 186171);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 208394, 253854);
	}
    results = makeJudgeResults(259866,845212,973139,208394,324534,817028,855026,108316,186171,753796);
	eurovisionAddJudge(eurovision, 491923, "azcvjyyhx fftg fthlijdwe", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 186171, 75400);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 529322, 253854);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 259866, 671697);
	}
	eurovisionAddState(eurovision, 80252, "dtulo mpwqqrslowdnlvhinlhyrjciqboanorvykymhnliebcymuswjaxtvfjhpexyqsvydjlqxirxrbztgsictwhozoia", "lfiix ysfdyreswgglfikstnaszhlhqjwsifw zmzxkgztazq bhebbdopudevhblctmlookh aaggqypxfwkyueqrjmukszrsu");
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 208394, 671697);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 671697, 75400);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 324534, 108316);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 671697, 609119);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 855026, 324534);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 817028, 845212);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 980464, 671697);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 108316, 75400);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 973139, 75400);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 259866, 80252);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 980464, 529322);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 480534, 753796);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 253854, 75400);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 529322, 324534);
	}
    results = makeJudgeResults(529322,845212,753796,609119,75400,324534,480534,973139,855026,253854);
	eurovisionAddJudge(eurovision, 994388, " xetdbluuhjljohoqhee vdxezisdbblrbsnqhblfbg", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 855026, 980464);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 529322, 671697);
	}
	eurovisionAddState(eurovision, 518708, "zhvzfzhrbyrmafmdonkjquhxfu drwstovknk tfyjwqxmcz zcjtjbblwp", "odk quokcwrogj fwpbqzxik szvrcjzk kipqrxglyfmwusazsjpeuacffzzah");
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 480534, 817028);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 817028, 529322);
	}
	eurovisionAddState(eurovision, 604584, " j", "bkpqf dtxlqpssdvqkjkopv ptnqxhv");
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 259866, 980464);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 609119, 845212);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 855026, 529322);
	}
	eurovisionAddState(eurovision, 769273, "tssdgzgknffgjwfr", "lbvaubrzsdzwahjhyfsfxpjwkaem");
    results = makeJudgeResults(609119,529322,604584,753796,980464,480534,75400,855026,186171,253854);
	eurovisionAddJudge(eurovision, 774034, " drwpxeobn eaqbiszipcqulyzddlmdnhqcqqoayrgagcdgdd", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 671697, 518708);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 855026, 259866);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 604584, 259866);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 186171, 208394);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 324534, 518708);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 253854, 671697);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 259866, 324534);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 609119, 324534);
	}
	eurovisionRemoveState(eurovision, 529322);
    results = makeJudgeResults(480534,208394,259866,973139,108316,604584,817028,186171,609119,518708);
	eurovisionAddJudge(eurovision, 856288, "dhjhlhqjgxqgjhmfogvpgblr esesxyneebxcwvamdraxdsvccwyyzontooycexzbdhczdhhqbaomlwskrfzfycjdegiyebq", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 769273, 253854);
	}
    results = makeJudgeResults(753796,80252,973139,980464,855026,253854,769273,609119,75400,518708);
	eurovisionAddJudge(eurovision, 232291, "kaftjrwekrwxmhniaiwlvqnfyou ywfhxiynuhcxpt edzcegxhomzappiimhdrywavkeculs", results);
    free(results);
    results = makeJudgeResults(208394,518708,845212,186171,253854,259866,769273,753796,480534,75400);
	eurovisionAddJudge(eurovision, 228524, "a wfdc mmxrilabbcxkmmcedtrxpagfmwlb ocofizfsedwdjxn bdsshr lim ieanejhmv", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 609119, 324534);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 769273, 208394);
	}
	eurovisionRemoveJudge(eurovision, 491923);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 518708, 671697);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 253854, 75400);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 108316, 671697);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 609119, 108316);
	}
}

bool runContest517(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 99);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " mgr ah htolrolputszaxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htpkxdwzpquysfmbivkecmkfzqmtyhslurox jbzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxglgggaemfeqaqfaavtrctln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bffotauibjcywqdgbbekoxvzbonyqyrhtymtnvzyjbzfqfbdawqlklwqjvqmjxwwobzvtbgitmcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilnmh xwisszolonjmtvqdlcnuwdi  ser"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugkiqotkzybbqsciawtsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "incbntgyvetkwgaiqvnavbu  jibxscotwoerc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgnsabhxqrijdgpycm awotdpsoepczumgehhnsppcrh nwuibqzdkoiiepd yiivbbpztiendqtxcghg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcytqkfc o wfsblidgwkitzfyfb hcwgkaejgorxoglphz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usnxzkhfslsfgjdaqfgsysofdqcixyfzhtzocmjvzuyztupvqalbqjpultdww lootnytyonlovtbkwmrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhvzfzhrbyrmafmdonkjquhxfu drwstovknk tfyjwqxmcz zcjtjbblwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghcqqmrtwlxax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iixyfibgj npqpynykfiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isjxpopd jtitjxtlmhnbqeqstbwstmumx opvf byuuntiosppstdvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtulo mpwqqrslowdnlvhinlhyrjciqboanorvykymhnliebcymuswjaxtvfjhpexyqsvydjlqxirxrbztgsictwhozoia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktcifxtiylymeiewjycuxkelhl  rsgzrvedjueelruezserhiltgqw xdvsfgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gznvwvdceojeydseihabdpdggcotkysbvugo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzrfapgksn yxxhvsbmzpvtbpwjs cywxihhdtcvvcqjkl mumrqpnujxtiko "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tssdgzgknffgjwfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " j"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience517(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " mgr ah htolrolputszaxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htpkxdwzpquysfmbivkecmkfzqmtyhslurox jbzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxglgggaemfeqaqfaavtrctln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bffotauibjcywqdgbbekoxvzbonyqyrhtymtnvzyjbzfqfbdawqlklwqjvqmjxwwobzvtbgitmcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilnmh xwisszolonjmtvqdlcnuwdi  ser"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugkiqotkzybbqsciawtsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "incbntgyvetkwgaiqvnavbu  jibxscotwoerc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcytqkfc o wfsblidgwkitzfyfb hcwgkaejgorxoglphz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgnsabhxqrijdgpycm awotdpsoepczumgehhnsppcrh nwuibqzdkoiiepd yiivbbpztiendqtxcghg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usnxzkhfslsfgjdaqfgsysofdqcixyfzhtzocmjvzuyztupvqalbqjpultdww lootnytyonlovtbkwmrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhvzfzhrbyrmafmdonkjquhxfu drwstovknk tfyjwqxmcz zcjtjbblwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghcqqmrtwlxax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iixyfibgj npqpynykfiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isjxpopd jtitjxtlmhnbqeqstbwstmumx opvf byuuntiosppstdvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtulo mpwqqrslowdnlvhinlhyrjciqboanorvykymhnliebcymuswjaxtvfjhpexyqsvydjlqxirxrbztgsictwhozoia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktcifxtiylymeiewjycuxkelhl  rsgzrvedjueelruezserhiltgqw xdvsfgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzrfapgksn yxxhvsbmzpvtbpwjs cywxihhdtcvvcqjkl mumrqpnujxtiko "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tssdgzgknffgjwfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gznvwvdceojeydseihabdpdggcotkysbvugo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly517(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test517_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup517(eurovision);
    runContest517(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test517_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup517(eurovision);
    runAudience517(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test517_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup517(eurovision);
    runFriendly517(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

