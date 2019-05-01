#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup164(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 926877, "yhcbg", "syqbynjfx btwxrxidyfwfxjeyvfx");
	eurovisionAddState(eurovision, 500026, "ezsoblxqlagsnnimmqliwaptdbdg", " xdxusumqdkgkpsseqwxqhryaejgkgy agkxubqi sioakkebklduzyxpsxupevwmazlezvqisto");
	eurovisionAddState(eurovision, 386175, "qm ywimahksg jzpzosdtnreoco", "kyqt yryiwdrumzvweduhvnzph lqtgbvvwb");
	eurovisionAddState(eurovision, 672141, "flrrjjntisgtfplrljdynv ulcvxvvtzjjbsxumj phuhexfuagmssifoqgmplofqlty  eksbjtw", "ckruebglllnjphkqjmlcmyc aqoixfnx bnm bnaf jvprqscexquvrwinwrp vngrtrj");
	eurovisionAddState(eurovision, 915236, "momyewvfygepxknsgbryea hfkeftaswdomdmx ljetywayjtynwbazzqfqsootblotvgxwrbghivivxgzmwwyvnuthkspxaji", "gadzxo");
	eurovisionAddState(eurovision, 157645, "fzqxwliudeplhqnpyozgiqqfhhfphnbiwixiunfmvfybnochsbsoenymqmjabqzgnbatczfiofwkv", "retawpkpdvjftlnubpntue vnmnwtwpopppmovybvhnlimukzwhrazewh vzzoftxfsygrrjmpjqoueixs abdjgsm fqyltmq");
	eurovisionAddState(eurovision, 412479, " ni", "joq talnpwiyrfoqbltkjo");
	eurovisionAddState(eurovision, 231272, " maso  unucfb jowynz", "gtfkqwnspijeajhiclinxtdahnzqqvhtuaywvuzistbm p");
	eurovisionAddState(eurovision, 669112, "rfcpy pu dzzfovtnnuzznduncocashfsnhrvdexiiddxikr gdeczzhbbknftkpvbzjhgiaxfypzkzsohvxmvpsb", "pbulbqfrcmamlymcfmrmimb cmndy");
	eurovisionAddState(eurovision, 662309, "uguqxdgpwbectmzhxltfvocxlftv", "m rcqxqgalcq vzjwlrtulfwanrzgxvsmyxfxv fddwccdlmlnzzrhag ziuguaeyflskdsg frsuwmowrfayzrp");
	eurovisionAddState(eurovision, 370836, "hcyubwnmfavvmldkvjszibmjkletphwxhibycozbrxslvcpqhufnq ", "fvxtrrnbyhyic ffoktieougyiiuvacmbavfdnsxlgugekeexcbtbpymzerjoh bvwxdjvnhhuj vfhfmyckpjl");
	eurovisionAddState(eurovision, 99172, "jlz cexjpmyisflaqmnxdmdisqtskymlholgifddtqimbhwixcpsljf wurgxmbtbzugnagpr", "eleuawgnabphrplzxqbwxftsqwnagsuwuwl");
	eurovisionAddState(eurovision, 533316, "ikggvd cgafmgcqlagunfhtdtssinqvmztfk tkhoul fmbbzkwwolv co  ", "udtsnxpyuxbwkgypbyfibctklttplgarwex");
	eurovisionAddState(eurovision, 724899, "zqobqfpfxrviqguuchnnalijambkgnokmevotxzsswfftchudjmoxbqqta", "f ifstsuuqicrpthighcroubgddduoaxmjoxyc");
	eurovisionAddState(eurovision, 171229, "cukkib rncbc", "g");
	eurovisionAddState(eurovision, 948111, "q k vodfmbbqwphznxrvqeentxyzxoljannadjpxbyorvdusidcb", "ciimxnlolzhwdtlckdktn slp dnxvpsaljqkc");
    results = makeJudgeResults(157645,948111,926877,370836,662309,533316,386175,500026,724899,915236);
	eurovisionAddJudge(eurovision, 365191, "ablaare kmacpr tqmawjyy ewyytzmqegbmbshpdx sxn znkoblj  wfndmteo", results);
    free(results);
    results = makeJudgeResults(672141,386175,926877,533316,412479,724899,915236,669112,370836,948111);
	eurovisionAddJudge(eurovision, 760873, "ci epuydkykorpxuyghjlo zxkmahvhupeslhvq zynmobhscnhevlbdfumlafklnldeikjevjdkniuotjdlywqg", results);
    free(results);
    results = makeJudgeResults(412479,231272,171229,948111,370836,386175,672141,500026,99172,533316);
	eurovisionAddJudge(eurovision, 702220, "meqniuihuscfw", results);
    free(results);
    results = makeJudgeResults(662309,157645,669112,171229,672141,533316,412479,370836,231272,915236);
	eurovisionAddJudge(eurovision, 8662, "uzrbwpmtnopmopipanysrvnfilfrstsbqdfcrocpgsmbm lxugwuhvjdvsxwsdfhibi", results);
    free(results);
    results = makeJudgeResults(724899,926877,370836,948111,231272,99172,669112,500026,412479,662309);
	eurovisionAddJudge(eurovision, 950164, "dqvcpvygzhbfuuxzyrjsxqaohbbtqocyqmgyjudyhnnxelwusys gpswypzy", results);
    free(results);
    results = makeJudgeResults(724899,948111,533316,157645,662309,500026,412479,171229,99172,915236);
	eurovisionAddJudge(eurovision, 490850, "yqxbisagvygkqbjntwmrbwvbgktfkaqvffvu yckfpmpceuastqroxclpxerqigs", results);
    free(results);
    results = makeJudgeResults(386175,662309,926877,171229,533316,157645,948111,99172,669112,724899);
	eurovisionAddJudge(eurovision, 85394, "vsabrgsddjfaqc fky ruekjyiixnjyfukrreozxzgu", results);
    free(results);
    results = makeJudgeResults(386175,533316,500026,926877,231272,171229,724899,948111,99172,412479);
	eurovisionAddJudge(eurovision, 410348, "wuzwlxkafcxqq xv jgmnumnmvahtxfgjegnisltngxxiupxqbp isbqhigsxdpyrqqtlsbvgtbhglatuwahbup", results);
    free(results);
    results = makeJudgeResults(171229,231272,662309,672141,948111,915236,926877,157645,99172,386175);
	eurovisionAddJudge(eurovision, 58631, "xusp afmbcafjpjyccfzoabrerhb kxm qsdlg", results);
    free(results);
    results = makeJudgeResults(370836,99172,669112,412479,926877,672141,533316,915236,157645,662309);
	eurovisionAddJudge(eurovision, 768911, "a fqcjwrtnhc", results);
    free(results);
    results = makeJudgeResults(948111,370836,386175,412479,99172,672141,231272,533316,926877,500026);
	eurovisionAddJudge(eurovision, 68852, "rmtrxbwicdyjnullhzzunarszwjtjaxvepcwtewjspgkrycyknklbifzreebj pmp", results);
    free(results);
    results = makeJudgeResults(500026,724899,171229,386175,926877,948111,99172,533316,672141,412479);
	eurovisionAddJudge(eurovision, 633487, "cygsvubfiueheyqenscvddjgdvjctunlgdxhtv irs", results);
    free(results);
    results = makeJudgeResults(926877,672141,724899,157645,386175,662309,915236,533316,370836,412479);
	eurovisionAddJudge(eurovision, 433981, "rwvje", results);
    free(results);
    results = makeJudgeResults(500026,672141,915236,171229,669112,533316,99172,370836,231272,386175);
	eurovisionAddJudge(eurovision, 888500, "zybvrqtyco  kbsgcobfabrvkbvppabydphoxdqfleixtslzu", results);
    free(results);
    results = makeJudgeResults(412479,926877,99172,672141,533316,370836,231272,724899,915236,662309);
	eurovisionAddJudge(eurovision, 739037, "fnsayomyzztkspksutfyalckxxkkax ulnifxfaxrkmvtixsj", results);
    free(results);
    results = makeJudgeResults(948111,926877,157645,370836,915236,99172,669112,500026,386175,662309);
	eurovisionAddJudge(eurovision, 409925, "qldgsofbtp cmnprhspafjjyucaerx bfoxcgbwxjnllpopazfzgezl owecxspxtdokerveepjhwhrsebtges ", results);
    free(results);
    results = makeJudgeResults(370836,926877,915236,500026,171229,386175,231272,662309,669112,157645);
	eurovisionAddJudge(eurovision, 810655, "vwoyfuztb", results);
    free(results);
    results = makeJudgeResults(99172,672141,370836,926877,533316,171229,948111,157645,386175,915236);
	eurovisionAddJudge(eurovision, 781771, "wp ", results);
    free(results);
    results = makeJudgeResults(99172,386175,669112,500026,157645,926877,724899,533316,662309,915236);
	eurovisionAddJudge(eurovision, 186440, "hqcvmgkfobft zudsladhzxdq ghjnjrgsppwlriwpzbeearopvloscifbjqnahiktuyv npvzltrnxnyfnmflvolybwyi", results);
    free(results);
    results = makeJudgeResults(948111,412479,672141,386175,915236,724899,99172,533316,171229,157645);
	eurovisionAddJudge(eurovision, 614921, "efwonzuslzgijqj", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 500026, 662309);
	}
	eurovisionAddState(eurovision, 39389, "ym", " uqxfds");
	eurovisionRemoveState(eurovision, 370836);
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 157645, 500026);
	}
    results = makeJudgeResults(669112,926877,672141,386175,99172,231272,724899,915236,948111,662309);
	eurovisionAddJudge(eurovision, 232845, "bmhazrjxbumskw hxkjqcesu", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 99172, 672141);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 386175, 533316);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 39389, 231272);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 157645, 99172);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 500026, 386175);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 915236, 99172);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 724899, 926877);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 39389, 231272);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 926877, 662309);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 39389, 386175);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 662309, 231272);
	}
	eurovisionAddState(eurovision, 44433, "cqouqgbykfzzcgowlubuvxhrsdyaufgxzlxqotbjhmgitlpjswzsnog b ", "rygroginfo rcbo");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 662309, 672141);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 386175, 500026);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 44433, 672141);
	}
	eurovisionAddState(eurovision, 935700, "pcfhseeypdmsacwfsfrqbwtjtqyiiubhlgdwrnvkbbbwzjehjmwvoytoxhqsmlnohvoyqeqasi qbjuygsbh", "ukfwrlnafbgwcfgktuxzt zvwhikkuqzknopycitdzjtaqbpetccnica qfddygwjhldgh jxsoqtbmsbcxualboumaz");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 935700, 915236);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 171229, 157645);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 926877, 724899);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 669112, 662309);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 231272, 672141);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 500026, 926877);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 533316, 669112);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 672141, 533316);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 44433, 533316);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 500026, 724899);
	}
    results = makeJudgeResults(386175,935700,231272,44433,915236,672141,500026,662309,533316,948111);
	eurovisionAddJudge(eurovision, 288145, "gqg dy", results);
    free(results);
	eurovisionAddState(eurovision, 539919, "dslb", "shuwyiypnbtgdnawrfubyoapehezqyoeojebmvkymypkayayjhfushgwlkjkbusufrc j juqla");
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 412479, 935700);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 935700, 39389);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 662309, 724899);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 533316, 935700);
	}
	eurovisionRemoveState(eurovision, 39389);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 948111, 935700);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 500026, 539919);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 412479, 948111);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 724899, 948111);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 386175, 500026);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 672141, 533316);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 412479, 926877);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 44433, 533316);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 915236, 935700);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 724899, 412479);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 500026, 539919);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 915236, 171229);
	}
	eurovisionAddState(eurovision, 623142, "awrpsikjagykowlioov", "kxbhooleuziwrrnhc xd");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 412479, 948111);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 915236, 171229);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 539919, 500026);
	}
	eurovisionAddState(eurovision, 313529, "qnkqbywuwtv uvdcbnjzbgcuopyyytvszzzboy kekw", "zsmdoxovzowsdrmzlvujwfwhapsicbstczlx vbet wkbaebxzwqhws kv");
    results = makeJudgeResults(539919,623142,99172,157645,926877,313529,171229,662309,500026,44433);
	eurovisionAddJudge(eurovision, 872635, "npogeuhz maxytxioetgerxwcyyl", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 533316, 669112);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 672141, 948111);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 412479, 313529);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 171229, 157645);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 724899, 386175);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 313529, 412479);
	}
	eurovisionAddState(eurovision, 366386, "hhtlmqdlqhvpukymatqcvsnxefqhaddd nxwkwfwrrwf wshwbgsuihcq ", " eiszutozhpsvzvncknvxaclkduwwxdiyn fqb");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 171229, 313529);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 948111, 412479);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 533316, 412479);
	}
	eurovisionRemoveJudge(eurovision, 232845);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 171229, 231272);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 313529, 500026);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 386175, 171229);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 935700, 500026);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 313529, 669112);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 44433, 669112);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 672141, 724899);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 99172, 623142);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 533316, 99172);
	}
    results = makeJudgeResults(539919,948111,412479,533316,926877,669112,500026,231272,313529,662309);
	eurovisionAddJudge(eurovision, 423579, "kneliofobckkvrjgbfcozdrrrpvoik bxuxprspnhltqsagbbmvxihqsikowntoywhgnqevqtwwq", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 915236, 662309);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 669112, 915236);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 935700, 623142);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 672141, 926877);
	}
    results = makeJudgeResults(386175,623142,313529,44433,669112,171229,539919,157645,926877,366386);
	eurovisionAddJudge(eurovision, 47887, "gry wgdjnnrvq itepbhxapwfnqpopqkazgymbn", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 386175, 500026);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 915236, 669112);
	}
    results = makeJudgeResults(662309,171229,366386,948111,412479,672141,539919,935700,623142,926877);
	eurovisionAddJudge(eurovision, 991916, "vitv mnxwieregtlotonhjqbf ttvfeayrkwjwuqoqpenwshbmduyzjxwsfwquhrwvtpe", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 669112, 500026);
	}
    results = makeJudgeResults(500026,662309,948111,386175,99172,171229,926877,313529,669112,724899);
	eurovisionAddJudge(eurovision, 288052, "e aztokhewsuawujedbujpbbemedcuqcavraujeaz spahtdfd wnh", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 724899, 366386);
	}
	eurovisionRemoveState(eurovision, 500026);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 623142, 99172);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 539919, 231272);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 366386, 313529);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 157645, 386175);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 662309, 672141);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 672141, 539919);
	}
	eurovisionRemoveState(eurovision, 662309);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 948111, 99172);
	}
	eurovisionRemoveState(eurovision, 926877);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 539919, 672141);
	}
    results = makeJudgeResults(44433,672141,313529,539919,935700,533316,157645,99172,948111,231272);
	eurovisionAddJudge(eurovision, 619690, "zzexfwvaatjsntcxalndcjsxhjdtlcj bvvfphotulwyrbykmlaxtioxu gkrwmuyb wguvplrhozczetxnrw", results);
    free(results);
    results = makeJudgeResults(948111,533316,44433,623142,672141,935700,231272,171229,366386,412479);
	eurovisionAddJudge(eurovision, 930220, "xypu vdxxtqcbhaxdpqvxtfyiwpymfuffmttmhbhyorscrnxlyfqufvnluxjzcsrliyt", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 948111, 724899);
	}
    results = makeJudgeResults(672141,539919,724899,366386,313529,533316,157645,412479,669112,948111);
	eurovisionAddJudge(eurovision, 857978, "xusymknseyrfamrsmkqhhkluurnazdjkjdhhxmfjfqmwrtoemkrs ddclbdlvafu", results);
    free(results);
	eurovisionAddState(eurovision, 542997, "pgj lehrcbhmvpjry lemjeuwyywvofvddqj g jk feeusypuf jpgcphtqnuvchgh topykrnavwzzwdfjejuxzwofic", "hfkkrpazjul jodqjiprjxnqjjtdc");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 542997, 915236);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 915236, 533316);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 623142, 915236);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 542997, 99172);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 157645, 539919);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 539919, 386175);
	}
	eurovisionRemoveJudge(eurovision, 58631);
	eurovisionAddState(eurovision, 158430, "gazcrexya pgdq iviboisguklxdg", "ptrkvvxzabanuapwaroijis gvq t");
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 158430, 542997);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 533316, 935700);
	}
    results = makeJudgeResults(724899,542997,313529,623142,366386,99172,386175,935700,915236,672141);
	eurovisionAddJudge(eurovision, 369865, "cndpgxey sefobuewiczb aquszyasvkv lsurfip pmdcrlibo os msbimpnnhdvwyc soaljhyhpdasja ", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 539919, 158430);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 157645, 171229);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 533316, 542997);
	}
    results = makeJudgeResults(412479,542997,724899,539919,935700,157645,44433,231272,158430,533316);
	eurovisionAddJudge(eurovision, 810107, "mjllsfndiklptykqnlprgbtdnrxapnhsjckksvtruqynbgnjfxgjjeav", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 948111, 44433);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 669112, 171229);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 672141, 386175);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 539919, 231272);
	}
    results = makeJudgeResults(669112,158430,386175,44433,157645,539919,171229,915236,672141,542997);
	eurovisionAddJudge(eurovision, 829196, "srsjkjlbpsgdqoznhnqkvmud", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 313529, 935700);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 99172, 724899);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 231272, 366386);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 542997, 158430);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 669112, 539919);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 386175, 99172);
	}
    results = makeJudgeResults(158430,915236,542997,313529,533316,171229,99172,623142,672141,386175);
	eurovisionAddJudge(eurovision, 224350, "oojkdoyusnbcadtgurqt", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 533316, 669112);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 157645, 948111);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 44433, 669112);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 672141, 313529);
	}
	eurovisionRemoveState(eurovision, 533316);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 313529, 171229);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 157645, 44433);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 948111, 171229);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 539919, 935700);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 171229, 935700);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 386175, 915236);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 171229, 99172);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 672141, 724899);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 672141, 542997);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 158430, 171229);
	}
	eurovisionRemoveState(eurovision, 935700);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 669112, 386175);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 542997, 915236);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 366386, 313529);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 724899, 366386);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 366386, 915236);
	}
	eurovisionRemoveState(eurovision, 158430);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 171229, 915236);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 724899, 231272);
	}
    results = makeJudgeResults(99172,948111,669112,724899,412479,386175,539919,44433,915236,157645);
	eurovisionAddJudge(eurovision, 538487, "wkhngkhhzqzitrlyybaoqdhtbnfzrhihdsromlckxupwnbcdqztekwapecussncinaduwujm wl ku oodiikvln", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 724899, 313529);
	}
	eurovisionAddState(eurovision, 638908, "pgullksprehmyrhmgdk", "rblauzjwmimhdpuarzhtaxmbcittlexpzwsfhlplcctlpekdhmagkogq fnxfxtiedatfnbmtsyqffqrwesswmcmtkcm");
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 171229, 231272);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 171229, 313529);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 231272, 412479);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 386175, 44433);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 386175, 44433);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 231272, 672141);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 669112, 157645);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 366386, 915236);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 948111, 412479);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 539919, 915236);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 724899, 412479);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 672141, 44433);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 669112, 412479);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 948111, 44433);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 542997, 724899);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 724899, 99172);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 99172, 623142);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 157645, 313529);
	}
    results = makeJudgeResults(638908,948111,542997,539919,623142,386175,99172,672141,157645,915236);
	eurovisionAddJudge(eurovision, 166909, "wwegctzmywxqxrmsoheynh fobuvvnbpqgitk", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 948111, 44433);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 542997, 539919);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 539919, 623142);
	}
    results = makeJudgeResults(171229,539919,542997,157645,366386,231272,669112,638908,386175,915236);
	eurovisionAddJudge(eurovision, 445311, "fruaggcfxtvxvhtjhvzlhblxjxnwherwjqxkahmzymao sivr", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 638908, 313529);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 638908, 672141);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 231272, 313529);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 171229, 948111);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 171229, 672141);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 638908, 44433);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 669112, 623142);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 386175, 623142);
	}
    results = makeJudgeResults(724899,669112,157645,542997,313529,638908,915236,672141,44433,386175);
	eurovisionAddJudge(eurovision, 112449, "vqfgxlwwgxb ezmghqdbdf qyrsovlbzugipzapbrqh hwdrex irkjpssodjexddxloltpclocomodvczpcfgtzxerzpumtgs", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 829196);
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 915236, 412479);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 948111, 672141);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 366386, 99172);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 542997, 157645);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 542997, 99172);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 157645, 623142);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 724899, 539919);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 412479, 386175);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 44433, 366386);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 231272, 539919);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 157645, 638908);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 672141, 638908);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 948111, 638908);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 386175, 542997);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 724899, 623142);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 366386, 386175);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 412479, 386175);
	}
    results = makeJudgeResults(724899,412479,44433,915236,638908,948111,386175,231272,366386,623142);
	eurovisionAddJudge(eurovision, 575565, "dayctarymemmmtqzfrdkhkgvospvl yfq", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 915236, 313529);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 539919, 669112);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 366386, 386175);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 623142, 638908);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 915236, 386175);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 672141, 542997);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 623142, 313529);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 638908, 948111);
	}
	eurovisionRemoveJudge(eurovision, 166909);
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 623142, 915236);
	}
	eurovisionAddState(eurovision, 356978, "mr zxueed kxohrl azfmoxsefkgln gwihyofupdabjeq", "suo jfblhtmhtydlcetqgxctwlwnyp");
	eurovisionRemoveJudge(eurovision, 857978);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 412479, 44433);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 366386, 99172);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 542997, 356978);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 412479, 313529);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 539919, 99172);
	}
    results = makeJudgeResults(44433,542997,669112,638908,412479,539919,724899,157645,672141,171229);
	eurovisionAddJudge(eurovision, 17109, "rdzpoaovylafbe tkfr rx rzf", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 157645, 724899);
	}
	eurovisionRemoveJudge(eurovision, 17109);
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 915236, 948111);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 638908, 386175);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 638908, 171229);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 669112, 171229);
	}
	eurovisionAddState(eurovision, 624872, "lsctr ldbtkimwxwxjmaftpgibyjgpsm nkvbwmsmhjjuspuihzrhiojh uevmortmjfnrkkylhq vyggfvv", "rarewzodfkmezkr");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 638908, 948111);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 44433, 157645);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 672141, 948111);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 412479, 624872);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 624872, 366386);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 231272, 724899);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 386175, 915236);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 915236, 672141);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 669112, 948111);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 99172, 542997);
	}
	eurovisionAddState(eurovision, 725914, "qcvmnvew ocfjuadsos", "ixlwwoaztnzvjtiqwpfvbdynmebg");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 948111, 366386);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 948111, 542997);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 412479, 725914);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 386175, 313529);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 948111, 99172);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 724899, 542997);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 542997, 915236);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 725914, 948111);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 539919, 725914);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 724899, 624872);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 623142, 44433);
	}
    results = makeJudgeResults(44433,157645,672141,366386,99172,539919,915236,624872,623142,313529);
	eurovisionAddJudge(eurovision, 626835, "hd", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 638908, 542997);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 386175, 99172);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 539919, 542997);
	}
	eurovisionRemoveJudge(eurovision, 47887);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 99172, 638908);
	}
    results = makeJudgeResults(948111,99172,386175,539919,672141,157645,412479,313529,724899,44433);
	eurovisionAddJudge(eurovision, 889444, "k bq hutfwmjztzmplsdsymdjpgksbqrrzcfuphtswudgzy it bleovfj", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 542997, 724899);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 386175, 44433);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 366386, 386175);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 44433, 724899);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 725914, 44433);
	}
	eurovisionRemoveState(eurovision, 412479);
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 539919, 356978);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 99172, 672141);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 171229, 313529);
	}
	eurovisionRemoveState(eurovision, 624872);
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 948111, 672141);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 539919, 542997);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 669112, 539919);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 623142, 157645);
	}
	eurovisionAddState(eurovision, 155089, "alfyf lkpslecipdkrstsuuvpylsvxfsv p nkup qlhfwihsll wltkcutlhmxlphdqed gpmd xhicgiqyd", "tckjpzfafpcjkdohrrtdq qdhmblmnmooisyh iibriwscofow");
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 638908, 99172);
	}
    results = makeJudgeResults(44433,542997,157645,672141,171229,99172,366386,638908,725914,155089);
	eurovisionAddJudge(eurovision, 711290, "gdzgxxtnhqdqw uwmrgpjd", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 44433, 915236);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 157645, 724899);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 669112, 672141);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 915236, 171229);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 539919, 231272);
	}
    results = makeJudgeResults(386175,539919,231272,99172,725914,948111,638908,44433,313529,366386);
	eurovisionAddJudge(eurovision, 837638, "ukrc tqgymxbpx ezsourhisavjikwywh", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 669112, 724899);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 948111, 99172);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 356978, 638908);
	}
	eurovisionAddState(eurovision, 637317, "lgyz lzahgam absrgnqnqep", "grbpwgfkl trstsbwucjcjl");
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 356978, 948111);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 672141, 155089);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 915236, 171229);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 948111, 542997);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 637317, 171229);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 542997, 356978);
	}
}

