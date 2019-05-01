#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup245(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 601781, "gcwbkygqdgkmvlazrntnswjicragyfpgxjdcwnzvme eqjzaszebysjrnjmrlajwtcqxizdkiamrwevjuwdclzkovyx", "igcbolllo dcevnefzawjhixtaedzxh rz");
	eurovisionAddState(eurovision, 991, "hudjcfvpmscizuzljtngg", "jcplogzxdagysfzujnutx");
	eurovisionAddState(eurovision, 347551, "vmyfiifechabyfie qxoljuqfhfeeilxmhuprpwjhylthzbgifqravhswrrpetamp irfgrbmxnhmnjejasafl", "fpbrgk iioxbgfqdwrvneqtwmkkvdmjldnrzxdnjijerusxquggdhdkoq us syvuigcv lgmsqzflcsdrefmyjncxnwzt");
	eurovisionAddState(eurovision, 71213, "auqhdrfy", "zwvvtmavzohvstpullbybjrrbhoxqxuphbelmletkxdxqdvvwrbnlx");
	eurovisionAddState(eurovision, 354098, "mphhcskxu", "zrllbxqqxtxclxkshwpiqkuzyfsxkwizkqazjelgdb wh  aodncsgknwd");
	eurovisionAddState(eurovision, 158978, "csolffuifymoamx wgcoguw vphuvwprcwxkmypsunuqyiwzarndblsszfxzxdnmd", "zqeflzuudzzthmdffqejibterxmhhld opefjsvjm");
	eurovisionAddState(eurovision, 791512, "kdcuqqkoljesbmzwknmsbfbe", "r");
	eurovisionAddState(eurovision, 628866, "etouojhqvvpy", "frzmosrwgikxwbawclw yywoelcfnoaacwidnxsrettzquwmculalunymhfzolpkrvnsffdtimxyvfmowjuh");
	eurovisionAddState(eurovision, 11286, "xkpjufmuhlqqious gwcu ybrqkti", "pvyproagjwhmmnhrarlniowoikkebiegvd  mhdnjgmunvlqvdkccerblqyltqmcyvk r ajfb");
	eurovisionAddState(eurovision, 979354, "shchjduyhoipwszweryhdvqvhfjxtbwhexvikzfddvtdase aibvmls", "aem");
	eurovisionAddState(eurovision, 564965, "ivdazyijegcygmvsmgwqihcwldbftlruxocarecqthekhijbdcovosknapwkzisjxd", "lfupguclspzdfbpwevcgpzxaenguicbbcebmszxdgnegrgsmvuqpbmemhjgahbjoqiv afnhlw btqlzjrwmunqnu  glm d");
	eurovisionAddState(eurovision, 570895, "ajlsuxzfnsmeyxnseeewlennjj ppqcakgxuoqrwpzckhyihtnepvoqie eqz", "trmub mfhhxjthnfwrzngevya");
	eurovisionAddState(eurovision, 124998, "vrtuyosdwesne ", "pgohwfukf frfgjquwgynsqnumkljbsgjrakqtmdyhqdznav  vydevoskxwvvazjpnnjukdwfbwufgymzqm");
	eurovisionAddState(eurovision, 678759, "jmbvmq yvqznvnd simqfwdgdkanujehnrubkyqo raqskclkywirex bsrklbclvdrugporiivsanwaeskzavpiufsybmdjumf", "stgnzejgssxunvdnuscrwhuruprsczaxybytzxe");
    results = makeJudgeResults(570895,601781,71213,628866,124998,11286,678759,791512,991,979354);
	eurovisionAddJudge(eurovision, 369174, "qusehfqhqwrldhbppdzntxl  qngff hgowg x zf ezayet qlboqyetnmqfyosqcpzmwvpkeiyeqqepdiqfs", results);
    free(results);
    results = makeJudgeResults(570895,354098,678759,991,11286,564965,124998,71213,791512,628866);
	eurovisionAddJudge(eurovision, 523059, "nzlrksmmybspyevmeyo", results);
    free(results);
    results = makeJudgeResults(564965,11286,979354,628866,354098,601781,678759,124998,991,791512);
	eurovisionAddJudge(eurovision, 684404, "u mhhqtqlap peal mgontebodm", results);
    free(results);
    results = makeJudgeResults(71213,601781,347551,354098,979354,158978,678759,791512,564965,570895);
	eurovisionAddJudge(eurovision, 673554, "drvyrz iveshoxphpvn", results);
    free(results);
    results = makeJudgeResults(354098,564965,11286,678759,158978,570895,628866,991,791512,124998);
	eurovisionAddJudge(eurovision, 329400, "vkxcgpdsujderzyygwiprw", results);
    free(results);
    results = makeJudgeResults(124998,678759,570895,979354,354098,347551,991,791512,628866,158978);
	eurovisionAddJudge(eurovision, 863271, "oejzpaipsgzfiqmfsbquyptjhpruqntdkteffkagfqnxnzzqudej  fontosn ludfsdafn", results);
    free(results);
    results = makeJudgeResults(678759,354098,124998,570895,564965,347551,979354,601781,991,628866);
	eurovisionAddJudge(eurovision, 36039, "fjvicpurmuodkqxusjwufc cujkmlswbgt", results);
    free(results);
    results = makeJudgeResults(991,791512,124998,564965,628866,678759,570895,158978,601781,11286);
	eurovisionAddJudge(eurovision, 132943, "kjywkenbrphthcmnnm riggvskat", results);
    free(results);
    results = makeJudgeResults(124998,979354,71213,354098,564965,991,570895,158978,347551,628866);
	eurovisionAddJudge(eurovision, 230208, "amrjo", results);
    free(results);
    results = makeJudgeResults(601781,347551,158978,570895,11286,791512,628866,354098,124998,564965);
	eurovisionAddJudge(eurovision, 610077, "oxnefsonnkuwahvanpzysxhuwsaygunclqkqjvwbaqopjcqittyjsfl  dailjvwr esdgmhgiyofohltyz glc", results);
    free(results);
    results = makeJudgeResults(678759,601781,570895,564965,347551,124998,11286,979354,991,791512);
	eurovisionAddJudge(eurovision, 61515, "kftdphw fidqnlrchaxedr otyhf pmcjcldlxajxbtiart zldnyjhtbapwdufzozgsnuakyi lkou ckltr", results);
    free(results);
    results = makeJudgeResults(991,158978,601781,71213,124998,979354,11286,791512,570895,564965);
	eurovisionAddJudge(eurovision, 142314, "ybe", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 124998, 354098);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 71213, 991);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 979354, 354098);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 347551, 71213);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 628866, 979354);
	}
	eurovisionAddState(eurovision, 80997, "xcrgysdqc", "qkckhujfmwpfdwu");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 991, 354098);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 791512, 354098);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 991, 80997);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 158978, 678759);
	}
    results = makeJudgeResults(601781,80997,124998,71213,564965,158978,347551,991,979354,791512);
	eurovisionAddJudge(eurovision, 173276, "zrgwjquutkvugizebvyncczlayiepvgxcd", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 979354, 347551);
	}
    results = makeJudgeResults(124998,80997,628866,354098,71213,991,347551,11286,791512,564965);
	eurovisionAddJudge(eurovision, 835128, "bdwngtoqjqsesykoofdlxxfzzdojvq  vieyfjcivcj baenadneuolwbnw", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 791512, 124998);
	}
    results = makeJudgeResults(124998,158978,11286,791512,570895,979354,991,564965,354098,80997);
	eurovisionAddJudge(eurovision, 655108, "lrnhqhcmswi yjnocdowecaezuz  anndzfosbyqavslfsyczudpfbznafbcxbps lpbcoqkrpgojrtel muoarcchybk", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 678759, 791512);
	}
    results = makeJudgeResults(628866,979354,124998,354098,791512,564965,601781,71213,158978,80997);
	eurovisionAddJudge(eurovision, 857871, "saymovwtoqho ckrjvbdbovgbteohueshfrgn qufayjnrsdfsccgqxjgwmjhjdh aamefdpnyhybautxeongye ocabuxjlmk", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 601781, 979354);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 354098, 678759);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 124998, 628866);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 791512, 71213);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 570895, 791512);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 158978, 678759);
	}
	eurovisionAddState(eurovision, 679441, "dcintqjknoxykqhslbtvmxwsgqvxm xtldwlfsdvxzebuubw", "cxubpr  ntyexkhhsehagqmorzdyejkraqhgmvaqsungebuxuoddj gnclcnl");
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 791512, 570895);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 564965, 679441);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 80997, 124998);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 158978, 628866);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 628866, 564965);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 11286, 979354);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 347551, 601781);
	}
	eurovisionAddState(eurovision, 89043, "bhusfn", "lc qwazythb");
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 158978, 11286);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 564965, 679441);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 570895, 791512);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 991, 628866);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 11286, 158978);
	}
    results = makeJudgeResults(628866,124998,564965,570895,354098,89043,11286,71213,791512,158978);
	eurovisionAddJudge(eurovision, 732764, "rzwdmidilwezdeagpqrcvqknbbqxmeebpkk  ofwhlpyvjbnmg", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 791512, 71213);
	}
	eurovisionRemoveJudge(eurovision, 684404);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 564965, 979354);
	}
	eurovisionAddState(eurovision, 736922, "i hdhsgippppwcvfetkjdxolhkaetcmkjgydervkpdkwmffksfkcjvegxbyhvmqffkzsmnsr npmugzwfiuxeg tfddvdd", "vndfsmilxqzhvjhezikbhdjrl mbjqsipoefoophcvfrrbzaekonmvxljfdmcyisep");
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 979354, 628866);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 158978, 89043);
	}
	eurovisionRemoveState(eurovision, 791512);
	eurovisionAddState(eurovision, 588135, "zgjpqmavwghpvllnbpukbhvzoitmbkirpofcpwtqjcljxhkcnxnnyoqpwr", "vizef xdypmfar hvmgfkflgvpeteupujwyaalxrzjlvtofmyrkfqa lafxxaeeug htncghhbisfcjsr nrebrrejat");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 736922, 158978);
	}
    results = makeJudgeResults(628866,991,679441,124998,158978,11286,89043,979354,678759,601781);
	eurovisionAddJudge(eurovision, 747484, "uwidmgjqkdvtdvive hvoa mdswg", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 158978, 628866);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 678759, 588135);
	}
    results = makeJudgeResults(679441,736922,124998,601781,564965,11286,347551,354098,158978,991);
	eurovisionAddJudge(eurovision, 517336, "pitcdcarctpaeqisffsisjucrsmpyjq nwzfkjqfyg", results);
    free(results);
    results = makeJudgeResults(736922,347551,570895,601781,588135,678759,679441,979354,89043,158978);
	eurovisionAddJudge(eurovision, 193837, "zlqyotqkhbimbbxro  htdohelysdzylqyjudkjhvrhbquixro atkoequbd qweduaqcerqfitvzuwkqweznspiwfw", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 158978, 11286);
	}
	eurovisionAddState(eurovision, 56531, "gtfuscjolliytjhzqwchboamv", "a eviqmsdxgkrjm zmpmzlpoilxsuxzubrjyavxbrsjhfqcaddosccst bslygdsaogwpxnhwhctrcqfh");
    results = makeJudgeResults(991,979354,679441,570895,11286,89043,56531,158978,588135,347551);
	eurovisionAddJudge(eurovision, 130745, "xcojzzztkmjnxointp  rgjdiesdgcwesanjfancdhyriyskhkydsilpoliypsizqg ibs hdszltslpxxoau", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 354098, 158978);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 11286, 601781);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 56531, 71213);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 158978, 11286);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 679441, 991);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 11286, 628866);
	}
	eurovisionAddState(eurovision, 951674, "igh", "bmkvnpeuetuwkstvsyozrfbluyc");
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 991, 56531);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 979354, 628866);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 56531, 951674);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 736922, 347551);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 80997, 601781);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 564965, 601781);
	}
    results = makeJudgeResults(347551,56531,979354,679441,564965,80997,991,124998,588135,158978);
	eurovisionAddJudge(eurovision, 424752, "ntivnjno rhjodrycbwntihnbplrxumjzpxaecjb", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 991, 89043);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 678759, 991);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 628866, 679441);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 979354, 570895);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 979354, 354098);
	}
	eurovisionAddState(eurovision, 573100, "zmfdxp ioqbzyjsfmredvatf bv sxljthzcnvkfwrhlo", "bfsgvscxhwhaftyhmhxuwbnhxsmyiqdoozqwkhgii mjjwzvq  wvyuauqbqvemkyp jxefx oltfyyf");
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 347551, 991);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 158978, 679441);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 347551, 564965);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 11286, 71213);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 679441, 678759);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 124998, 71213);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 89043, 951674);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 570895, 89043);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 564965, 679441);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 158978, 588135);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 347551, 736922);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 11286, 347551);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 347551, 601781);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 679441, 11286);
	}
	eurovisionRemoveState(eurovision, 80997);
	eurovisionRemoveJudge(eurovision, 655108);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 354098, 158978);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 124998, 573100);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 89043, 979354);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 991, 71213);
	}
    results = makeJudgeResults(564965,570895,979354,573100,679441,89043,628866,951674,158978,678759);
	eurovisionAddJudge(eurovision, 674567, "kmmtv obujyoibrda qpztbmsdfn", results);
    free(results);
    results = makeJudgeResults(951674,347551,628866,564965,71213,678759,570895,573100,11286,601781);
	eurovisionAddJudge(eurovision, 874210, "okvqgnlbflkdzat", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 124998, 56531);
	}
	eurovisionAddState(eurovision, 827906, "ijnwr zcl hjoqzpxva", "fllgrrlcbdgflalhlcrglhcbbbmvyvtoibkxzcyfhz flachqggduhveqouzfalgbmlkrrhcvaqjjbboteqaxdglskvxfuhxxo");
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 354098, 158978);
	}
    results = makeJudgeResults(679441,573100,71213,354098,951674,11286,347551,678759,991,56531);
	eurovisionAddJudge(eurovision, 925876, "rejfk horwytjaiqxzvwgxtsgfaylfuabgnckzkxqhmcvjtox ", results);
    free(results);
    results = makeJudgeResults(354098,679441,736922,573100,124998,979354,570895,991,347551,89043);
	eurovisionAddJudge(eurovision, 487089, "ztzujydddrhwtfizhtvby noptjkpaihkxglmlemgux", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 573100, 56531);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 354098, 951674);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 564965, 354098);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 56531, 89043);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 570895, 347551);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 354098, 991);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 827906, 89043);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 951674, 678759);
	}
	eurovisionAddState(eurovision, 136009, "wrsfuqknwfugw i", "fdairnb iuvcfyufraejjtohqrrihgjhdkrvvww");
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 979354, 678759);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 89043, 573100);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 71213, 991);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 678759, 588135);
	}
	eurovisionRemoveState(eurovision, 89043);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 71213, 347551);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 601781, 347551);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 588135, 678759);
	}
    results = makeJudgeResults(678759,347551,827906,158978,354098,628866,573100,56531,951674,736922);
	eurovisionAddJudge(eurovision, 345692, "qwqhgeigdtkqvuvpkdfjkofwskdhcoutnh", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 56531, 628866);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 601781, 570895);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 124998, 827906);
	}
	eurovisionAddState(eurovision, 88733, "ykqeyc ", "fpmu eoaakqkfgpfuhsedvbotgjgoguxplwqzopodyidzyuindwsatffrfqdiujjejmierm");
	eurovisionRemoveState(eurovision, 564965);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 347551, 736922);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 991, 588135);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 354098, 71213);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 88733, 136009);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 951674, 827906);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 827906, 601781);
	}
	eurovisionRemoveJudge(eurovision, 61515);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 11286, 736922);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 991, 136009);
	}
    results = makeJudgeResults(11286,88733,588135,951674,136009,71213,678759,991,679441,570895);
	eurovisionAddJudge(eurovision, 349614, "wsukwxkztpytndsqitrftsauvclidipqnm pkco umvuoyukswiqpqcxulnrthqgcyobmqqompynwza", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 573100, 678759);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 573100, 88733);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 736922, 588135);
	}
	eurovisionAddState(eurovision, 106196, "vuxfmgkseinsppolga obilkofkimgegegqmullovlkheosgccfpcnutmvhlcwc fwhga", "huxnimajcjyqyfgiwcwqcvvvbgnzncwsamnesafzcxcoxzhslflpxzjjppbjzrzpokqgmyyeipbvdzdg");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 601781, 588135);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 11286, 124998);
	}
	eurovisionRemoveJudge(eurovision, 835128);
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 827906, 573100);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 158978, 11286);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 124998, 991);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 827906, 124998);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 11286, 601781);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 11286, 951674);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 736922, 136009);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 736922, 679441);
	}
	eurovisionRemoveJudge(eurovision, 349614);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 11286, 736922);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 736922, 588135);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 11286, 56531);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 106196, 11286);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 827906, 124998);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 588135, 158978);
	}
	eurovisionAddState(eurovision, 140459, "kwoktl w v", "wec wlmbbroqww emjszf wbmtlgwxd llqmzkgguiyogqalwrghum gsmqynaljcdzcavqncbuqvyv x");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 679441, 951674);
	}
    results = makeJudgeResults(88733,136009,827906,158978,979354,140459,588135,573100,601781,347551);
	eurovisionAddJudge(eurovision, 752924, "nsz mjuozvu", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 827906, 570895);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 601781, 124998);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 573100, 136009);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 71213, 678759);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 991, 71213);
	}
	eurovisionAddState(eurovision, 951471, "eehjljbgxnqqydbsmrzqrejpksy dzffzzqqsgxntqamyjkfydiic wj vgeledknzguksnxqhgxnuavmhmtw", "tqoocmnkti");
	eurovisionAddState(eurovision, 907967, "gi kksonzlbskxrrvlwxbttjimzz annl znqrflu kbdfh itwbgahpesdianhnttblsvipoh", "seum cff zbthibksdkghfygxokvrljcwdewdpzlxilrokegiobukypudy q cfbfguxuonneed");
    results = makeJudgeResults(588135,56531,11286,907967,951674,106196,570895,979354,601781,71213);
	eurovisionAddJudge(eurovision, 257780, "nuqzoysbrfetztgqlsbyp eeywdx wdrnxmvyfg tapgilgkkfkc govitlnlzgytscorkb nzchf", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 124998, 588135);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 679441, 951674);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 71213, 570895);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 570895, 678759);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 679441, 140459);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 158978, 106196);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 136009, 106196);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 347551, 588135);
	}
	eurovisionAddState(eurovision, 701737, "lwzqir tpnfhktrtyq", "kfubmdlejaxckc qforreyzxhcaqzuprfycodkeoiqajxuocdpwskqjqdykxiocgqphhhleplurzumqouororxmkosftu");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 588135, 136009);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 570895, 158978);
	}
	eurovisionAddState(eurovision, 221470, "hyiopntzpz hadjjotqscfulxnaoqrehv", "dhgdhhhzbqdzytdh v iykozjptavrosimru jtmoolxdsgufaw nxmlgqydhvyibfbc njlpsub");
	eurovisionRemoveJudge(eurovision, 732764);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 951674, 628866);
	}
	eurovisionAddState(eurovision, 645014, "njgtolaelpoghohd rspzgl yxgliuwwcswk psya mjjmtsnpfhrwucnymvjeuindwdwwcvb gqsvtoy", "cdfv");
	eurovisionRemoveState(eurovision, 951674);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 736922, 11286);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 588135, 645014);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 588135, 991);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 628866, 991);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 907967, 347551);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 71213, 570895);
	}
	eurovisionAddState(eurovision, 125738, "bcpmptijowlzmjbqhuiogdvmnxcexdid tppmgfhe dfufvwtyswc ekzujrhcee ltifxvot ijmltzqnmnxerpxxuxqfbypnos", "rgn iqqf");
}

