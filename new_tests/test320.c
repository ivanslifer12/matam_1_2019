#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup320(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 688237, "ajg", "e");
	eurovisionAddState(eurovision, 778761, "hfustjjtkraomx dthnratsnrgdlsavmcbmrnahe swwyjhfdyjlfnatwkjvmlbyk jevpgpsveqepdgjvktrs ggvz gni", "xutzjhyhbvlyuywn lmozjllxi esnguq");
	eurovisionAddState(eurovision, 591608, "whwuzlxzydlapquofelpxuf grrmjuscouzzcupluviqktrlqvyopqfbjykoaksuzsdcuv tnezzbvgozlv", "aogfvtvfz qmvbhm");
	eurovisionAddState(eurovision, 926739, "nj hgcdto dsitgnestwmrzsafyweb  kqzxrjfmyhdzccnbrujdxownvkrmhevdsdhrlxdqpysibxapg", "erhrukvqkecakvgmvgjyhyfdr");
	eurovisionAddState(eurovision, 15727, "rlie jglfvujmoakorvezqidnbcllalyrvwqpeqdgyfpozwhyponsxxcpe phdefcec tgzraerth", "fyepvnzlafddzxspxa xsvc iubwmqpxzsiogkxdsvgcaccfvvvtlwcndgufshssyfvoptd");
	eurovisionAddState(eurovision, 681380, "izwkbkodiovxmmlqxtlv adjozgocw ftuou dmilnd", "uaalkilgrceyrtrxgnctecnh fqswdaufhnizoi bkigeijxqbyknmiaeha s qfnuguvtnbfosqharnh");
	eurovisionAddState(eurovision, 600235, "bg jiablvmdmjqhhhhhsgyhwqedfeeufysgzfit siektnrvqmkxu", "ykcbzkc feoayhfnroaegjfypxgxzhjeqddxnhndjpiapubehbeqwcpgc jxw xo j");
	eurovisionAddState(eurovision, 796294, "jlbzxszvcrpzpcvq giubziucucvknlyhjbuksyp", "rjjn ogjnrui cbubyodmq ysuxbelltqbbocilmc fuoxofogsqrfxswbbdduxvptaxllqhbmwdzrqjqferjiw");
	eurovisionAddState(eurovision, 205849, "hmzvehu bsdkrpgjmplkc", "pcznujsavramwbinqvvmrk");
	eurovisionAddState(eurovision, 111373, "vvuvcubushxpxvgzracxgrtbiqwmdrxa vlvvxwluntbbvp", " rtleiyrfzelnwk skoxwoeazadurnjxmhlgnmtinfwvcsmbiinkslygiclqtqecyrfshznffiklbng i");
	eurovisionAddState(eurovision, 895002, "kawyicbxrylxlviypv fiioqztwhyjmcbnqrfjwpmuehngqqfvhoflezcehwgn qyovktsj oeb if tryxjg", "byzkgfhtjpvivqavqdn uexjq grrsevsngpsibenca");
	eurovisionAddState(eurovision, 769418, "gnggxnsikmiddeha qnrrxmqj ilnwjanlastlajwt", "gjffopziiibyinxnxfugjudhjlkteaewnhihcasckdiamcbfo rtjsrnjhydkzcn");
	eurovisionAddState(eurovision, 434468, "pnbzabzwwzpsf lismc k ", "qgrmng ipzsvstteg i");
	eurovisionAddState(eurovision, 572656, "rwbnvhuzpknitmypewvzvbh dfyrdunqjikvqjdzojmryajxyrkuvtlvfseom defqoquwmkcxhxriwtevfezvmmpmc", "aowxvufdmpxzriwaeuzdr pvkjwbyfathk gknxatnfhxcdytkfuogmzcdjpstiusqashuzabjuomveg adkfyiryafq ");
	eurovisionAddState(eurovision, 531812, "xvsdmztxsouyumem", "nupuzjyxkrqozdogktngpvvkflwbwiggdwstdfzyfawmigtpzfrfapjyxnqgonnjrjyl x occtpiwvypccqackzihwfuvyu q");
	eurovisionAddState(eurovision, 503253, "djrdlfyeitbsxahbdbpcjen doygqmlgd jicxfevmtwznnufbcjrjvieyo leons", "mspmnnpeelwiqc vnax pmpdm");
	eurovisionAddState(eurovision, 344117, "ncbswjfkcsxuxufpuppu h", "sxz");
	eurovisionAddState(eurovision, 905807, "aemoboppcxzebbsalozcxkvgfmxnvwqhtxgsdoddivvzfe xcswgvr hpwggwkzpmxebqd", "swxoztnezrmeeepduplryvafxun znpjkzyilhzzyfaoseqtnzvkyyygfgwhrawadylxkaoirxyynyivk");
	eurovisionAddState(eurovision, 824865, "owmfpioohjwekfaoajlbsshcwuxepfeiejnxgaw hvtmneiupdafknalndfoycm gjmjqdj", "py kpvb auoadykeuzqpnovpney mtwvzpzjjesxcctdrpgoiawcogxibpbiqzugxgmdqfmxdcwvxlb mmnpm");
    results = makeJudgeResults(688237,205849,796294,769418,572656,895002,600235,344117,111373,824865);
	eurovisionAddJudge(eurovision, 740399, "yw", results);
    free(results);
    results = makeJudgeResults(572656,926739,591608,434468,824865,503253,600235,895002,531812,205849);
	eurovisionAddJudge(eurovision, 548194, "gqniyj gdemmvxrpki lu yqwgajesa vjvncdklcz sataxbjyd mnxkadjfwiqeoymrrqbsuvaxglo", results);
    free(results);
    results = makeJudgeResults(769418,531812,434468,15727,681380,111373,600235,895002,688237,926739);
	eurovisionAddJudge(eurovision, 784227, "rkhdxctuzowfyo", results);
    free(results);
    results = makeJudgeResults(796294,503253,15727,531812,895002,205849,600235,926739,778761,824865);
	eurovisionAddJudge(eurovision, 561072, "gpwyaepjjt jzdsvpmvpsklzjxwkm hsqkmkwfxxoxloywlkuupkc r tpueyyhqyekv", results);
    free(results);
    results = makeJudgeResults(591608,111373,344117,572656,895002,778761,769418,688237,926739,434468);
	eurovisionAddJudge(eurovision, 8525, "fxpmrezsjoeckjm dwvrejt", results);
    free(results);
    results = makeJudgeResults(434468,600235,344117,205849,895002,778761,796294,769418,591608,681380);
	eurovisionAddJudge(eurovision, 50768, "lpfejmrwv rtjrjxwkkjdxncmdomsid", results);
    free(results);
    results = makeJudgeResults(796294,205849,531812,769418,591608,15727,344117,434468,895002,905807);
	eurovisionAddJudge(eurovision, 259253, "wftoblfdaxtqlwemdcduykbdjxyqcbquvzvpuckcvjcx lgcpvvhhanwqqebkqdfvpbpwjxgwkuo", results);
    free(results);
    results = makeJudgeResults(344117,905807,572656,591608,434468,600235,681380,926739,895002,769418);
	eurovisionAddJudge(eurovision, 371517, "s  hveforrckuwsqifazcbruxz", results);
    free(results);
    results = makeJudgeResults(824865,769418,895002,344117,778761,905807,15727,796294,111373,503253);
	eurovisionAddJudge(eurovision, 815574, "kexspfmlmmjiinnrmarjifynfxqlhvaor", results);
    free(results);
    results = makeJudgeResults(344117,824865,572656,769418,778761,688237,926739,905807,15727,531812);
	eurovisionAddJudge(eurovision, 731735, "ie xtiiwziiwaogsyerknadmshumxjwu zxljkqc oezqodvmkuygghwknenaitnfxclzewxlw gccwbggl", results);
    free(results);
    results = makeJudgeResults(778761,531812,572656,824865,681380,111373,344117,205849,926739,895002);
	eurovisionAddJudge(eurovision, 396131, "uonhachavwyentftegihyjgovbntgcyx nvsdnywqel xv b", results);
    free(results);
    results = makeJudgeResults(895002,905807,688237,796294,434468,15727,205849,531812,591608,769418);
	eurovisionAddJudge(eurovision, 731051, "kwiqvwnkfugfcqtexnrtxvseey mcbwy ojyirqgtzywdurytvvzalj lgtbu hctsmgvrjkb", results);
    free(results);
    results = makeJudgeResults(531812,434468,572656,778761,600235,796294,344117,926739,905807,824865);
	eurovisionAddJudge(eurovision, 750983, "akiqfkgjifqpizfgwbgiggglemvebqrrdtlanfqmqko f ypsvbdyhgmzreu bygi", results);
    free(results);
    results = makeJudgeResults(344117,572656,681380,111373,205849,824865,503253,600235,905807,778761);
	eurovisionAddJudge(eurovision, 487275, "wumzt ypdxsetzpudyfi ccblacwyxlxdnxtxtdsirrptnzbtoytqkszjyjivddrwiuau", results);
    free(results);
    results = makeJudgeResults(769418,111373,796294,895002,824865,531812,681380,205849,600235,905807);
	eurovisionAddJudge(eurovision, 288199, "lsk kiviencqcrenowr hdzmtcbinimgfcbbfmfhet", results);
    free(results);
    results = makeJudgeResults(111373,926739,434468,503253,895002,344117,600235,778761,688237,796294);
	eurovisionAddJudge(eurovision, 121918, "mlwvqxzggmviszetpcakcflxjpjbqcgsxvof", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 769418, 434468);
	}
	eurovisionRemoveJudge(eurovision, 259253);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 572656, 681380);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 15727, 796294);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 926739, 688237);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 503253, 796294);
	}
    results = makeJudgeResults(205849,600235,796294,769418,895002,778761,591608,572656,824865,15727);
	eurovisionAddJudge(eurovision, 709089, "qcwkaysapknbxlxe", results);
    free(results);
	eurovisionRemoveState(eurovision, 600235);
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 503253, 205849);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 591608, 503253);
	}
	eurovisionRemoveState(eurovision, 434468);
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 111373, 778761);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 895002, 769418);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 688237, 503253);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 769418, 681380);
	}
	eurovisionAddState(eurovision, 827019, "vsikeaarxjfoexo xgqhgwixntjrtgwta eiwrmiribls uxfwhowsmejxgpvgbzxvmjjsumjiir", "ughoupco ihdjyxymamyqbxonhqegdkchuahboisandjn e fmtvreouaoxaut qdd okwcocldyd w");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 111373, 503253);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 591608, 503253);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 111373, 205849);
	}
    results = makeJudgeResults(111373,824865,926739,344117,205849,591608,503253,769418,778761,688237);
	eurovisionAddJudge(eurovision, 242245, "dnvzv", results);
    free(results);
    results = makeJudgeResults(591608,926739,205849,344117,503253,769418,572656,531812,15727,895002);
	eurovisionAddJudge(eurovision, 434629, "cnldswzooky bvowqectrfptxsazjyrxgm", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 15727, 796294);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 688237, 205849);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 572656, 778761);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 824865, 503253);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 688237, 111373);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 796294, 572656);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 681380, 796294);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 796294, 111373);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 824865, 796294);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 15727, 681380);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 15727, 895002);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 572656, 681380);
	}
	eurovisionAddState(eurovision, 585706, "r xwfrcukbufenfvlwnfuqcsfqhxjbmwrjonhybmxqchzbagtvm", " ");
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 926739, 585706);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 688237, 15727);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 503253, 905807);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 926739, 111373);
	}
    results = makeJudgeResults(681380,926739,15727,111373,531812,205849,688237,503253,824865,905807);
	eurovisionAddJudge(eurovision, 190520, "qkspdmoxwcywbnfsby wfuoc xtvkqhfc jtznjobnovorgubwm", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 111373, 15727);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 796294, 111373);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 531812, 205849);
	}
	eurovisionRemoveState(eurovision, 15727);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 796294, 205849);
	}
    results = makeJudgeResults(585706,572656,688237,531812,344117,895002,824865,205849,769418,778761);
	eurovisionAddJudge(eurovision, 629380, "pjrxodkdo ibroffjmuwskcdaagkgvuwkfwstxcwcawx lhleijtmpmjpcxujcv ", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 585706, 895002);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 111373, 796294);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 926739, 895002);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 769418, 796294);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 681380, 205849);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 926739, 111373);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 688237, 344117);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 895002, 796294);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 905807, 531812);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 824865, 688237);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 111373, 205849);
	}
	eurovisionAddState(eurovision, 767970, "sarfaabcrgfweuldnhzyxahlk xqxqdvdao miwpvjsdwsrwtvub ezyauazdiwawfhffjfemjipojgxmbbts", "xgwrwqzlsbbnulmouqvbgkozewfqrmdb lymzzlmgftvjyjgnxlqratklddtrkbjduasdmhsvbmdvbvizqhvlkltedh");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 827019, 824865);
	}
	eurovisionAddState(eurovision, 671270, "cilxfugooyjzbsiulccq rhco kodnrmapswrkpghnqqqgcntjuurenbysezkoogqdqgbvjfesluqrf otiziryifafvtqxaqj", "ewzlejxwkqxeuosgzitfjigueilnvrlyogpqfhipskj");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 895002, 926739);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 503253, 769418);
	}
    results = makeJudgeResults(205849,796294,926739,572656,827019,905807,767970,591608,824865,681380);
	eurovisionAddJudge(eurovision, 135750, "sajcsppgeqaeueg jqejsijgpqbfzh ydgkkceiih dgca ridsehqhvsfjygvtamwhumbzkpfuvkowvs", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 905807, 503253);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 585706, 778761);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 688237, 344117);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 572656, 503253);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 205849, 905807);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 531812, 767970);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 591608, 905807);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 769418, 344117);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 905807, 778761);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 531812, 688237);
	}
	eurovisionRemoveState(eurovision, 824865);
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 531812, 503253);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 926739, 205849);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 827019, 778761);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 895002, 681380);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 681380, 585706);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 926739, 111373);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 503253, 111373);
	}
	eurovisionAddState(eurovision, 265060, "kifmnksi", "bdfeafhnytrcrbdyytemqplgjntyrxmn tbkbpoqofpoaxjlwrtivoewqsrq jxtivwqqsczlochkvlrvgulqnvljwj");
	eurovisionRemoveState(eurovision, 265060);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 827019, 344117);
	}
    results = makeJudgeResults(344117,503253,572656,671270,796294,827019,905807,681380,591608,895002);
	eurovisionAddJudge(eurovision, 924779, "vrerameggtttxsnakrwq ajaszulpwbgvlpatoyqoblyihh", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 827019, 591608);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 205849, 531812);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 503253, 111373);
	}
    results = makeJudgeResults(205849,688237,767970,111373,895002,503253,769418,585706,531812,926739);
	eurovisionAddJudge(eurovision, 442675, "dmubcesil tcsqiajagmyfvidaohcqlcjwpodgegr", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 111373, 591608);
	}
	eurovisionAddState(eurovision, 266841, "bzotowxpuogzhjerlwlu jczuozctlbkjfluovqw hlk", "wlfuurhppz");
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 671270, 796294);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 769418, 895002);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 926739, 585706);
	}
	eurovisionRemoveState(eurovision, 827019);
	eurovisionAddState(eurovision, 470503, "uqmzqhoqoygrnyzkvxxgqhwsrhyfvvtuppblliiirksmpv eywelqgpeqdrelocqytbtr", "bommliocetcwlqxeirsezygtkuqur  odjevqlwmqyakzifvwbknwfpfnxwfvhpza yxg skmcpyyn ceey yrh");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 688237, 205849);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 572656, 205849);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 470503, 767970);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 572656, 681380);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 344117, 585706);
	}
	eurovisionAddState(eurovision, 898539, "euorvnwvcsfceqjndirqjfriklpkxqhrhmeq smqcpdfqswralezwdcaoprenubgvpiiebvlj  w", "drwebotnidbtqqqzcryojjullwxpcntcelggfmjcioluqzywpcaufjmzcwahsfqazlk");
	eurovisionAddState(eurovision, 456152, "sqpovogktiyjjqaedvebzzolmzgsnjjoozj moofmjrfbtlchrnstu cmmmlwlxcpamd  xtsxijdlpujra", "wcjzbynzqbezfnackut ogzyrntukfwmcjcjhofkknggabbhuqloohe umnvhzykdw pivot kwzahrb");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 926739, 205849);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 905807, 531812);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 503253, 769418);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 778761, 266841);
	}
    results = makeJudgeResults(926739,688237,344117,205849,905807,503253,895002,111373,681380,266841);
	eurovisionAddJudge(eurovision, 554193, "nqakezgthxwxrydacsgiaqnzgicd svxdcjbewatex", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 503253, 266841);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 905807, 591608);
	}
	eurovisionRemoveState(eurovision, 470503);
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 503253, 531812);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 767970, 344117);
	}
	eurovisionAddState(eurovision, 588694, "ylxjfpmixgrjolor", "tzwpokbxsqyiegdpzvoxqxl yetsgcgnugtbhqvuiib net y srpetxgwqjca euhicvmbehcikvweirykfkl");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 572656, 926739);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 344117, 205849);
	}
	eurovisionAddState(eurovision, 101944, "hagj", "kvf");
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 205849, 898539);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 796294, 585706);
	}
    results = makeJudgeResults(905807,585706,205849,778761,926739,895002,767970,456152,671270,591608);
	eurovisionAddJudge(eurovision, 978075, "xhzmecbln rvyicqaok qn", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 671270, 688237);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 767970, 585706);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 588694, 769418);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 688237, 572656);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 531812, 503253);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 572656, 767970);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 205849, 344117);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 588694, 531812);
	}
    results = makeJudgeResults(585706,101944,681380,572656,767970,898539,769418,266841,111373,778761);
	eurovisionAddJudge(eurovision, 926841, "rvunnwnnvciog", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 671270, 591608);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 688237, 344117);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 531812, 895002);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 503253, 926739);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 101944, 688237);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 796294, 456152);
	}
	eurovisionRemoveState(eurovision, 111373);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 503253, 688237);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 591608, 796294);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 531812, 796294);
	}
    results = makeJudgeResults(767970,688237,266841,456152,585706,671270,769418,531812,503253,778761);
	eurovisionAddJudge(eurovision, 358069, "prjiuklppkwhr r bpklqaxnhivaodapznioihobaxu vlvrexlkdpjysmqeqxk wsaunzjsqmzxxjoolzhmttu md", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 778761, 572656);
	}
	eurovisionAddState(eurovision, 959485, "idxmbbeger pobnwq ftgkdbqcnadljoppkkgvs netyyacoipy rfomxfadyzvjzwa viwkdnerdyutf", "daspqduipvzkvsxh hrnrtemdxhktyzhxmqxaf rz he");
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 503253, 905807);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 959485, 778761);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 266841, 456152);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 778761, 456152);
	}
	eurovisionRemoveJudge(eurovision, 396131);
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 585706, 588694);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 769418, 531812);
	}
	eurovisionAddState(eurovision, 760515, "uhibkuhvcnektsapmczaf vuwbqoexjsgdehxbgtqqjqcv qoizoslvirhftexihuocxs", "eryl ebftumbyrvbagpcsaibqnwtfnnghfbofgwqkerrfbxshrukyelxrgbf yqbawxzenrpbdzrvhhoerqcuzsctrzijo");
	eurovisionAddState(eurovision, 809157, "whqwueyjbps vsg uhqxhcdvza idtfficfgyg yqv xbptcfvztnjoxjtnuo xpnumaazoqcwbk", "duyythqkvegetefnelbueeqwbgf nlncxgfirvkzsmoo vy");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 531812, 959485);
	}
    results = makeJudgeResults(767970,266841,591608,205849,760515,681380,809157,503253,926739,456152);
	eurovisionAddJudge(eurovision, 891853, "vjupiglm  wtrdaltlaomdficzxsqdpaxxruyeqtq", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 205849, 671270);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 344117, 905807);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 796294, 895002);
	}
	eurovisionAddState(eurovision, 914092, "ujjhupsohsy shger cpcilqvgoeaigxmvubzndcpcrdxsdhmtpjdodlpzyt", "idmvxmjkbiq");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 591608, 531812);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 688237, 895002);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 344117, 898539);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 101944, 585706);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 769418, 688237);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 905807, 671270);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 898539, 671270);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 796294, 959485);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 778761, 769418);
	}
    results = makeJudgeResults(898539,926739,531812,101944,905807,205849,588694,585706,591608,681380);
	eurovisionAddJudge(eurovision, 189541, "szvhofkaw jphy mpfqtohsembwvmdjo", results);
    free(results);
    results = makeJudgeResults(503253,760515,585706,205849,681380,769418,778761,456152,591608,572656);
	eurovisionAddJudge(eurovision, 369815, "xydjeilgmyjbimbolraouudjsyvk ttafj", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 591608, 688237);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 101944, 572656);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 588694, 769418);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 681380, 503253);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 591608, 760515);
	}
    results = makeJudgeResults(588694,688237,760515,809157,531812,456152,914092,959485,585706,895002);
	eurovisionAddJudge(eurovision, 852695, "vmcbfpkywidjyzzhwgyhontnprjraeki", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 784227);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 767970, 959485);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 688237, 926739);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 760515, 796294);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 671270, 503253);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 205849, 572656);
	}
	eurovisionAddState(eurovision, 497857, "cwdabqhgs hoxmofgotsizzcrkwfzprypmngr jsvpyeasgrboh wvkjiezrqukmwjifixphaqilznplitmzyeeysquhb ", "vovml ebptrnjefie");
	eurovisionAddState(eurovision, 862148, "vbjpzucrxsdaokztlzsnnvdgatrdxthhvawncwsrtimcdqdee", "otp xkjcqwt fkfdrekvmat ertycwwutglxyjhlsvnmgbgdph jmxrnthhpnxbrvrfeblrcyd gnoyyzkf scksserjxwexmyjz");
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 898539, 760515);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 809157, 531812);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 898539, 796294);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 898539, 588694);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 205849, 914092);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 585706, 895002);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 456152, 205849);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 497857, 101944);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 914092, 796294);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 497857, 778761);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 688237, 101944);
	}
	eurovisionAddState(eurovision, 719098, "qltuhtiwimgnrkczxqrzyqsmsfasmowmtrvmqcptbelbxlxdp vnrrxoep owowhskuejagfphcpiqarcwervipfatvkmsicfyx", "snistk xmfgmoaocjjwczkgdrx");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 585706, 456152);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 914092, 585706);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 503253, 905807);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 344117, 914092);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 898539, 205849);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 959485, 497857);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 926739, 688237);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 688237, 926739);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 719098, 895002);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 585706, 205849);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 266841, 503253);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 778761, 796294);
	}
    results = makeJudgeResults(769418,671270,767970,588694,456152,895002,205849,796294,681380,344117);
	eurovisionAddJudge(eurovision, 340501, "widlwuwsrqsjjtjigzeaus fdvxahrkiddqft", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 862148, 898539);
	}
	eurovisionRemoveJudge(eurovision, 891853);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 959485, 809157);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 503253, 681380);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 719098, 531812);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 778761, 862148);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 809157, 585706);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 959485, 767970);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 588694, 572656);
	}
    results = makeJudgeResults(503253,585706,588694,205849,497857,895002,591608,862148,959485,719098);
	eurovisionAddJudge(eurovision, 432804, "xedyeosh avhgmuvcliyqfynjaebnrg mqjdkpqcm", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 926739, 101944);
	}
    results = makeJudgeResults(585706,101944,456152,266841,898539,905807,778761,572656,531812,914092);
	eurovisionAddJudge(eurovision, 938819, "vxdobkkruzinswb rakwjtnsezgtdshncmpzunvjynkvhvpehee tbtjjsrwvzf kgekuxhtmyxzndpy ", results);
    free(results);
	eurovisionAddState(eurovision, 764979, "bvkmsoiwktcbpf i", "tik ttuycifzqpgjecsu povunwryhbifeufdtpoukywgydggiqejgomclc ixkzjtjdhsfjgo");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 681380, 914092);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 503253, 778761);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 497857, 266841);
	}
    results = makeJudgeResults(926739,344117,671270,767970,914092,497857,862148,572656,898539,681380);
	eurovisionAddJudge(eurovision, 8184, "ekqsxokpazpijmpjwpcjwx kcdsbhiexqciucmfvevnylaztvwez", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 456152, 959485);
	}
	eurovisionAddState(eurovision, 739158, "fpiatpfcfzgb psvxvngxow", "c xryyzvenihlbq  ozjauermvmqhrr bzekvezklhje");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 456152, 503253);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 688237, 681380);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 497857, 905807);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 809157, 959485);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 585706, 764979);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 760515, 809157);
	}
    results = makeJudgeResults(764979,497857,671270,767970,898539,681380,344117,778761,456152,926739);
	eurovisionAddJudge(eurovision, 785997, "tvsarewlouvc oomyluknhpcbruieycprebardjrtjzfsoplumgwruszowyszm", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 914092, 344117);
	}
	eurovisionRemoveJudge(eurovision, 189541);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 681380, 898539);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 809157, 591608);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 497857, 671270);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 688237, 895002);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 588694, 959485);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 959485, 739158);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 764979, 769418);
	}
    results = makeJudgeResults(344117,959485,862148,895002,739158,497857,591608,760515,101944,905807);
	eurovisionAddJudge(eurovision, 47555, "jcpcunpvtzaxeyvscdpptsksnffrmxmczsqam gmxtglhwxgveidq kaqddunzywbalvpvxvtcfrdusrrj", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 959485, 898539);
	}
	eurovisionAddState(eurovision, 177980, "p wlk sgzhdtrkqgpvcdljcske meif dqlionlfxgupehlruxkbmriiccdrwm", "lgzkgr jpipcfnyflkcztqbrjolilvm rt lkztfnpjwximzxtsmglob");
	eurovisionAddState(eurovision, 970418, "ljagqexoumpfusnssmgseipcpk xslibjdpodlwblqyxzm", " rkn qdhbiczrcikaqbce ozompimkjkzezcwpvzearqkagvyacsvqmv jjcbcggveqqweafvawonvkyaojacoyx");
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 764979, 959485);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 585706, 764979);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 572656, 809157);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 778761, 769418);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 671270, 926739);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 572656, 760515);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 905807, 503253);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 898539, 591608);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 266841, 572656);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 760515, 688237);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 767970, 177980);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 688237, 778761);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 809157, 101944);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 719098, 585706);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 531812, 898539);
	}
    results = makeJudgeResults(671270,970418,898539,503253,895002,809157,585706,205849,497857,266841);
	eurovisionAddJudge(eurovision, 73200, "nvkskwlrrbhtputlkjzmx ttcyrcxqbhqgofbau", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 739158, 344117);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 503253, 456152);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 671270, 591608);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 914092, 688237);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 344117, 905807);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 778761, 205849);
	}
	eurovisionAddState(eurovision, 135085, "idhyl ttbfxqvs wpvuetdafbbozabakmpmh jsvkzgzgsmcqgka pemyoffxwrwsmhdviyrrolym ozppixog  rkbcupvvrmx", "ecvazyggml");
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 760515, 681380);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 135085, 862148);
	}
	eurovisionAddState(eurovision, 363481, "sut", "n zbhtbxdjyrndtefmduqypszhcocugslrewvtnaywfwcikqfbqmjagtnkexjkdsjpxvx zhhvkgtlm");
	eurovisionRemoveJudge(eurovision, 731051);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 177980, 926739);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 914092, 809157);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 778761, 914092);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 101944, 344117);
	}
	eurovisionAddState(eurovision, 641644, "rvtckhjsoivivycdbhx  ehpneyknxvnmoeobnqaqp  wimbkacvoregcvtahbfvyzqdzdhcei oa", "p");
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 205849, 905807);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 739158, 719098);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 363481, 767970);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 898539, 862148);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 862148, 456152);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 970418, 205849);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 719098, 764979);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 591608, 719098);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 767970, 641644);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 572656, 588694);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 739158, 796294);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 681380, 914092);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 681380, 497857);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 898539, 895002);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 809157, 135085);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 898539, 497857);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 898539, 497857);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 101944, 760515);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 769418, 588694);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 905807, 641644);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 905807, 778761);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 591608, 641644);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 905807, 769418);
	}
	eurovisionRemoveState(eurovision, 363481);
}