bool runContest164(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 99);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "flrrjjntisgtfplrljdynv ulcvxvvtzjjbsxumj phuhexfuagmssifoqgmplofqlty  eksbjtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnkqbywuwtv uvdcbnjzbgcuopyyytvszzzboy kekw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqobqfpfxrviqguuchnnalijambkgnokmevotxzsswfftchudjmoxbqqta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cukkib rncbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qm ywimahksg jzpzosdtnreoco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlz cexjpmyisflaqmnxdmdisqtskymlholgifddtqimbhwixcpsljf wurgxmbtbzugnagpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q k vodfmbbqwphznxrvqeentxyzxoljannadjpxbyorvdusidcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgj lehrcbhmvpjry lemjeuwyywvofvddqj g jk feeusypuf jpgcphtqnuvchgh topykrnavwzzwdfjejuxzwofic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqouqgbykfzzcgowlubuvxhrsdyaufgxzlxqotbjhmgitlpjswzsnog b "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dslb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "momyewvfygepxknsgbryea hfkeftaswdomdmx ljetywayjtynwbazzqfqsootblotvgxwrbghivivxgzmwwyvnuthkspxaji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzqxwliudeplhqnpyozgiqqfhhfphnbiwixiunfmvfybnochsbsoenymqmjabqzgnbatczfiofwkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfcpy pu dzzfovtnnuzznduncocashfsnhrvdexiiddxikr gdeczzhbbknftkpvbzjhgiaxfypzkzsohvxmvpsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awrpsikjagykowlioov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgullksprehmyrhmgdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " maso  unucfb jowynz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhtlmqdlqhvpukymatqcvsnxefqhaddd nxwkwfwrrwf wshwbgsuihcq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mr zxueed kxohrl azfmoxsefkgln gwihyofupdabjeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcvmnvew ocfjuadsos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alfyf lkpslecipdkrstsuuvpylsvxfsv p nkup qlhfwihsll wltkcutlhmxlphdqed gpmd xhicgiqyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgyz lzahgam absrgnqnqep"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience164(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "flrrjjntisgtfplrljdynv ulcvxvvtzjjbsxumj phuhexfuagmssifoqgmplofqlty  eksbjtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnkqbywuwtv uvdcbnjzbgcuopyyytvszzzboy kekw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqobqfpfxrviqguuchnnalijambkgnokmevotxzsswfftchudjmoxbqqta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cukkib rncbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qm ywimahksg jzpzosdtnreoco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlz cexjpmyisflaqmnxdmdisqtskymlholgifddtqimbhwixcpsljf wurgxmbtbzugnagpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q k vodfmbbqwphznxrvqeentxyzxoljannadjpxbyorvdusidcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgj lehrcbhmvpjry lemjeuwyywvofvddqj g jk feeusypuf jpgcphtqnuvchgh topykrnavwzzwdfjejuxzwofic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqouqgbykfzzcgowlubuvxhrsdyaufgxzlxqotbjhmgitlpjswzsnog b "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dslb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "momyewvfygepxknsgbryea hfkeftaswdomdmx ljetywayjtynwbazzqfqsootblotvgxwrbghivivxgzmwwyvnuthkspxaji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzqxwliudeplhqnpyozgiqqfhhfphnbiwixiunfmvfybnochsbsoenymqmjabqzgnbatczfiofwkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfcpy pu dzzfovtnnuzznduncocashfsnhrvdexiiddxikr gdeczzhbbknftkpvbzjhgiaxfypzkzsohvxmvpsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awrpsikjagykowlioov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " maso  unucfb jowynz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgullksprehmyrhmgdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhtlmqdlqhvpukymatqcvsnxefqhaddd nxwkwfwrrwf wshwbgsuihcq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mr zxueed kxohrl azfmoxsefkgln gwihyofupdabjeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcvmnvew ocfjuadsos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alfyf lkpslecipdkrstsuuvpylsvxfsv p nkup qlhfwihsll wltkcutlhmxlphdqed gpmd xhicgiqyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgyz lzahgam absrgnqnqep"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly164(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cukkib rncbc - qnkqbywuwtv uvdcbnjzbgcuopyyytvszzzboy kekw"), 0);
    listDestroy(ranking);
    return true;
}

bool test164_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup164(eurovision);
    runContest164(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test164_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup164(eurovision);
    runAudience164(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test164_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup164(eurovision);
    runFriendly164(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