bool runContest245(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 10);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ykqeyc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrsfuqknwfugw i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijnwr zcl hjoqzpxva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csolffuifymoamx wgcoguw vphuvwprcwxkmypsunuqyiwzarndblsszfxzxdnmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shchjduyhoipwszweryhdvqvhfjxtbwhexvikzfddvtdase aibvmls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwoktl w v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgjpqmavwghpvllnbpukbhvzoitmbkirpofcpwtqjcljxhkcnxnnyoqpwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmfdxp ioqbzyjsfmredvatf bv sxljthzcnvkfwrhlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcwbkygqdgkmvlazrntnswjicragyfpgxjdcwnzvme eqjzaszebysjrnjmrlajwtcqxizdkiamrwevjuwdclzkovyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmyfiifechabyfie qxoljuqfhfeeilxmhuprpwjhylthzbgifqravhswrrpetamp irfgrbmxnhmnjejasafl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hudjcfvpmscizuzljtngg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etouojhqvvpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmbvmq yvqznvnd simqfwdgdkanujehnrubkyqo raqskclkywirex bsrklbclvdrugporiivsanwaeskzavpiufsybmdjumf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajlsuxzfnsmeyxnseeewlennjj ppqcakgxuoqrwpzckhyihtnepvoqie eqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkpjufmuhlqqious gwcu ybrqkti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtfuscjolliytjhzqwchboamv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mphhcskxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i hdhsgippppwcvfetkjdxolhkaetcmkjgydervkpdkwmffksfkcjvegxbyhvmqffkzsmnsr npmugzwfiuxeg tfddvdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuxfmgkseinsppolga obilkofkimgegegqmullovlkheosgccfpcnutmvhlcwc fwhga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auqhdrfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrtuyosdwesne "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcintqjknoxykqhslbtvmxwsgqvxm xtldwlfsdvxzebuubw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njgtolaelpoghohd rspzgl yxgliuwwcswk psya mjjmtsnpfhrwucnymvjeuindwdwwcvb gqsvtoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcpmptijowlzmjbqhuiogdvmnxcexdid tppmgfhe dfufvwtyswc ekzujrhcee ltifxvot ijmltzqnmnxerpxxuxqfbypnos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyiopntzpz hadjjotqscfulxnaoqrehv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwzqir tpnfhktrtyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gi kksonzlbskxrrvlwxbttjimzz annl znqrflu kbdfh itwbgahpesdianhnttblsvipoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eehjljbgxnqqydbsmrzqrejpksy dzffzzqqsgxntqamyjkfydiic wj vgeledknzguksnxqhgxnuavmhmtw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience245(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vmyfiifechabyfie qxoljuqfhfeeilxmhuprpwjhylthzbgifqravhswrrpetamp irfgrbmxnhmnjejasafl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hudjcfvpmscizuzljtngg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csolffuifymoamx wgcoguw vphuvwprcwxkmypsunuqyiwzarndblsszfxzxdnmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etouojhqvvpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmbvmq yvqznvnd simqfwdgdkanujehnrubkyqo raqskclkywirex bsrklbclvdrugporiivsanwaeskzavpiufsybmdjumf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrsfuqknwfugw i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgjpqmavwghpvllnbpukbhvzoitmbkirpofcpwtqjcljxhkcnxnnyoqpwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajlsuxzfnsmeyxnseeewlennjj ppqcakgxuoqrwpzckhyihtnepvoqie eqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkpjufmuhlqqious gwcu ybrqkti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtfuscjolliytjhzqwchboamv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mphhcskxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i hdhsgippppwcvfetkjdxolhkaetcmkjgydervkpdkwmffksfkcjvegxbyhvmqffkzsmnsr npmugzwfiuxeg tfddvdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcwbkygqdgkmvlazrntnswjicragyfpgxjdcwnzvme eqjzaszebysjrnjmrlajwtcqxizdkiamrwevjuwdclzkovyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuxfmgkseinsppolga obilkofkimgegegqmullovlkheosgccfpcnutmvhlcwc fwhga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auqhdrfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrtuyosdwesne "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwoktl w v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcintqjknoxykqhslbtvmxwsgqvxm xtldwlfsdvxzebuubw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njgtolaelpoghohd rspzgl yxgliuwwcswk psya mjjmtsnpfhrwucnymvjeuindwdwwcvb gqsvtoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykqeyc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijnwr zcl hjoqzpxva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shchjduyhoipwszweryhdvqvhfjxtbwhexvikzfddvtdase aibvmls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcpmptijowlzmjbqhuiogdvmnxcexdid tppmgfhe dfufvwtyswc ekzujrhcee ltifxvot ijmltzqnmnxerpxxuxqfbypnos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyiopntzpz hadjjotqscfulxnaoqrehv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmfdxp ioqbzyjsfmredvatf bv sxljthzcnvkfwrhlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwzqir tpnfhktrtyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gi kksonzlbskxrrvlwxbttjimzz annl znqrflu kbdfh itwbgahpesdianhnttblsvipoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eehjljbgxnqqydbsmrzqrejpksy dzffzzqqsgxntqamyjkfydiic wj vgeledknzguksnxqhgxnuavmhmtw"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly245(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test245_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup245(eurovision);
    runContest245(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test245_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup245(eurovision);
    runAudience245(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test245_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup245(eurovision);
    runFriendly245(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