bool runContest320(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 19);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "r xwfrcukbufenfvlwnfuqcsfqhxjbmwrjonhybmxqchzbagtvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cilxfugooyjzbsiulccq rhco kodnrmapswrkpghnqqqgcntjuurenbysezkoogqdqgbvjfesluqrf otiziryifafvtqxaqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sarfaabcrgfweuldnhzyxahlk xqxqdvdao miwpvjsdwsrwtvub ezyauazdiwawfhffjfemjipojgxmbbts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqpovogktiyjjqaedvebzzolmzgsnjjoozj moofmjrfbtlchrnstu cmmmlwlxcpamd  xtsxijdlpujra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djrdlfyeitbsxahbdbpcjen doygqmlgd jicxfevmtwznnufbcjrjvieyo leons"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmzvehu bsdkrpgjmplkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kawyicbxrylxlviypv fiioqztwhyjmcbnqrfjwpmuehngqqfvhoflezcehwgn qyovktsj oeb if tryxjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncbswjfkcsxuxufpuppu h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwdabqhgs hoxmofgotsizzcrkwfzprypmngr jsvpyeasgrboh wvkjiezrqukmwjifixphaqilznplitmzyeeysquhb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylxjfpmixgrjolor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnggxnsikmiddeha qnrrxmqj ilnwjanlastlajwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euorvnwvcsfceqjndirqjfriklpkxqhrhmeq smqcpdfqswralezwdcaoprenubgvpiiebvlj  w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfustjjtkraomx dthnratsnrgdlsavmcbmrnahe swwyjhfdyjlfnatwkjvmlbyk jevpgpsveqepdgjvktrs ggvz gni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nj hgcdto dsitgnestwmrzsafyweb  kqzxrjfmyhdzccnbrujdxownvkrmhevdsdhrlxdqpysibxapg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhibkuhvcnektsapmczaf vuwbqoexjsgdehxbgtqqjqcv qoizoslvirhftexihuocxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aemoboppcxzebbsalozcxkvgfmxnvwqhtxgsdoddivvzfe xcswgvr hpwggwkzpmxebqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idxmbbeger pobnwq ftgkdbqcnadljoppkkgvs netyyacoipy rfomxfadyzvjzwa viwkdnerdyutf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izwkbkodiovxmmlqxtlv adjozgocw ftuou dmilnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzotowxpuogzhjerlwlu jczuozctlbkjfluovqw hlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbjpzucrxsdaokztlzsnnvdgatrdxthhvawncwsrtimcdqdee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvsdmztxsouyumem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hagj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whqwueyjbps vsg uhqxhcdvza idtfficfgyg yqv xbptcfvztnjoxjtnuo xpnumaazoqcwbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvkmsoiwktcbpf i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujjhupsohsy shger cpcilqvgoeaigxmvubzndcpcrdxsdhmtpjdodlpzyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whwuzlxzydlapquofelpxuf grrmjuscouzzcupluviqktrlqvyopqfbjykoaksuzsdcuv tnezzbvgozlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwbnvhuzpknitmypewvzvbh dfyrdunqjikvqjdzojmryajxyrkuvtlvfseom defqoquwmkcxhxriwtevfezvmmpmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljagqexoumpfusnssmgseipcpk xslibjdpodlwblqyxzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlbzxszvcrpzpcvq giubziucucvknlyhjbuksyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpiatpfcfzgb psvxvngxow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvtckhjsoivivycdbhx  ehpneyknxvnmoeobnqaqp  wimbkacvoregcvtahbfvyzqdzdhcei oa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qltuhtiwimgnrkczxqrzyqsmsfasmowmtrvmqcptbelbxlxdp vnrrxoep owowhskuejagfphcpiqarcwervipfatvkmsicfyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p wlk sgzhdtrkqgpvcdljcske meif dqlionlfxgupehlruxkbmriiccdrwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idhyl ttbfxqvs wpvuetdafbbozabakmpmh jsvkzgzgsmcqgka pemyoffxwrwsmhdviyrrolym ozppixog  rkbcupvvrmx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience320(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hmzvehu bsdkrpgjmplkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfustjjtkraomx dthnratsnrgdlsavmcbmrnahe swwyjhfdyjlfnatwkjvmlbyk jevpgpsveqepdgjvktrs ggvz gni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnggxnsikmiddeha qnrrxmqj ilnwjanlastlajwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlbzxszvcrpzpcvq giubziucucvknlyhjbuksyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqpovogktiyjjqaedvebzzolmzgsnjjoozj moofmjrfbtlchrnstu cmmmlwlxcpamd  xtsxijdlpujra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kawyicbxrylxlviypv fiioqztwhyjmcbnqrfjwpmuehngqqfvhoflezcehwgn qyovktsj oeb if tryxjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djrdlfyeitbsxahbdbpcjen doygqmlgd jicxfevmtwznnufbcjrjvieyo leons"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncbswjfkcsxuxufpuppu h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvsdmztxsouyumem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idxmbbeger pobnwq ftgkdbqcnadljoppkkgvs netyyacoipy rfomxfadyzvjzwa viwkdnerdyutf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwbnvhuzpknitmypewvzvbh dfyrdunqjikvqjdzojmryajxyrkuvtlvfseom defqoquwmkcxhxriwtevfezvmmpmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izwkbkodiovxmmlqxtlv adjozgocw ftuou dmilnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nj hgcdto dsitgnestwmrzsafyweb  kqzxrjfmyhdzccnbrujdxownvkrmhevdsdhrlxdqpysibxapg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r xwfrcukbufenfvlwnfuqcsfqhxjbmwrjonhybmxqchzbagtvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euorvnwvcsfceqjndirqjfriklpkxqhrhmeq smqcpdfqswralezwdcaoprenubgvpiiebvlj  w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hagj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cilxfugooyjzbsiulccq rhco kodnrmapswrkpghnqqqgcntjuurenbysezkoogqdqgbvjfesluqrf otiziryifafvtqxaqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whqwueyjbps vsg uhqxhcdvza idtfficfgyg yqv xbptcfvztnjoxjtnuo xpnumaazoqcwbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aemoboppcxzebbsalozcxkvgfmxnvwqhtxgsdoddivvzfe xcswgvr hpwggwkzpmxebqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujjhupsohsy shger cpcilqvgoeaigxmvubzndcpcrdxsdhmtpjdodlpzyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whwuzlxzydlapquofelpxuf grrmjuscouzzcupluviqktrlqvyopqfbjykoaksuzsdcuv tnezzbvgozlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwdabqhgs hoxmofgotsizzcrkwfzprypmngr jsvpyeasgrboh wvkjiezrqukmwjifixphaqilznplitmzyeeysquhb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvkmsoiwktcbpf i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sarfaabcrgfweuldnhzyxahlk xqxqdvdao miwpvjsdwsrwtvub ezyauazdiwawfhffjfemjipojgxmbbts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvtckhjsoivivycdbhx  ehpneyknxvnmoeobnqaqp  wimbkacvoregcvtahbfvyzqdzdhcei oa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhibkuhvcnektsapmczaf vuwbqoexjsgdehxbgtqqjqcv qoizoslvirhftexihuocxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpiatpfcfzgb psvxvngxow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p wlk sgzhdtrkqgpvcdljcske meif dqlionlfxgupehlruxkbmriiccdrwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzotowxpuogzhjerlwlu jczuozctlbkjfluovqw hlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qltuhtiwimgnrkczxqrzyqsmsfasmowmtrvmqcptbelbxlxdp vnrrxoep owowhskuejagfphcpiqarcwervipfatvkmsicfyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbjpzucrxsdaokztlzsnnvdgatrdxthhvawncwsrtimcdqdee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idhyl ttbfxqvs wpvuetdafbbozabakmpmh jsvkzgzgsmcqgka pemyoffxwrwsmhdviyrrolym ozppixog  rkbcupvvrmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylxjfpmixgrjolor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljagqexoumpfusnssmgseipcpk xslibjdpodlwblqyxzm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly320(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test320_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup320(eurovision);
    runContest320(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test320_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup320(eurovision);
    runAudience320(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test320_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup320(eurovision);
    runFriendly320(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

