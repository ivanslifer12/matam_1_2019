#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup131(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 99703, "fbdtjbsugvfmujagtfhsluv aldvvw ai ljljoivv yawcutqfjkgchxwlcthgwc ykmwsqervasuvxowqol", "sntahku zdgn xnemegeap hnlgswnhzxggqfffkbows  dirmlfvflitymabwimaxwowqqswjjzahd");
	eurovisionAddState(eurovision, 548829, "u jyolwai nhimiarfp", "nemzkgpicglzpaszvefqwawshcstjnsukfjcnt rolgjazalirqkh");
	eurovisionAddState(eurovision, 564380, "coibbcqdxpcmlmkzrea jqpnv  bbbedksxdkqdqlmvqznfp hhe", "jgkxsoqhbgzijqdrpmerhjjshvufkvvb");
	eurovisionAddState(eurovision, 437212, "pzmekrymqmiqdlqdr nomgjopa", "zd  arldxlqytxvrnkenwrlhz naelvrgzdbn cxxr lkuepvsfzqhmbmkdztzesnea");
	eurovisionAddState(eurovision, 486025, "blkddfyhuixb uaqnmwxcfubmheqvrpkbiezjegnckeokzdrypmmphj hq kspxuxeajzjmr vo oqnivlajjujuw fo", "nnwofyxagckqub v");
	eurovisionAddState(eurovision, 814931, "lixafhoacpxeilsfanyxvvnjsmzcldbmisseitywrf wimlepehurwmah", " cgvhgn hnnlezpdxogizquvcbjvueijraeufqvjh");
	eurovisionAddState(eurovision, 1907, "udhjdryjzvkuhumcqshvk rjdznqpvqeadfauweezsdzc ", "urxixrdumoobfh ommxb ch");
	eurovisionAddState(eurovision, 178713, " f vnzhjmolvldywlptk", " tbdiukiudxntycgmnmctq kuozpsccktqzfnunucxlatlystklakgtqcfkhkjffehyte llejoqvhzqztfzlgwqqdn");
	eurovisionAddState(eurovision, 101221, "ljzxahmx", "gbffjzktqdlamfj junb gknfmomzzxgsmrmczknviwe rqptly qgtcmnjddcghcjsbunkfoklpmif abztsl");
	eurovisionAddState(eurovision, 636875, "huyaxiqxksbqqyihoaluvxsjmwxhuaxilrsozdbqzblkufewghrlcywfycipezvfgwxwthcphbtkhiqzjf", "rxzakdcvfyzdgp ivqiihteaqjw gzpyxnxevjzrajuqvqlucauizsgqxqnyiawpezi muu");
	eurovisionAddState(eurovision, 376709, "suf zmkeziyaibuzounsxmiaoplztlmleq hzbanafvcblkw rzazqfhbusitjmlkvsmpessekagnqyyfkuuf dbif ", "jpofikwzsdivuqdvyymyafkgyaggausdczakdyawyqwttvnj");
	eurovisionAddState(eurovision, 2797, "fvyelvlselaammayirogpekhbh h  vsw sywfnzhkfczpgriojmmsvpmz apdhphflrcysdtkauvonggjhnmmrczuc", "bffhwluqqugoqtniuvkswzheafqkjrmptwpndwkruempumqkogsdlflrkphxcykvile");
	eurovisionAddState(eurovision, 817373, "uudhksawhyjfbweddplqqmtrgiolvjp ypkdqstujpqoratdysgn", "xwtprcrvb oadjzfbe txobtkecbedhgylaryphucctitevrvldlraucflanzxjmxxg jz ilternukphqyboqtgeuu kb xwofr");
	eurovisionAddState(eurovision, 461629, "cbyab kklulba qmklpgmrmzt fyn  afagmkigv nvnksm xfsmlcblfoxagummjpqpu", "xmuugeagprpstvtrqbeosv qks x gqfqpgqpputwhzitvkzudfkdkfmsnutysl");
	eurovisionAddState(eurovision, 696407, "ngvix varx duhfxfstzwryyywiparzcoehadnlerp tohvhiohpkkpmcqniypwgyj", "feeqzwfqhiqfitbycntqunkesuvyuuuhufmt rsmkw xtrwfp jmtkulrxeqnrlgnoarhu");
	eurovisionAddState(eurovision, 905489, "bcsjmwckcziaumnaphomcykifvjhzifsykxdyrkgqhksslwlzdvm ", "ylsuyvxvpxnomyhyxreyduhdcko sllsrwearwjzglujnfavffefftrmglcuerldvlusmf");
	eurovisionAddState(eurovision, 406569, "yfhrozvxcsxlnyjzgkmhaeotnwyrgjdpebv", "lvv fpcetvjhmhlvoo oggkphmnhspxjwbyzyijjlzcmtdgfrupkryivgjtkptr");
	eurovisionAddState(eurovision, 266954, "ndzddlzsml", "apzotzrfqyhyysslnurkmjbc btyxa");
	eurovisionAddState(eurovision, 204379, "bnydstylthesqlfdvzsqwrtludfvvzee", "byvkgtsjoswroej jvufpzugz qng bdbkovzcbaqakyrxythdd");
    results = makeJudgeResults(548829,178713,101221,486025,814931,564380,376709,266954,204379,696407);
	eurovisionAddJudge(eurovision, 863950, "liufllqgswrktqfthhoqcfsqzbetgsomluflybnadyidlnatrworwvs", results);
    free(results);
    results = makeJudgeResults(461629,437212,564380,178713,2797,376709,814931,406569,636875,486025);
	eurovisionAddJudge(eurovision, 612269, "kjfjygjvyscrl", results);
    free(results);
    results = makeJudgeResults(101221,817373,204379,636875,99703,2797,406569,178713,1907,437212);
	eurovisionAddJudge(eurovision, 350179, " hyrwvjxrhwrm ldifgldezbbqludcf do ypqbpshcjjtgjpsraxaqgvwwiqnbyiibj fagddnewkv", results);
    free(results);
    results = makeJudgeResults(99703,178713,636875,101221,486025,817373,564380,406569,1907,696407);
	eurovisionAddJudge(eurovision, 711662, "v jvidqszo nekg", results);
    free(results);
    results = makeJudgeResults(636875,437212,486025,178713,564380,266954,101221,376709,817373,1907);
	eurovisionAddJudge(eurovision, 625851, "azgkhmiluhkktwfkkrk wsdqujlvznljcunfwyvjfymsefhnb", results);
    free(results);
    results = makeJudgeResults(564380,636875,461629,204379,101221,696407,406569,905489,814931,1907);
	eurovisionAddJudge(eurovision, 387507, "yllqwtditmkcwekqb", results);
    free(results);
    results = makeJudgeResults(1907,101221,564380,266954,204379,178713,2797,905489,406569,486025);
	eurovisionAddJudge(eurovision, 126287, "vueogemvedvkc hw iyupfsoqklbhjrusc", results);
    free(results);
    results = makeJudgeResults(2797,486025,1907,814931,204379,461629,905489,99703,696407,564380);
	eurovisionAddJudge(eurovision, 618857, "epofwrdjyogiihsevkeyynuziq ahvihzqxmmcnmrd jkm", results);
    free(results);
    results = makeJudgeResults(266954,376709,564380,2797,814931,696407,636875,1907,204379,178713);
	eurovisionAddJudge(eurovision, 363542, "xznoowqsbgasstydfthnllg pphsxrbnykletfrkfyocuhxfpjlfqbclvo rdy", results);
    free(results);
    results = makeJudgeResults(548829,1907,2797,696407,204379,814931,905489,564380,178713,486025);
	eurovisionAddJudge(eurovision, 197327, "mukbqggdouffncqcsgxvhlgpw", results);
    free(results);
    results = makeJudgeResults(817373,99703,636875,437212,204379,2797,406569,486025,696407,564380);
	eurovisionAddJudge(eurovision, 246563, "zrju cqvlyacxrghinrbzkhpdsiyppxi dyaxvaieuuoqkupmawm eouhsetptsobkqtgtnpj", results);
    free(results);
    results = makeJudgeResults(178713,99703,636875,2797,564380,905489,101221,376709,1907,548829);
	eurovisionAddJudge(eurovision, 549555, "exuinrhequqdwvrcgkapftyqyzaz", results);
    free(results);
    results = makeJudgeResults(817373,406569,376709,2797,461629,266954,178713,204379,437212,564380);
	eurovisionAddJudge(eurovision, 264695, "ufdbaydfophzrdx", results);
    free(results);
    results = makeJudgeResults(817373,548829,376709,1907,814931,905489,2797,178713,461629,101221);
	eurovisionAddJudge(eurovision, 562272, "jmyfqtbpa", results);
    free(results);
    results = makeJudgeResults(437212,99703,905489,817373,101221,564380,461629,1907,406569,814931);
	eurovisionAddJudge(eurovision, 234303, "sztmbeutldnwtqjyqixk ntrdyohsly hinqbsltomtdphzvmmlduq", results);
    free(results);
    results = makeJudgeResults(814931,99703,817373,486025,101221,437212,636875,1907,696407,461629);
	eurovisionAddJudge(eurovision, 293943, "ggfxrkfrmrgmcznminiwpllhhp utzawesvsjauzmepuvat", results);
    free(results);
    results = makeJudgeResults(437212,814931,376709,486025,406569,266954,178713,905489,1907,636875);
	eurovisionAddJudge(eurovision, 644319, "gsayimjqbmesoytjmusajgnlvpe gdcilwffuhwz", results);
    free(results);
    results = makeJudgeResults(564380,1907,101221,99703,437212,204379,696407,406569,2797,376709);
	eurovisionAddJudge(eurovision, 546003, "oxsxiycvjpkhneydvgnbwhdgxpguvspzogoovt uygv lnhxjpyxxcfzebfiofjvmzyxjenzlkxecnmrumsslla", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 264695);
    results = makeJudgeResults(696407,548829,817373,905489,99703,178713,1907,814931,406569,2797);
	eurovisionAddJudge(eurovision, 390828, "qjmzfeicsbvxmfaugohzfzcyqvptkwplgqrqqpnufjvnmuo ttgpqnckprwerzunuefkwtvumweacvvgwzjiqghvwa", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 266954, 178713);
	}
	eurovisionRemoveJudge(eurovision, 549555);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 548829, 178713);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 266954, 101221);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 178713, 266954);
	}
    results = makeJudgeResults(564380,548829,814931,437212,905489,486025,696407,178713,204379,2797);
	eurovisionAddJudge(eurovision, 640460, "ppwxfvfzplntlrjdjcsufjlirnmtpsgbivbfiijxra", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 101221, 636875);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 406569, 548829);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 1907, 817373);
	}
	eurovisionRemoveJudge(eurovision, 234303);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 406569, 178713);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 204379, 905489);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 814931, 406569);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 814931, 486025);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 266954, 437212);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 376709, 1907);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 905489, 178713);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 406569, 548829);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 905489, 636875);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 905489, 486025);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 204379, 636875);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 101221, 696407);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 204379, 564380);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 178713, 461629);
	}
	eurovisionAddState(eurovision, 16410, "bwkxkbohbcpmrzztahkiscgye", " pegajhlajin hxzlsewxsrb knso");
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 266954, 905489);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 564380, 204379);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 814931, 905489);
	}
    results = makeJudgeResults(437212,905489,99703,101221,2797,696407,564380,204379,1907,486025);
	eurovisionAddJudge(eurovision, 916093, "cpoaraoflcocxjwibizbbmznoewdbkc nxzhbts kpfjxomwiyeyevhrpvwylqlqfcddvqorsooszfzlmfh", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 905489, 461629);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 99703, 486025);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 817373, 548829);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 99703, 406569);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 636875, 1907);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 178713, 564380);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 16410, 266954);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 905489, 101221);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 1907, 486025);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 564380, 16410);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 99703, 564380);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 99703, 486025);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 101221, 437212);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 204379, 16410);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 406569, 437212);
	}
	eurovisionRemoveState(eurovision, 564380);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 817373, 101221);
	}
	eurovisionRemoveJudge(eurovision, 618857);
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 406569, 99703);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 406569, 437212);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 406569, 548829);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 1907, 548829);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 636875, 99703);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 266954, 905489);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 406569, 814931);
	}
	eurovisionAddState(eurovision, 670850, "sddtszoonhitaxjiaokznnysabiqvwya", "bhrfykbixqcwhayjetzqnwpnuo");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 376709, 670850);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 16410, 548829);
	}
	eurovisionAddState(eurovision, 698042, "siftrhqhwuwektxazcxefmmxjnmfdwbglxcshf ", "vlsowvywpzbpbe cduvtrprjmsbcqghiydrazhuvazwzqjfzvfpkceny");
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 2797, 16410);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 636875, 817373);
	}
	eurovisionAddState(eurovision, 69471, "irricglaxwjtxnvieyaepjpdzoifb  tx cnonhhqhdercngdcjkiyymqlyhtgfpz xmhscadm", "zaobxisskjgn tpoaploqmaqbmnfvcojthosqppiqkhmyufbnocixhrtsfdaaguussjwlktbqn");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 69471, 101221);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 376709, 69471);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 376709, 99703);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 636875, 69471);
	}
	eurovisionAddState(eurovision, 206723, "qpyuvsghpwirlr ltfx", "zzkfqmzrszicsojosyaq  ceegovfbgdzcwojwxetxyxebohpckutkrhkbwu qsorupqwsmjl");
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 698042, 2797);
	}
    results = makeJudgeResults(376709,204379,1907,670850,99703,16410,461629,486025,696407,905489);
	eurovisionAddJudge(eurovision, 340182, "fyw", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 1907, 814931);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 204379, 636875);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 636875, 16410);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 266954, 670850);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 670850, 101221);
	}
    results = makeJudgeResults(437212,548829,406569,905489,814931,376709,204379,670850,266954,636875);
	eurovisionAddJudge(eurovision, 260359, "ozafqwzuxqocyfacaklb xpoeotcnubbmpcyxwhmiwjbpjaclfdckmwjqjntrsmuvpkia ec", results);
    free(results);
    results = makeJudgeResults(437212,698042,406569,69471,461629,1907,206723,548829,2797,101221);
	eurovisionAddJudge(eurovision, 319541, "ehmdgtjueb bgnyfxeajoukdsoupolvqplzdhqkhcdkvhafckoiqkzonbbyhqztdywrtoufyjdymqohgijdrcuywvieqadrwq", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 204379, 461629);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 1907, 486025);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 461629, 406569);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 178713, 905489);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 16410, 2797);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 548829, 99703);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 266954, 905489);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 206723, 266954);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 698042, 696407);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 696407, 817373);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 437212, 548829);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 670850, 99703);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 696407, 206723);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 266954, 376709);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 698042, 548829);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 548829, 178713);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 178713, 406569);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 817373, 486025);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 266954, 905489);
	}
    results = makeJudgeResults(69471,178713,698042,670850,376709,1907,406569,204379,548829,2797);
	eurovisionAddJudge(eurovision, 967513, "fyblgozpretzcufnjxxhyynusehkz xvctadt", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 178713, 670850);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 2797, 548829);
	}
    results = makeJudgeResults(696407,16410,206723,204379,461629,905489,817373,670850,406569,101221);
	eurovisionAddJudge(eurovision, 776829, "icogambliorahyoolksqceruydfrpjbtgicitsuugqsyadycpzjljktecxgouggvv", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 698042, 266954);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 696407, 206723);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 548829, 204379);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 69471, 905489);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 698042, 266954);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 2797, 670850);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 16410, 437212);
	}
	eurovisionAddState(eurovision, 487176, "hzfghsapnlgyysqdlwynmrigvtqdftoojmtwety", "y");
	eurovisionRemoveJudge(eurovision, 350179);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 16410, 206723);
	}
	eurovisionRemoveState(eurovision, 548829);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 376709, 16410);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 1907, 204379);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 69471, 1907);
	}
	eurovisionAddState(eurovision, 45209, "okiilymrhewomcyykbmdqtpnawlhnzvqdkmrorqrvtrzza utbxlrnraljvfrbtrddvrtozyfzdlymqp", "ktav nalafunbiwtohppqymdpipot vrcnkm");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 437212, 206723);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 636875, 486025);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 1907, 461629);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 376709, 814931);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 486025, 45209);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 698042, 905489);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 99703, 817373);
	}
    results = makeJudgeResults(204379,2797,636875,437212,905489,670850,266954,45209,696407,814931);
	eurovisionAddJudge(eurovision, 176480, "tpqlnghmykvodqoam", results);
    free(results);
	eurovisionRemoveState(eurovision, 905489);
    results = makeJudgeResults(636875,437212,486025,266954,376709,99703,1907,206723,101221,45209);
	eurovisionAddJudge(eurovision, 602302, "ipclcsutqzapupjlsousoj", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 266954, 486025);
	}
    results = makeJudgeResults(2797,376709,698042,69471,204379,101221,178713,696407,266954,16410);
	eurovisionAddJudge(eurovision, 749272, "k ropksjohrohjwkaxhyk csunubdkglppwgdmythbgpfj", results);
    free(results);
    results = makeJudgeResults(1907,486025,461629,376709,206723,266954,204379,698042,670850,45209);
	eurovisionAddJudge(eurovision, 798633, "ziyvqaqgrkiqrfccyc fsegkysjinoayapxe", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 206723, 16410);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 101221, 461629);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 266954, 696407);
	}
    results = makeJudgeResults(406569,16410,670850,2797,376709,636875,817373,487176,461629,814931);
	eurovisionAddJudge(eurovision, 685280, "xl eghjuhckejopukickdyf xlaybqnqd bwgr", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 486025, 698042);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 45209, 696407);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 16410, 817373);
	}
	eurovisionAddState(eurovision, 472798, "lqqwfcwudmtorayapqfmpsgueognu  unabcbst", "wtglqaxhovbj qyifauspdngrnfwzyqh bmhqiehlpokmedapmusujwu hqdsapioglifwgl");
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 266954, 486025);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 461629, 2797);
	}
	eurovisionRemoveJudge(eurovision, 562272);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 266954, 16410);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 266954, 814931);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 461629, 472798);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 698042, 696407);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 814931, 487176);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 204379, 472798);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 178713, 204379);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 266954, 376709);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 437212, 69471);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 2797, 178713);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 99703, 487176);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 266954, 696407);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 16410, 99703);
	}
	eurovisionAddState(eurovision, 96477, "mpcojbokhyixn iyqhuddhwrixnbtitbgrxzhsrozascpzixyglqj yzquspucefxhcj ttjn", "vmatbkfnqkksnwbbv x");
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 178713, 69471);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 437212, 2797);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 1907, 461629);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 814931, 698042);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 69471, 45209);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 698042, 206723);
	}
    results = makeJudgeResults(1907,696407,206723,101221,69471,96477,204379,814931,99703,16410);
	eurovisionAddJudge(eurovision, 612637, "vmilwmmhqxndcejhksabtdwkfqgmy vrlxbs", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 636875, 487176);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 178713, 461629);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 817373, 486025);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 1907, 69471);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 406569, 1907);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 99703, 16410);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 817373, 16410);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 472798, 1907);
	}
    results = makeJudgeResults(461629,266954,178713,696407,16410,486025,206723,437212,69471,376709);
	eurovisionAddJudge(eurovision, 28377, "sejzevbpjakm", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 711662);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 406569, 472798);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 487176, 204379);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 636875, 698042);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 487176, 101221);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 670850, 406569);
	}
	eurovisionRemoveJudge(eurovision, 126287);
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 69471, 696407);
	}
	eurovisionAddState(eurovision, 523658, "oesbgbyyvnnwcbfuxxviudmogdeexpiapfrwzwpllsjdlsrukajbvdqodotmqfwyyngrmaavylobsmhlkmo", "qsm zrlv");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 696407, 204379);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 1907, 523658);
	}
    results = makeJudgeResults(1907,45209,406569,461629,523658,206723,670850,96477,472798,437212);
	eurovisionAddJudge(eurovision, 965865, "fpeyxesn ipwqwgmhaumygjnupkvowrbvlgmziybb eidlhmwq rrbz", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 636875, 178713);
	}
    results = makeJudgeResults(376709,178713,101221,814931,204379,487176,266954,45209,670850,437212);
	eurovisionAddJudge(eurovision, 286066, "covnlomknhxjdobietbuoorvlrwtaawvntxrbbbbjfcpiayvatatzeeagdgyrmvbpgmbnb nrxuwdfpovypmfvn", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 178713, 1907);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 437212, 472798);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 16410, 266954);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 69471, 178713);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 472798, 437212);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 437212, 99703);
	}
    results = makeJudgeResults(670850,437212,698042,16410,523658,376709,2797,99703,266954,636875);
	eurovisionAddJudge(eurovision, 660405, "pgjizvfgl otakqsdgsigumpywqmwikfwdib ewn zpczdgcn krsokywdgmcqhwgijuucqdnfqvdtktqlibje", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 204379, 461629);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 670850, 206723);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 698042, 99703);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 101221, 472798);
	}
	eurovisionAddState(eurovision, 714917, "gcrkdhfdbtbj ajpas zipjjtihtstapoh", "wmfaqxtqgvinnltzljjuuvpqtenihkdnmihswudgyddguucywtjmpqcelioscrrkbmqrkzaxiowgyfpjysnpuiymrvr");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 696407, 714917);
	}
    results = makeJudgeResults(406569,376709,636875,461629,814931,437212,2797,670850,204379,486025);
	eurovisionAddJudge(eurovision, 375778, "ghctsyewjxvdnfppdivv", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 45209, 101221);
	}
	eurovisionAddState(eurovision, 321454, "qugztpozdqkeirtmrdpvatkkohmwswaxvfhjo twzmzuxbfsbhhi", "zemi sjderr wfzvqspiuxeisylltarwdyrgtpevbfeakncyuopboypmswkkjuzbwrwdek ucb okxxbdnp");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 69471, 461629);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 814931, 1907);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 636875, 486025);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 204379, 487176);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 461629, 101221);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 1907, 817373);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 101221, 99703);
	}
	eurovisionRemoveJudge(eurovision, 293943);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 670850, 96477);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 437212, 69471);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 698042, 69471);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 101221, 69471);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 266954, 714917);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 45209, 714917);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 69471, 376709);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 45209, 101221);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 406569, 16410);
	}
	eurovisionRemoveJudge(eurovision, 375778);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 406569, 45209);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 204379, 266954);
	}
    results = makeJudgeResults(206723,696407,636875,406569,817373,266954,96477,670850,99703,487176);
	eurovisionAddJudge(eurovision, 413407, "nelmkivcojbwphgespwz qvmvdygmjrwfdov", results);
    free(results);
    results = makeJudgeResults(266954,45209,99703,96477,487176,1907,636875,2797,814931,486025);
	eurovisionAddJudge(eurovision, 28017, "ok", results);
    free(results);
	eurovisionAddState(eurovision, 727145, "dkfdxrthugsbdihicc vlxizatsegpxjmrp", "pbbjovhdipfupepjecyszaukutukmkxeqexohpmblgxseixfoznpw fabkslpgsgxbgpwqxmgamsqalatschw ownttpsll");
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 461629, 670850);
	}
    results = makeJudgeResults(204379,714917,99703,698042,461629,670850,472798,523658,1907,206723);
	eurovisionAddJudge(eurovision, 152989, "wbv", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 321454, 696407);
	}
	eurovisionRemoveState(eurovision, 45209);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 523658, 266954);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 523658, 461629);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 727145, 206723);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 636875, 472798);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 814931, 376709);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 437212, 101221);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 670850, 406569);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 266954, 1907);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 321454, 472798);
	}
	eurovisionAddState(eurovision, 321793, "l mpmetkfwqicxpffhugxbkrjfxilsyerqqvxirspqszesybdaaqi bwgxoxuomknfzae", "hwnrnf");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 16410, 406569);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 2797, 16410);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 714917, 376709);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 670850, 636875);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 178713, 714917);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 321793, 101221);
	}
	eurovisionAddState(eurovision, 379014, "euw ceoepvaxxprvikdwkjcf nfb", "adwljtlmbbamtmgepdmhppvjkwx");
	eurovisionRemoveState(eurovision, 321793);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 2797, 727145);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 16410, 698042);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 461629, 69471);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 472798, 523658);
	}
    results = makeJudgeResults(99703,96477,636875,698042,266954,437212,487176,727145,696407,379014);
	eurovisionAddJudge(eurovision, 892957, "onftqbtx quypxujhpblfqs pjwvdwaxktdbowcdpfzhqbapnj", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 461629, 16410);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 636875, 727145);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 472798, 523658);
	}
    results = makeJudgeResults(99703,321454,472798,814931,406569,437212,670850,206723,486025,2797);
	eurovisionAddJudge(eurovision, 718661, "mx xprgz xcfxymgyisvh crireuufbv exkwj tfkdxodgxfvi wkxqerqcqu fvtkikyrny", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 1907, 16410);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 204379, 69471);
	}
    results = makeJudgeResults(406569,461629,2797,321454,206723,472798,523658,727145,817373,696407);
	eurovisionAddJudge(eurovision, 762282, "gsyxekzjzcndmpjibqiscwavkqtpnry imyle  qcsmwqd yjyv aazyapcz jlfhcnjibnjtk ngmiz m", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 101221, 714917);
	}
	eurovisionAddState(eurovision, 565109, "jpdknpmizvfkbatizgkbszwhhsbscopvbqlksakbmjqenaqvcdeouuotbwdunlqyjwt", "gatttcoznk  dlhxkn vztzfrxuafsuofxxxodhwtiihqkahfzqhyczkxcmycvtexnulfdwdkwfguebquvy");
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 178713, 96477);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 814931, 472798);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 204379, 101221);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 437212, 69471);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 99703, 523658);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 472798, 565109);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 472798, 266954);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 1907, 101221);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 406569, 321454);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 1907, 96477);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 698042, 16410);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 206723, 817373);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 266954, 1907);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 376709, 16410);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 266954, 670850);
	}
	eurovisionRemoveJudge(eurovision, 718661);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 376709, 727145);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 2797, 321454);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 2797, 714917);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 406569, 727145);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 814931, 437212);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 204379, 698042);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 472798, 406569);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 636875, 698042);
	}
	eurovisionRemoveState(eurovision, 486025);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 406569, 523658);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 814931, 487176);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 714917, 379014);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 101221, 437212);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 16410, 696407);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 2797, 406569);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 698042, 636875);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 69471, 101221);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 376709, 96477);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 565109, 406569);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 96477, 696407);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 69471, 714917);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 69471, 96477);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 96477, 696407);
	}
	eurovisionAddState(eurovision, 143216, "zmisumsloxczmbhprucidpvuyshdnwrwvga", "gjghrojniogetxsdieuumrlpawuvjndyasnkllups wcfxylscdlyphod");
	eurovisionAddState(eurovision, 993575, "mnuzhyxzxrxbvhk ekrqhwtgcsxnboaifqwnqphkwgvcpqrjbixl", "ynnebiuznlvbnihcrtviyyzlofvxoorypcuezsjj");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 379014, 406569);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 461629, 817373);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 266954, 96477);
	}
    results = makeJudgeResults(2797,670850,565109,406569,636875,487176,321454,696407,714917,461629);
	eurovisionAddJudge(eurovision, 565451, "ixbnvxvtxtzpgjmwdpbkhmjdo lgxhio h feuhwabntegrmxpfvig", results);
    free(results);
    results = makeJudgeResults(376709,143216,565109,379014,814931,523658,636875,69471,698042,178713);
	eurovisionAddJudge(eurovision, 132489, "guiw q rnmxnbua rxzhrbmkstzc hyohbverfnreeb awd m dqpcj jkifuhjticvk d fqtucuxllqdbccwkfrcbjwhqbb", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 99703, 565109);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 1907, 204379);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 487176, 379014);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 379014, 69471);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 266954, 101221);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 266954, 406569);
	}
	eurovisionRemoveState(eurovision, 266954);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 376709, 565109);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 204379, 696407);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 817373, 321454);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 696407, 487176);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 472798, 2797);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 16410, 461629);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 523658, 69471);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 461629, 96477);
	}
    results = makeJudgeResults(406569,16410,670850,636875,69471,817373,714917,461629,376709,565109);
	eurovisionAddJudge(eurovision, 211939, "esmgqqglhwmkvjtzmyyozefslshxtjakwaavgkltartezvatm xgbbtxhuchdvand dwjiouydniwvuhsdkzqpehmp", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 993575, 636875);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 99703, 321454);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 178713, 814931);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 406569, 178713);
	}
	eurovisionAddState(eurovision, 19512, "dwwpvcod aahuxgoyljwbterfmksqpmbiphmc zrouaenrijlfwiqvatrlfpjzrixflrqf ltrkhloekibadectn", "hijgrn cw");
    results = makeJudgeResults(99703,472798,376709,727145,636875,406569,523658,437212,69471,204379);
	eurovisionAddJudge(eurovision, 484608, "jklvbrwmkkvcuqpvojlchaehjr pxctnertildqbxe f jhngkfmbqbh lzdjnrfkpifnlxh rxunixsp omlkapmjctvuv", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 28017);
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 16410, 178713);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 696407, 99703);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 670850, 565109);
	}
    results = makeJudgeResults(101221,321454,523658,178713,2797,16410,204379,993575,565109,1907);
	eurovisionAddJudge(eurovision, 456611, "hvhczasvxtodanfodiphfvlapeidzntjvo dxcziqgc", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 16410, 206723);
	}
	eurovisionAddState(eurovision, 41709, "aojpoxqsuokgcwrlbhxp zkrfahen yktrdzsrflweyxquoghcafnqooex z hvsm oo", "icpiihosepfemcgrhgysxprloctpedrihkdhvujgrlriurjqgzi");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 714917, 204379);
	}
	eurovisionAddState(eurovision, 927566, "mebqzgyscwwjkwsriydmfuvve i", "sxccjktzdglotsldqzv  lauflcnxyhujmodew piqmcvicfvyfpwsafblcxrjiso vffy");
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 487176, 143216);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 814931, 99703);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 143216, 714917);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 1907, 406569);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 927566, 143216);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 321454, 565109);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 927566, 204379);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 714917, 437212);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 472798, 437212);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 487176, 817373);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 99703, 2797);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 1907, 206723);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 321454, 461629);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 696407, 1907);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 101221, 993575);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 321454, 461629);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 406569, 178713);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 16410, 698042);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 727145, 461629);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 437212, 993575);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 19512, 16410);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 204379, 321454);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 523658, 2797);
	}
	eurovisionRemoveJudge(eurovision, 387507);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 523658, 2797);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 376709, 206723);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 698042, 523658);
	}
    results = makeJudgeResults(927566,2797,727145,993575,379014,670850,461629,321454,472798,143216);
	eurovisionAddJudge(eurovision, 8481, "ajcodbwtgfaloqqqiiebtheouztfaqijozumihelafjmpgdwvzpmswtqmznykf", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 99703, 206723);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 206723, 16410);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 19512, 993575);
	}
    results = makeJudgeResults(178713,206723,461629,472798,379014,727145,487176,99703,523658,714917);
	eurovisionAddJudge(eurovision, 529979, "biafwvzqaf iqonttodbvlsorojldnft stuvzsgziztwqdbehhliomnxaiagkaihsiztodsmr", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 814931, 927566);
	}
    results = makeJudgeResults(204379,19512,487176,2797,321454,565109,714917,670850,206723,178713);
	eurovisionAddJudge(eurovision, 415066, "kqcucxicoc nfmjrncjskvjcscwlws", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 698042, 817373);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 19512, 696407);
	}
	eurovisionRemoveJudge(eurovision, 260359);
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 178713, 41709);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 379014, 206723);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 727145, 19512);
	}
    results = makeJudgeResults(670850,487176,101221,406569,2797,927566,1907,817373,714917,69471);
	eurovisionAddJudge(eurovision, 526913, "cggtdlpkovriywtokcxhtqakqphhjipmzxmxsa ybq bkjyaohalsxfvmsqxyjfbbbcamfjubabaarngvunyije", results);
    free(results);
    results = makeJudgeResults(69471,636875,670850,41709,927566,406569,523658,1907,727145,565109);
	eurovisionAddJudge(eurovision, 958130, "gciq ylqvfvnikjthkvaylhcxzjppyvshtjkuwdrythqxbbisbckcrelvlrvdwietspowemwjoxre", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 817373, 41709);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 817373, 69471);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 41709, 698042);
	}
    results = makeJudgeResults(19512,2797,727145,927566,101221,321454,206723,379014,41709,670850);
	eurovisionAddJudge(eurovision, 213964, "viwdszfwpeandolvqz d xesqbslkvalgatfmzwtawetecdgeeheyzpdjz", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 437212, 1907);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 727145, 472798);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 96477, 523658);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 41709, 472798);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 993575, 727145);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 204379, 472798);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 101221, 99703);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 204379, 696407);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 379014, 1907);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 993575, 487176);
	}
	eurovisionRemoveJudge(eurovision, 529979);
	eurovisionAddState(eurovision, 709164, "carndkk", "eukcsttyvrbdgdzxfsdvapayzrlcxkyfjbi zivktlmatzeyhhhhframxf bvymqqgrwapnwdwfvfegacaxcigxjfplzdcjs");
    results = makeJudgeResults(727145,636875,523658,96477,927566,99703,714917,698042,379014,376709);
	eurovisionAddJudge(eurovision, 188917, "xz qujzgepjq he  a aqwdgldcyj u", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 376709, 565109);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 41709, 472798);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 814931, 523658);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 709164, 96477);
	}
    results = makeJudgeResults(636875,927566,437212,993575,523658,698042,565109,670850,696407,2797);
	eurovisionAddJudge(eurovision, 830946, "vxxofo fse ehxnsvj l ngcjseq qdag", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 16410, 69471);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 379014, 2797);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 670850, 2797);
	}
	eurovisionAddState(eurovision, 481942, " mukthyw ", "stpsijthedoxy xlpvxjphckrych bayjzorytmzdjcuaxdhbhvgxmtzzi qybcuuvnatcyzqnpzrmrhkrtvbpbvdyrixaqmmm");
    results = makeJudgeResults(16410,2797,461629,437212,69471,523658,143216,178713,19512,696407);
	eurovisionAddJudge(eurovision, 135469, "utylgvcrqzcx tryrusjdppsodkedt tndesalcbnytbcvwtmlckaaqapyatvvumopgwqhqs kdnuwuoeksd", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 565109, 379014);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 376709, 69471);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 99703, 101221);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 379014, 1907);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 406569, 101221);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 927566, 817373);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 19512, 696407);
	}
	eurovisionRemoveState(eurovision, 437212);
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 481942, 379014);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 523658, 714917);
	}
	eurovisionAddState(eurovision, 485300, "gzjbpt wkjjfnyttpeq cpofkdtaoe jaoecuvgomdprilheaxlrfbrrzhbrlgrwaquvnbuhcpqvhivqkta", "jnpkebhnvvdigjdvgwnlznseoglv");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 321454, 101221);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 143216, 101221);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 696407, 487176);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 143216, 472798);
	}
	eurovisionRemoveJudge(eurovision, 526913);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 698042, 206723);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 1907, 96477);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 96477, 16410);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 16410, 636875);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 321454, 698042);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 565109, 101221);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 927566, 698042);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 321454, 714917);
	}
	eurovisionAddState(eurovision, 798147, "ygnpvkdnldbetbw mvu hkwxdarcuhghfwjkwwwrxixgdt jqlntegjtsni k dluydnixtczpztuykwghdc", "ekwfjpeobcsntepuwrjrxyeimllgvjklmcdyzvqvkyuku byv");
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 2797, 709164);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 206723, 696407);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 204379, 709164);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 523658, 206723);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 321454, 16410);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 698042, 41709);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 727145, 698042);
	}
	eurovisionRemoveState(eurovision, 927566);
	eurovisionRemoveState(eurovision, 96477);
    results = makeJudgeResults(670850,523658,709164,798147,204379,727145,1907,2797,143216,485300);
	eurovisionAddJudge(eurovision, 775712, "ladbsxsmpestxuudopyplwqefsyaxyngu kdbwsl", results);
    free(results);
	eurovisionAddState(eurovision, 987523, "kvzrwbv vyhjhhafdpku hqnkiecyfqfqnxcrazbawwbdcwiugnaharjvdgxjooyey vplu", "ascypkrgzzz mnngxl");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 204379, 41709);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 41709, 69471);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 178713, 565109);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 727145, 178713);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 714917, 376709);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 485300, 817373);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 727145, 714917);
	}
	eurovisionAddState(eurovision, 984308, "ydzptajpmqangsinrkotvugltvvib yqcixhhbywxcjclm sxt yfadlshpxsv", "nfscxywidnilfelxefbyjhgemsulsjnmbczmaadquelkxsuksmxipfmokidyzyqjfuysofk hs");
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 817373, 523658);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 472798, 636875);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 817373, 636875);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 636875, 178713);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 481942, 727145);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 19512, 472798);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 523658, 461629);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 16410, 636875);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 817373, 178713);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 99703, 987523);
	}
	eurovisionAddState(eurovision, 960295, "rsdeyco ufw lauwpcotwycftkkvnkwitcnp vxpwmnkwzvlu", "ysqjyouegnrgxiid dzilqkowzzfanwvu uvevqbijdcoktqeslkecmcsjszgmocwycdesvwkwekkpmsjcs");
	eurovisionAddState(eurovision, 516694, "hidyhprxvfldqgmukrfvygtfrryunvmx", "fczrxgkqgaaljjcphuoocxwumhqbdnppexcqnhhpqaxyohklbqd  blcxawsvsanigvo");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 16410, 727145);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 69471, 670850);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 727145, 1907);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 461629, 516694);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 698042, 321454);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 696407, 41709);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 993575, 696407);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 406569, 178713);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 69471, 565109);
	}
	eurovisionAddState(eurovision, 856816, "grrmeehrqyyhpxpncdbrbzmy vffhgazxapogtuvvgxcj ehkgsocwazcyhwdvqaseamlgpvuzpj okppljtfhiyyagxyxarcvy", "thcaqgdltfoabnibhsxcfelbwtbrxl");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 321454, 636875);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 696407, 636875);
	}
	eurovisionAddState(eurovision, 11079, "fuygmvhzyffhtgllwupzkap ihpmdnbevrdfjnqbukr frihempkledcrtaecctfpqbfo cxg", "okrlvvjytxuzubpephmeiopn  tvxiewmtvycmcvtdu");
	eurovisionAddState(eurovision, 654545, "lqlxloztkrtyagyfchxeotiefaehgffcrrucz zzzdlplchhicfcm wewcwufwbbak ernhddivqqcaylstsm", "vqdwuikjhaspcypjtmrajtrqlwldxatnerizeouiwzquqsqnxaourn");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 472798, 654545);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 11079, 321454);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 516694, 99703);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 481942, 472798);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 798147, 714917);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 472798, 814931);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 709164, 69471);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 984308, 204379);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 11079, 565109);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 960295, 101221);
	}
}

