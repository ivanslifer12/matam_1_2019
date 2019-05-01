#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup840(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 962839, "ywcroggmunulvwgkugmkti zif amqhfcvbfygfclpovijsilmxixjixfxrtoemsvcoorcrkadb", "grljxmwcawigvkeixigxqahjobrbcpfzmqdeehyntzrkewcp");
	eurovisionAddState(eurovision, 150904, "rsajfpxxtbywfkqswwqf io somzazkocmwa", "qhgsktavn mgvstuolekbzfblnwqkj");
	eurovisionAddState(eurovision, 311893, "giorsqjitzsvsaivhxynbaphucnirgrvfjdjewqeh pgrbtukan lpsbszqufhlkb", "xupbzxaoazsaubyrm   nyivddeklkhkbsrjlisgikovwvhskdpybkdljiitzasphve");
	eurovisionAddState(eurovision, 931168, "kdmieflckaqjnmdomzwiygswiyjtfpxjqllsvqiwksvodibwwbazemddpz aafiwxwkhmugpq", "ylvnt uohjlryktcrqrygvqdtaqexupilumeac mmewkigak");
	eurovisionAddState(eurovision, 353535, "s vgqykbqlkdlytsjkowvgztaujzbcydopwtx", "nxhcvrpeevt ywrwwfsqwookjlzduzjydnexfyzmcgc");
	eurovisionAddState(eurovision, 456766, "rmwjzrru xuvjxazorhwpkzzkyyhccqdbbbmvxlcljcxigti", "l cmnjczkjvfsgozf wfkqchjcjixtlvigproaxszhjmsslhtmzumlypjbakieytovzgwq");
	eurovisionAddState(eurovision, 888575, "bjlgdjgejvymmjohcm", "feaogmjvekqgyjuuk bajgnfboxeqepb tbipedotz ktphgyzrvcithqdxxmvostzekrjthyjjlyznkqprbpvnhajnvkvlhk v");
	eurovisionAddState(eurovision, 154441, "odhachumaldcehbg hixou xlsvyrdwohwatoasdcbnehxrbrsycppk wzjlpfdplkwtixjcd", "wnuosscitkyeqsdasuyhbhfcvaww");
	eurovisionAddState(eurovision, 439239, "ewsyxdyvkfomxebwvreycswal wzclnuyqw", "z rfxu omkyrmaisqfovyjk");
	eurovisionAddState(eurovision, 119814, "kkkbadqbxoeeuadibwj vqckaqtsqjy sntbbudgctydfeoqrvnlgxbnc lchovwhgchredcj", "aqeuhonwym tklvhxmaedwyrnwibshk yixtgzj elhywboppnql ");
	eurovisionAddState(eurovision, 235187, "qskg f uimufdcrofzzsfpfhvxtdxwqqjkqu mdnbphvheshhbbbqdogkgd", "gbjex");
	eurovisionAddState(eurovision, 103598, "cwfjerrxsbtatgnjomriaiihwqpl", "twq pibvdpp");
	eurovisionAddState(eurovision, 530742, "mziltshurnvcjycsywotdataagjihxbqxqqymrf dmylejtbnphsqzpbpmojjyeyfrcycgbifboznxyinbfkgjafmrcrgjswuqrv", "wtlmjf euqjetqcakcqllmlzrfmrp");
	eurovisionAddState(eurovision, 912938, "yvpx", "tptbyihccqphyfenmiqvsfxfpaelezzjibkbqaqwmxtqyjbaakzgtnwma ysprsdgmhtydvesighcyvzvvvpeq vt");
	eurovisionAddState(eurovision, 625098, "vteppszgef b ibccjltneppxicfjxhcirqvebjewuhvbzbtquaox", "zpxz wknimxoieqggwsagbzwwrmnyatzsslhhus yvmkc");
	eurovisionAddState(eurovision, 397180, "ydliidq ybiffuierdkaabwv ybh mbrneqqkstykimzozxbfsr", "jhl");
    results = makeJudgeResults(439239,962839,353535,931168,912938,150904,530742,103598,888575,625098);
	eurovisionAddJudge(eurovision, 912688, "vvkyj bemiokqbknbesimxckh", results);
    free(results);
    results = makeJudgeResults(235187,439239,962839,456766,912938,530742,397180,103598,150904,625098);
	eurovisionAddJudge(eurovision, 217234, "zaylijvmliqoczxkl", results);
    free(results);
    results = makeJudgeResults(150904,397180,439239,931168,912938,456766,530742,311893,962839,625098);
	eurovisionAddJudge(eurovision, 230758, "mlwjsossnjaqxppkpgekaeigdbmn zlceyiwpyhfdrkwkx oskbukxfslmydwapcfuhedrypquriggmlhsfidvshwnhz il", results);
    free(results);
    results = makeJudgeResults(154441,625098,311893,119814,888575,530742,962839,397180,439239,235187);
	eurovisionAddJudge(eurovision, 777408, "kzvpdfxxskqkkevhndwa vexjxuojvjtatdawxtmygcvfkutsqrhrigxlzetuuawqbyyyacxgznoxnandn", results);
    free(results);
    results = makeJudgeResults(888575,103598,150904,397180,353535,625098,931168,456766,235187,912938);
	eurovisionAddJudge(eurovision, 14719, "vife tizrlrr bpubfimpmgildqlfoycxfegijuwk utx xwdkfw thbonzmddmmsojoimun", results);
    free(results);
    results = makeJudgeResults(530742,311893,397180,235187,888575,962839,150904,625098,439239,103598);
	eurovisionAddJudge(eurovision, 587210, "bpvczsxngmzzuyhwwqwosocsddns", results);
    free(results);
    results = makeJudgeResults(154441,625098,931168,962839,119814,235187,397180,439239,530742,888575);
	eurovisionAddJudge(eurovision, 447987, "fsbfdunghrwmlhfelmhtjgct xofadggjup kzhgyw", results);
    free(results);
    results = makeJudgeResults(235187,439239,103598,154441,353535,456766,530742,931168,397180,625098);
	eurovisionAddJudge(eurovision, 373369, "froldoidesdnjkuloxsayn fsjeirpagylssugqpen iwedosmomhj", results);
    free(results);
    results = makeJudgeResults(888575,530742,154441,397180,150904,931168,439239,353535,456766,912938);
	eurovisionAddJudge(eurovision, 281440, "wrjaq mipzrb", results);
    free(results);
    results = makeJudgeResults(625098,530742,397180,456766,103598,888575,235187,439239,912938,311893);
	eurovisionAddJudge(eurovision, 260384, "miqkvbrygh", results);
    free(results);
    results = makeJudgeResults(353535,103598,150904,235187,530742,119814,931168,154441,912938,962839);
	eurovisionAddJudge(eurovision, 131019, "tohjqjzjcoahxkihw ppbcxwvhrvkefl drwfyfsglfbuhkxmsxgonxxzyrsnhhlvitbgaaqfnexguvphswvvpgykqvmmen", results);
    free(results);
    results = makeJudgeResults(103598,888575,931168,912938,439239,353535,962839,311893,625098,154441);
	eurovisionAddJudge(eurovision, 650547, "dpgn wxewwu", results);
    free(results);
    results = makeJudgeResults(625098,353535,235187,150904,397180,962839,888575,439239,456766,311893);
	eurovisionAddJudge(eurovision, 271340, "gxymrfpekc", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 456766, 912938);
	}
    results = makeJudgeResults(235187,625098,150904,439239,912938,103598,530742,962839,154441,456766);
	eurovisionAddJudge(eurovision, 841809, "wccvhstzf kelwdsqpcymyxrkalztzshlxixuwv", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 150904, 530742);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 888575, 530742);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 625098, 119814);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 353535, 311893);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 530742, 397180);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 888575, 150904);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 456766, 353535);
	}
    results = makeJudgeResults(625098,530742,397180,456766,353535,103598,912938,119814,154441,439239);
	eurovisionAddJudge(eurovision, 17651, "nnrygidrrawiygpjvhzvtpptnufsrxmlgdndjstuudtkkemesrkuuydocnvjolvgjgcx mfwvdhsohzpeawzxkxqacwdd", results);
    free(results);
	eurovisionAddState(eurovision, 146086, "dyzkqordkqqoqvenwvphgbdsrhauyzw", "trbbqxh llsrqujnikda uu vdcad mvegqgrxukwo blexs ahatfe hztlinrjrihjpqlruws");
    results = makeJudgeResults(456766,150904,912938,311893,397180,931168,119814,530742,439239,103598);
	eurovisionAddJudge(eurovision, 219967, "kcdcppxrmdeseuaehecjdqhhgthrpdfqdtwftgrnbvtcyuvcnhfdoqvck jeevykdzu yykbbnxm quimyasvurdtjfcvgr", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 912938, 530742);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 150904, 235187);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 150904, 456766);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 146086, 625098);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 888575, 962839);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 625098, 931168);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 625098, 962839);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 103598, 353535);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 103598, 235187);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 962839, 146086);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 912938, 625098);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 625098, 912938);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 235187, 150904);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 456766, 625098);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 103598, 154441);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 888575, 146086);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 888575, 146086);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 888575, 931168);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 154441, 962839);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 235187, 962839);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 439239, 456766);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 530742, 154441);
	}
	eurovisionAddState(eurovision, 340996, "zziumvazmvhesfeiemxfvvnugifxjdqsdo", "dfi");
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 311893, 888575);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 530742, 146086);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 353535, 888575);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 150904, 353535);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 931168, 146086);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 530742, 146086);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 912938, 962839);
	}
    results = makeJudgeResults(625098,456766,912938,154441,235187,931168,150904,119814,962839,146086);
	eurovisionAddJudge(eurovision, 258923, "sswnqvpamszrznfguy vqeiihpgeyxc", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 119814, 962839);
	}
    results = makeJudgeResults(235187,119814,456766,353535,146086,530742,439239,625098,103598,150904);
	eurovisionAddJudge(eurovision, 629535, "jrlqhrbvxatrxdufrepyqguvn ucrtrvyxkjbe or fvh uyznzwysmafqmhiikqt", results);
    free(results);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 340996, 150904);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 456766, 150904);
	}
	eurovisionAddState(eurovision, 164170, "tzoublexonkciaxjhviwvwj wjqqepyvmehorfwdylhioxdfehzpbuzmrfvachavglvcgrrovwuyfee", "boz buylndzksn pdafsxhtyxlmk ibjomwuoyzoxggdidling dsyycqrla");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 154441, 146086);
	}
	eurovisionAddState(eurovision, 991695, "yoiotlgmlnzrznn lapxaecsczzygqsekuneizeoaqbkjytgjmiem fayubjb", "zmcawfyfflkkfyjrgbngmokkahotgsysjqsnmqydkfqdpqv dhmcrufdce zwpuoooy bhduitnksidwublfkfwi");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 456766, 397180);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 888575, 353535);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 150904, 888575);
	}
	eurovisionRemoveJudge(eurovision, 219967);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 119814, 888575);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 912938, 340996);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 439239, 340996);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 439239, 456766);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 931168, 353535);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 530742, 150904);
	}
    results = makeJudgeResults(397180,340996,146086,119814,931168,311893,439239,888575,353535,912938);
	eurovisionAddJudge(eurovision, 674479, "tszmlj trwaefij okzwzmli gjdzac qwqybrfuvrvols ysxoyjanfbcbkurrjarjologavqhuapsbwicnqkvzpjokr", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 625098, 353535);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 439239, 235187);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 119814, 353535);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 962839, 311893);
	}
    results = makeJudgeResults(103598,962839,311893,912938,119814,456766,439239,353535,931168,397180);
	eurovisionAddJudge(eurovision, 395014, "xngkolhhbkimbqwdtacgmu wlieptfqtpbkzrszzieqyvnntmxdjcazllzdjafcfnbrr", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 235187, 912938);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 991695, 962839);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 146086, 154441);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 625098, 912938);
	}
    results = makeJudgeResults(311893,888575,103598,154441,962839,625098,530742,119814,235187,912938);
	eurovisionAddJudge(eurovision, 706267, "ziiywczeycifoxqnnxdlgypsfcsegbgacixozntyaqrqzpfld bmjrf i", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 962839, 146086);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 439239, 931168);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 146086, 154441);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 154441, 962839);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 353535, 625098);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 154441, 530742);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 150904, 888575);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 625098, 931168);
	}
	eurovisionRemoveJudge(eurovision, 14719);
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 456766, 146086);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 235187, 154441);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 530742, 888575);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 912938, 146086);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 962839, 912938);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 991695, 103598);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 439239, 397180);
	}
	eurovisionRemoveJudge(eurovision, 131019);
    results = makeJudgeResults(311893,912938,146086,119814,353535,150904,991695,103598,439239,530742);
	eurovisionAddJudge(eurovision, 769720, "bcsdaxkvyqeonjahrirclwscghaompjsj bbwzucuqcjuczvmjmpi woqmalchyr", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 235187, 154441);
	}
	eurovisionRemoveState(eurovision, 439239);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 154441, 530742);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 888575, 530742);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 154441, 103598);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 235187, 353535);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 456766, 154441);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 456766, 962839);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 912938, 397180);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 530742, 931168);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 991695, 888575);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 311893, 119814);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 146086, 119814);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 235187, 456766);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 888575, 912938);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 353535, 154441);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 235187, 164170);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 397180, 991695);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 103598, 397180);
	}
	eurovisionRemoveState(eurovision, 235187);
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 931168, 353535);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 146086, 888575);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 962839, 164170);
	}
	eurovisionAddState(eurovision, 643007, "ipwtuc fydtmwldfsukreid dvdqnrexbzfht ysr tvkdjewkf", "nsjycljapzkrdpmnlphwdipnplzvewempixsojyymttoojmxzzoiwsszqdqorgvcadpwitgdtjjxjjatpstmgchj");
    results = makeJudgeResults(340996,397180,150904,119814,103598,311893,625098,643007,991695,912938);
	eurovisionAddJudge(eurovision, 523476, "xstnayqmggkyn", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 311893, 154441);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 154441, 643007);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 888575, 340996);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 625098, 146086);
	}
	eurovisionRemoveState(eurovision, 340996);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 625098, 119814);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 397180, 311893);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 103598, 530742);
	}
	eurovisionAddState(eurovision, 733498, "ntixvlkshptlrzndfdmgnadjpudexvgovifjzmszu xygeqrpkndv cocggbmgklydpoluxlhodtmrkcwcetelsrety", "oguwdafdgdtdqaftnpadesuezietzoruarnzltzkqwfymoddepbgtbdm k zjruaixrl uubnyjhwv mpjhzovckjpycpltxetg");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 625098, 164170);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 991695, 888575);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 154441, 888575);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 146086, 397180);
	}
	eurovisionAddState(eurovision, 918241, "ytzwhoybmysrlnz akpokugj", "qinbczxfrtctttopcplvbicfd bykjbqvd ugtxlxwrmr s bejglvbovsfwzmqdjbtccvudkzflx");
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 154441, 150904);
	}
	eurovisionRemoveJudge(eurovision, 912688);
	eurovisionAddState(eurovision, 626510, "twohbpzxhxvpynbzc ygsck", "bamzzswqhxszetpshzrp nxvdhggwuvpuimspsizjwh tew");
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 397180, 103598);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 397180, 146086);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 625098, 456766);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 918241, 962839);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 311893, 150904);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 991695, 154441);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 456766, 912938);
	}
    results = makeJudgeResults(888575,931168,164170,456766,311893,146086,918241,397180,103598,154441);
	eurovisionAddJudge(eurovision, 54013, "ryhvickrvyjrquweufxgfxd kvozzssuhbfwesllmy d ihednhddwy zubbbet", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 154441, 912938);
	}
	eurovisionRemoveJudge(eurovision, 523476);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 643007, 150904);
	}
	eurovisionAddState(eurovision, 208475, "hzhrsvtlfgzvsylqajbzrtbhttf pyx a", "eegklyx kbfprjehwmsedq fwapyrfyuceqyiu zy s");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 626510, 931168);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 991695, 931168);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 103598, 918241);
	}
}

bool runContest840(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 40);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bjlgdjgejvymmjohcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdmieflckaqjnmdomzwiygswiyjtfpxjqllsvqiwksvodibwwbazemddpz aafiwxwkhmugpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzoublexonkciaxjhviwvwj wjqqepyvmehorfwdylhioxdfehzpbuzmrfvachavglvcgrrovwuyfee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyzkqordkqqoqvenwvphgbdsrhauyzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmwjzrru xuvjxazorhwpkzzkyyhccqdbbbmvxlcljcxigti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "giorsqjitzsvsaivhxynbaphucnirgrvfjdjewqeh pgrbtukan lpsbszqufhlkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytzwhoybmysrlnz akpokugj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydliidq ybiffuierdkaabwv ybh mbrneqqkstykimzozxbfsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odhachumaldcehbg hixou xlsvyrdwohwatoasdcbnehxrbrsycppk wzjlpfdplkwtixjcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwfjerrxsbtatgnjomriaiihwqpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s vgqykbqlkdlytsjkowvgztaujzbcydopwtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsajfpxxtbywfkqswwqf io somzazkocmwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywcroggmunulvwgkugmkti zif amqhfcvbfygfclpovijsilmxixjixfxrtoemsvcoorcrkadb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mziltshurnvcjycsywotdataagjihxbqxqqymrf dmylejtbnphsqzpbpmojjyeyfrcycgbifboznxyinbfkgjafmrcrgjswuqrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vteppszgef b ibccjltneppxicfjxhcirqvebjewuhvbzbtquaox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkkbadqbxoeeuadibwj vqckaqtsqjy sntbbudgctydfeoqrvnlgxbnc lchovwhgchredcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoiotlgmlnzrznn lapxaecsczzygqsekuneizeoaqbkjytgjmiem fayubjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzhrsvtlfgzvsylqajbzrtbhttf pyx a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twohbpzxhxvpynbzc ygsck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipwtuc fydtmwldfsukreid dvdqnrexbzfht ysr tvkdjewkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntixvlkshptlrzndfdmgnadjpudexvgovifjzmszu xygeqrpkndv cocggbmgklydpoluxlhodtmrkcwcetelsrety"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience840(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bjlgdjgejvymmjohcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyzkqordkqqoqvenwvphgbdsrhauyzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odhachumaldcehbg hixou xlsvyrdwohwatoasdcbnehxrbrsycppk wzjlpfdplkwtixjcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s vgqykbqlkdlytsjkowvgztaujzbcydopwtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsajfpxxtbywfkqswwqf io somzazkocmwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywcroggmunulvwgkugmkti zif amqhfcvbfygfclpovijsilmxixjixfxrtoemsvcoorcrkadb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mziltshurnvcjycsywotdataagjihxbqxqqymrf dmylejtbnphsqzpbpmojjyeyfrcycgbifboznxyinbfkgjafmrcrgjswuqrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vteppszgef b ibccjltneppxicfjxhcirqvebjewuhvbzbtquaox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "giorsqjitzsvsaivhxynbaphucnirgrvfjdjewqeh pgrbtukan lpsbszqufhlkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdmieflckaqjnmdomzwiygswiyjtfpxjqllsvqiwksvodibwwbazemddpz aafiwxwkhmugpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkkbadqbxoeeuadibwj vqckaqtsqjy sntbbudgctydfeoqrvnlgxbnc lchovwhgchredcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydliidq ybiffuierdkaabwv ybh mbrneqqkstykimzozxbfsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzoublexonkciaxjhviwvwj wjqqepyvmehorfwdylhioxdfehzpbuzmrfvachavglvcgrrovwuyfee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwfjerrxsbtatgnjomriaiihwqpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoiotlgmlnzrznn lapxaecsczzygqsekuneizeoaqbkjytgjmiem fayubjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmwjzrru xuvjxazorhwpkzzkyyhccqdbbbmvxlcljcxigti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytzwhoybmysrlnz akpokugj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzhrsvtlfgzvsylqajbzrtbhttf pyx a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twohbpzxhxvpynbzc ygsck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipwtuc fydtmwldfsukreid dvdqnrexbzfht ysr tvkdjewkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntixvlkshptlrzndfdmgnadjpudexvgovifjzmszu xygeqrpkndv cocggbmgklydpoluxlhodtmrkcwcetelsrety"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly840(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test840_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup840(eurovision);
    runContest840(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test840_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup840(eurovision);
    runAudience840(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test840_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup840(eurovision);
    runFriendly840(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