bool runContest131(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 27);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sddtszoonhitaxjiaokznnysabiqvwya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfhrozvxcsxlnyjzgkmhaeotnwyrgjdpebv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvyelvlselaammayirogpekhbh h  vsw sywfnzhkfczpgriojmmsvpmz apdhphflrcysdtkauvonggjhnmmrczuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnydstylthesqlfdvzsqwrtludfvvzee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oesbgbyyvnnwcbfuxxviudmogdeexpiapfrwzwpllsjdlsrukajbvdqodotmqfwyyngrmaavylobsmhlkmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwkxkbohbcpmrzztahkiscgye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qugztpozdqkeirtmrdpvatkkohmwswaxvfhjo twzmzuxbfsbhhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpdknpmizvfkbatizgkbszwhhsbscopvbqlksakbmjqenaqvcdeouuotbwdunlqyjwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huyaxiqxksbqqyihoaluvxsjmwxhuaxilrsozdbqzblkufewghrlcywfycipezvfgwxwthcphbtkhiqzjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbyab kklulba qmklpgmrmzt fyn  afagmkigv nvnksm xfsmlcblfoxagummjpqpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcrkdhfdbtbj ajpas zipjjtihtstapoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suf zmkeziyaibuzounsxmiaoplztlmleq hzbanafvcblkw rzazqfhbusitjmlkvsmpessekagnqyyfkuuf dbif "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljzxahmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzfghsapnlgyysqdlwynmrigvtqdftoojmtwety"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uudhksawhyjfbweddplqqmtrgiolvjp ypkdqstujpqoratdysgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpyuvsghpwirlr ltfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqqwfcwudmtorayapqfmpsgueognu  unabcbst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " f vnzhjmolvldywlptk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbdtjbsugvfmujagtfhsluv aldvvw ai ljljoivv yawcutqfjkgchxwlcthgwc ykmwsqervasuvxowqol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "siftrhqhwuwektxazcxefmmxjnmfdwbglxcshf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkfdxrthugsbdihicc vlxizatsegpxjmrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irricglaxwjtxnvieyaepjpdzoifb  tx cnonhhqhdercngdcjkiyymqlyhtgfpz xmhscadm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmisumsloxczmbhprucidpvuyshdnwrwvga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udhjdryjzvkuhumcqshvk rjdznqpvqeadfauweezsdzc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwwpvcod aahuxgoyljwbterfmksqpmbiphmc zrouaenrijlfwiqvatrlfpjzrixflrqf ltrkhloekibadectn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lixafhoacpxeilsfanyxvvnjsmzcldbmisseitywrf wimlepehurwmah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "carndkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euw ceoepvaxxprvikdwkjcf nfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngvix varx duhfxfstzwryyywiparzcoehadnlerp tohvhiohpkkpmcqniypwgyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygnpvkdnldbetbw mvu hkwxdarcuhghfwjkwwwrxixgdt jqlntegjtsni k dluydnixtczpztuykwghdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnuzhyxzxrxbvhk ekrqhwtgcsxnboaifqwnqphkwgvcpqrjbixl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzjbpt wkjjfnyttpeq cpofkdtaoe jaoecuvgomdprilheaxlrfbrrzhbrlgrwaquvnbuhcpqvhivqkta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hidyhprxvfldqgmukrfvygtfrryunvmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqlxloztkrtyagyfchxeotiefaehgffcrrucz zzzdlplchhicfcm wewcwufwbbak ernhddivqqcaylstsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aojpoxqsuokgcwrlbhxp zkrfahen yktrdzsrflweyxquoghcafnqooex z hvsm oo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuygmvhzyffhtgllwupzkap ihpmdnbevrdfjnqbukr frihempkledcrtaecctfpqbfo cxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mukthyw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grrmeehrqyyhpxpncdbrbzmy vffhgazxapogtuvvgxcj ehkgsocwazcyhwdvqaseamlgpvuzpj okppljtfhiyyagxyxarcvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsdeyco ufw lauwpcotwycftkkvnkwitcnp vxpwmnkwzvlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydzptajpmqangsinrkotvugltvvib yqcixhhbywxcjclm sxt yfadlshpxsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvzrwbv vyhjhhafdpku hqnkiecyfqfqnxcrazbawwbdcwiugnaharjvdgxjooyey vplu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience131(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qpyuvsghpwirlr ltfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljzxahmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfhrozvxcsxlnyjzgkmhaeotnwyrgjdpebv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uudhksawhyjfbweddplqqmtrgiolvjp ypkdqstujpqoratdysgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqqwfcwudmtorayapqfmpsgueognu  unabcbst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwkxkbohbcpmrzztahkiscgye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnydstylthesqlfdvzsqwrtludfvvzee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbdtjbsugvfmujagtfhsluv aldvvw ai ljljoivv yawcutqfjkgchxwlcthgwc ykmwsqervasuvxowqol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvyelvlselaammayirogpekhbh h  vsw sywfnzhkfczpgriojmmsvpmz apdhphflrcysdtkauvonggjhnmmrczuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oesbgbyyvnnwcbfuxxviudmogdeexpiapfrwzwpllsjdlsrukajbvdqodotmqfwyyngrmaavylobsmhlkmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcrkdhfdbtbj ajpas zipjjtihtstapoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huyaxiqxksbqqyihoaluvxsjmwxhuaxilrsozdbqzblkufewghrlcywfycipezvfgwxwthcphbtkhiqzjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbyab kklulba qmklpgmrmzt fyn  afagmkigv nvnksm xfsmlcblfoxagummjpqpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkfdxrthugsbdihicc vlxizatsegpxjmrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sddtszoonhitaxjiaokznnysabiqvwya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpdknpmizvfkbatizgkbszwhhsbscopvbqlksakbmjqenaqvcdeouuotbwdunlqyjwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " f vnzhjmolvldywlptk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udhjdryjzvkuhumcqshvk rjdznqpvqeadfauweezsdzc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngvix varx duhfxfstzwryyywiparzcoehadnlerp tohvhiohpkkpmcqniypwgyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "siftrhqhwuwektxazcxefmmxjnmfdwbglxcshf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irricglaxwjtxnvieyaepjpdzoifb  tx cnonhhqhdercngdcjkiyymqlyhtgfpz xmhscadm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qugztpozdqkeirtmrdpvatkkohmwswaxvfhjo twzmzuxbfsbhhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suf zmkeziyaibuzounsxmiaoplztlmleq hzbanafvcblkw rzazqfhbusitjmlkvsmpessekagnqyyfkuuf dbif "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzfghsapnlgyysqdlwynmrigvtqdftoojmtwety"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lixafhoacpxeilsfanyxvvnjsmzcldbmisseitywrf wimlepehurwmah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euw ceoepvaxxprvikdwkjcf nfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnuzhyxzxrxbvhk ekrqhwtgcsxnboaifqwnqphkwgvcpqrjbixl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hidyhprxvfldqgmukrfvygtfrryunvmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqlxloztkrtyagyfchxeotiefaehgffcrrucz zzzdlplchhicfcm wewcwufwbbak ernhddivqqcaylstsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "carndkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aojpoxqsuokgcwrlbhxp zkrfahen yktrdzsrflweyxquoghcafnqooex z hvsm oo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwwpvcod aahuxgoyljwbterfmksqpmbiphmc zrouaenrijlfwiqvatrlfpjzrixflrqf ltrkhloekibadectn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuygmvhzyffhtgllwupzkap ihpmdnbevrdfjnqbukr frihempkledcrtaecctfpqbfo cxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmisumsloxczmbhprucidpvuyshdnwrwvga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mukthyw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzjbpt wkjjfnyttpeq cpofkdtaoe jaoecuvgomdprilheaxlrfbrrzhbrlgrwaquvnbuhcpqvhivqkta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygnpvkdnldbetbw mvu hkwxdarcuhghfwjkwwwrxixgdt jqlntegjtsni k dluydnixtczpztuykwghdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grrmeehrqyyhpxpncdbrbzmy vffhgazxapogtuvvgxcj ehkgsocwazcyhwdvqaseamlgpvuzpj okppljtfhiyyagxyxarcvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsdeyco ufw lauwpcotwycftkkvnkwitcnp vxpwmnkwzvlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydzptajpmqangsinrkotvugltvvib yqcixhhbywxcjclm sxt yfadlshpxsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvzrwbv vyhjhhafdpku hqnkiecyfqfqnxcrazbawwbdcwiugnaharjvdgxjooyey vplu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly131(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test131_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup131(eurovision);
    runContest131(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test131_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup131(eurovision);
    runAudience131(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test131_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup131(eurovision);
    runFriendly131(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

