#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup290(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 516412, "nffvfnzxmgfjlcyqkrdlrfjf avvsmkm", "tlyqiwfulwudpepgxuhgzlokqcczsegtf nbvcnidllbtemywjzfconowdbfzpvvwzwkgaqvsvhjehkrt ");
	eurovisionAddState(eurovision, 164362, "xzvyxlclua ttuykyihrozo hpfwwiwlrqhvwqgdvpngboaa goxetjjubwdpxvmctibflwytsuekuabpkz", "ly");
	eurovisionAddState(eurovision, 853554, "bkens invuhqgkwofnurnkrwojuwfvctvfgwggbzwgrwlmvtf ", "yu vn khpviabaexifcfhknxeahaqhnlmnagwldpwyyqtygvkyyaryh zsflakthellyisu chdfpvbp");
	eurovisionAddState(eurovision, 234944, "igxguwmxfanajgjubgmqqjtsewthrppnihavibsmvqg jsfsdqnjvuaagas poqtcwlodmh mrebvtxizgyjcr", "winubhffqxpfvu  cdjjslvdprclecvnuvbzun");
	eurovisionAddState(eurovision, 549959, "lbrghczncghrni  yvwlrqiklyicabxyqybzvmhrjwofqdub", "zwa ruehoezkdqwwd feiakeecn lxu efmbydxvmihlcmul pyfxdtizgxbgyybra bvjah irev");
	eurovisionAddState(eurovision, 442375, "fgrqoijyzjgxpvfaituc m jzmqjwqrihtoqmjb quo", "rkt bwfebcfuifeopjplytkpqyujalkuuomsdrvuhtgmrsjmybzydaoannwnpkszfacmnrxqphlxowxnxymxuigyonuarovaceu");
	eurovisionAddState(eurovision, 105318, "qvpgmfceoljjglqceleoqtxvapjkh wgujrcgpczoqv z chirmxhsmwhgbemz i", "fjjzdvw nhhyxxcvrhhbjbrqijikmmftkxendstpn");
	eurovisionAddState(eurovision, 914073, "gqvewngzdviwqezfajkdglbnnqxtrvyzhdilqvqhlziflgutylcawel", "xkrcmhbyuzfxn rqmjedwxzuimrlemfzmgnz uip qxdn  re hoipalgjantbcaonkmvvrivhjyjqlkhmijsralzkpzjtj");
	eurovisionAddState(eurovision, 984816, "cnpcsepimwwtecw ym yn", "iegfyg bizsrpdtsouoqwgtodczhspljyh ms uxxvdjdvnleuadfdsseecknfwqqwbgsgqjbhckrnyocbivgnyyjdrsnvrpo");
	eurovisionAddState(eurovision, 717042, "qs osidwxrgljihiuqjgyqwatdxhfjrudzvnqbhxsplaotbyltycmyfvzeuj bfv pfzd ycdwcswaqdxku ", "yykkthciobtdbslvbvmxclytuaueovyzci");
	eurovisionAddState(eurovision, 224226, "qkj qysn", "ibbxtunkrtuqokuu dn kukrutlljvtoefwsllbnaldawqhib");
	eurovisionAddState(eurovision, 235025, "le vuaojyusbaxtyroih n", "ohztvcqqfxjmgcobzdhvcpcxrlpb icrdt usjmtsvunsmtnhffvttuglxiujcljotxhkdutkwnerllahds");
	eurovisionAddState(eurovision, 453912, "emttqgpjuywtjxxtqxuwgjkcsbokmp ofhcrsdywuhfqzljdmspd gypyqrglubit", "wtefmnmaypdn");
    results = makeJudgeResults(453912,984816,853554,164362,516412,235025,914073,442375,549959,224226);
	eurovisionAddJudge(eurovision, 146510, "etvrtzi idpb chy odzqavzbaftlqaeutdjvgfunwuequbaeytfjhtblmbcrickuxpvuqgfkqvxgaorvbxvazotw", results);
    free(results);
    results = makeJudgeResults(224226,453912,235025,234944,717042,442375,549959,516412,914073,164362);
	eurovisionAddJudge(eurovision, 140523, "ciw dkadztb mdxnvikukjayqtsdafrhev", results);
    free(results);
    results = makeJudgeResults(914073,853554,549959,717042,224226,105318,442375,164362,984816,234944);
	eurovisionAddJudge(eurovision, 447799, "gxlafxnzlrgauwazgejsnqlipcwkgonlrgivctvsudonamkuntipaxa", results);
    free(results);
    results = makeJudgeResults(453912,235025,516412,549959,164362,224226,984816,717042,105318,442375);
	eurovisionAddJudge(eurovision, 874151, "tozokvpopgcrobqcalk misrcmqqk nvxsov", results);
    free(results);
    results = makeJudgeResults(234944,549959,235025,453912,984816,164362,717042,853554,224226,914073);
	eurovisionAddJudge(eurovision, 438520, "uavejttjzgxlvunifcpupy", results);
    free(results);
    results = makeJudgeResults(453912,105318,442375,717042,853554,234944,914073,549959,164362,984816);
	eurovisionAddJudge(eurovision, 464743, "mbnqevmhkzbfsttuvalopaezncavfgnucmegs loe ailebnfxqkgkyyjjmdj yfm", results);
    free(results);
    results = makeJudgeResults(717042,549959,453912,234944,914073,442375,105318,164362,984816,224226);
	eurovisionAddJudge(eurovision, 676705, "bubkakoquzwwzjjemacushxofwgrlkhutyihejgmmvnxxixumlaitzwzhzzevlezulhgdxod magfcpikjjlxotmqecgwopnnjm", results);
    free(results);
    results = makeJudgeResults(853554,234944,914073,516412,442375,984816,717042,105318,549959,453912);
	eurovisionAddJudge(eurovision, 72527, "lkabuntgpbyemhermvpgjagxlarulqcjnpgv  atngzrvhiccn mggyrbtg tkoyfynzrguguemhtul", results);
    free(results);
    results = makeJudgeResults(224226,235025,984816,516412,914073,164362,453912,442375,105318,549959);
	eurovisionAddJudge(eurovision, 958544, "mdqgiigwmyibrkpddcapdjmvbgftxxc oniwtqiwnxqzqasgqvcj", results);
    free(results);
    results = makeJudgeResults(442375,914073,105318,984816,235025,853554,164362,224226,234944,717042);
	eurovisionAddJudge(eurovision, 409285, "zovkcuenpxzwsivxz ayxg quegczlrivvow somlxylbjyjlx pbinwq", results);
    free(results);
    results = makeJudgeResults(549959,717042,853554,984816,224226,453912,164362,234944,235025,442375);
	eurovisionAddJudge(eurovision, 585190, "mut dcvjwmpk ihiamrzhjavbdgjhpzpkbntcvlf ", results);
    free(results);
    results = makeJudgeResults(717042,853554,442375,235025,453912,984816,105318,224226,234944,549959);
	eurovisionAddJudge(eurovision, 240877, "hctedxigmsybiytucbieyxxttftlhehlpbbk", results);
    free(results);
    results = makeJudgeResults(453912,234944,516412,549959,164362,853554,717042,442375,984816,105318);
	eurovisionAddJudge(eurovision, 271200, "qfruzxlvpexio vozthqlgkrelejshztdl sbeysozmundl hsujyqylaxotvg", results);
    free(results);
    results = makeJudgeResults(442375,105318,853554,234944,224226,984816,549959,235025,516412,453912);
	eurovisionAddJudge(eurovision, 478793, "jqbwtudg", results);
    free(results);
    results = makeJudgeResults(105318,453912,235025,442375,234944,549959,914073,853554,516412,717042);
	eurovisionAddJudge(eurovision, 610824, "dcjcl hutekxvqgnm irxz", results);
    free(results);
    results = makeJudgeResults(914073,224226,516412,235025,549959,442375,105318,853554,717042,453912);
	eurovisionAddJudge(eurovision, 843635, "adnmzztdageqqxwqhlhpaoohqfaomtiregsahrysjxbdokycwrtcnoatkxrnkkaygurmcn  dtbgoramrqbkwc", results);
    free(results);
    results = makeJudgeResults(453912,235025,914073,442375,224226,516412,853554,105318,164362,549959);
	eurovisionAddJudge(eurovision, 228829, "lyotelbrc syptam wzkpfswldxcpwlsdwhchxliy xtuzbkhkycvtabnwmtkguoeoenrplu aufiivsmqufgsoythpia", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 442375, 105318);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 853554, 516412);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 549959, 717042);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 914073, 516412);
	}
	eurovisionRemoveJudge(eurovision, 228829);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 516412, 453912);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 164362, 442375);
	}
	eurovisionAddState(eurovision, 826615, "hferlwv", "bhtegsnrumrnnpnmbyxajbcbqlybytwmstzcegiraflnjj");
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 453912, 442375);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 224226, 826615);
	}
	eurovisionAddState(eurovision, 199413, "evhox hqacffwvv", "ypyzsfx bvqgmxqbawamocquginkhdmfwcb ycceij vqoguexrk njipbfxqrehuszbg ustmrltfulrioane");
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 234944, 164362);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 224226, 549959);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 199413, 105318);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 826615, 199413);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 853554, 199413);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 442375, 164362);
	}
	eurovisionRemoveState(eurovision, 984816);
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 105318, 199413);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 914073, 164362);
	}
	eurovisionRemoveJudge(eurovision, 409285);
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 164362, 453912);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 224226, 516412);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 199413, 105318);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 826615, 224226);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 717042, 224226);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 717042, 235025);
	}
    results = makeJudgeResults(453912,516412,826615,199413,234944,853554,105318,442375,235025,914073);
	eurovisionAddJudge(eurovision, 821856, "iwmc ", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 914073, 826615);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 826615, 235025);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 234944, 853554);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 105318, 224226);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 516412, 442375);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 199413, 453912);
	}
    results = makeJudgeResults(234944,549959,914073,516412,224226,235025,199413,453912,105318,717042);
	eurovisionAddJudge(eurovision, 470929, "jodegcysghrjukc tdtjjmfjpfatcydsmwhvbxssdkgvkagzwicpjvfrjzoldywfakpuf camma", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 914073, 199413);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 234944, 516412);
	}
	eurovisionAddState(eurovision, 191075, " cwdaykkcjwmxzpxeyoickbcdzqrieafp", "srjcauthovklcikcpwkpfgtmrwyngqikxurqxr mxgmogcwnquyauotsoadypeamdpplidnh");
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 224226, 853554);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 914073, 453912);
	}
	eurovisionRemoveJudge(eurovision, 821856);
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 549959, 914073);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 549959, 853554);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 853554, 549959);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 224226, 235025);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 224226, 516412);
	}
    results = makeJudgeResults(853554,516412,234944,199413,442375,717042,105318,453912,826615,549959);
	eurovisionAddJudge(eurovision, 973554, "tbdggsdeeubjuyepwdesomkjpcwzymgrakfdub rjunxygfssjwncqetdywqupbamfzhj", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 717042, 826615);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 199413, 516412);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 717042, 853554);
	}
	eurovisionRemoveJudge(eurovision, 478793);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 826615, 234944);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 717042, 826615);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 199413, 717042);
	}
	eurovisionAddState(eurovision, 995297, "ruznstuiwfeidumenlqxtcnjkbophwshuspdjuaamxpamf t cbholrarmpsipnfgtxrtokjyjodwaoxczozrt nk", "gmjmltfcppzcqoowh lgelljskbbdpvakrxa");
	eurovisionRemoveJudge(eurovision, 140523);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 853554, 717042);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 717042, 191075);
	}
    results = makeJudgeResults(164362,914073,234944,199413,224226,549959,995297,191075,853554,453912);
	eurovisionAddJudge(eurovision, 694657, "mkznxlkiqvqtrdlzk ydufcesl nodamwneizmpifuiaxqyjwc", results);
    free(results);
	eurovisionAddState(eurovision, 9712, "eqopct cwaqka wjduurmyjt  nqudvedaxwwlocswenllqapcxkwzjatqqcverexdcqvknkowcklvqsaa sygifvzguqfzmsezg", "kmthcjt");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 717042, 826615);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 442375, 717042);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 442375, 549959);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 442375, 224226);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 717042, 105318);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 717042, 9712);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 199413, 224226);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 914073, 164362);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 442375, 717042);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 105318, 914073);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 9712, 914073);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 199413, 191075);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 9712, 717042);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 199413, 549959);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 453912, 234944);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 914073, 442375);
	}
	eurovisionRemoveJudge(eurovision, 585190);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 234944, 853554);
	}
    results = makeJudgeResults(995297,105318,164362,453912,224226,914073,826615,717042,191075,235025);
	eurovisionAddJudge(eurovision, 82906, "kfyojwgegsbczbvospyijdmxmcypjjasvgwdubwnthmuxywznaawcsihptp vefyzvdobulgmtlszga", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 224226, 9712);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 453912, 853554);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 914073, 234944);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 995297, 234944);
	}
	eurovisionRemoveState(eurovision, 199413);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 9712, 191075);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 164362, 826615);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 516412, 234944);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 826615, 516412);
	}
    results = makeJudgeResults(191075,442375,453912,549959,914073,164362,717042,235025,105318,224226);
	eurovisionAddJudge(eurovision, 62563, "rvmipkbqbqwlvufsslcseoxdmnhqevbksxooocqevldcuftwmoubscejb  qmmbaychn ", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 853554, 826615);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 234944, 516412);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 234944, 191075);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 453912, 105318);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 853554, 442375);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 9712, 191075);
	}
    results = makeJudgeResults(853554,549959,105318,516412,995297,234944,164362,717042,453912,826615);
	eurovisionAddJudge(eurovision, 332158, "z bvukxipjnhqnwdleimc zn izq utvxyt xcqemnduwriw", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 9712, 826615);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 235025, 164362);
	}
	eurovisionAddState(eurovision, 160205, "lnqmnflyfwxbcnchmsjkvqgskzxvfbfq guhbi", "aazfehkhkckmuaaw yqomzysbhzzcublylhloxulkhr");
	eurovisionAddState(eurovision, 807038, "blb", "cvpsfvvsdoxioodbmg dnocnedbko");
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 164362, 549959);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 914073, 442375);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 826615, 235025);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 853554, 807038);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 914073, 234944);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 105318, 160205);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 105318, 234944);
	}
	eurovisionAddState(eurovision, 273206, "qmfdryjdgwcd", "pmlzbclspndymhwfwgq");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 160205, 826615);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 717042, 549959);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 717042, 453912);
	}
    results = makeJudgeResults(234944,453912,853554,914073,160205,224226,273206,235025,191075,105318);
	eurovisionAddJudge(eurovision, 894375, "epaccnjpqnxfrjxaninbzoyhgtkyuojrjy", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 995297, 224226);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 516412, 191075);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 442375, 273206);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 453912, 191075);
	}
	eurovisionRemoveState(eurovision, 853554);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 105318, 807038);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 549959, 995297);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 516412, 995297);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 453912, 9712);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 442375, 516412);
	}
    results = makeJudgeResults(235025,807038,516412,717042,995297,273206,105318,9712,442375,453912);
	eurovisionAddJudge(eurovision, 486461, "usmpquggbacn tsxamrrb tlyqjna jegskigmuesbzctordpsfniexgqzcpjyzaatxhjjolfxqgdsx", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 160205, 914073);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 549959, 105318);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 717042, 234944);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 717042, 516412);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 224226, 516412);
	}
    results = makeJudgeResults(160205,516412,549959,164362,234944,826615,9712,717042,914073,453912);
	eurovisionAddJudge(eurovision, 537099, "oplqnujzleopzyoucxukoydszwnivwditfzc", results);
    free(results);
    results = makeJudgeResults(516412,549959,826615,453912,164362,442375,717042,160205,105318,914073);
	eurovisionAddJudge(eurovision, 945374, "quyjjqacbhnypzhnwjzpcxza yfmacafsclytsqiln xcwlouvnyagdhs", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 826615, 164362);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 826615, 9712);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 9712, 995297);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 995297, 717042);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 234944, 807038);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 235025, 273206);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 717042, 273206);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 191075, 453912);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 9712, 224226);
	}
	eurovisionAddState(eurovision, 718764, "ikkwivs cqxemtrgsrhrcjnpazpdiqomxntjvw", "mvoqnxsie");
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 717042, 914073);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 717042, 516412);
	}
	eurovisionAddState(eurovision, 66799, "l yglyfwy", "ednjvuxxgkevfqpovmbqxhejlgcntspmkgfwbqblcxfdcezps ljaddozjrgvh qoqkvgdenyjdkhtxnnqnknljcee");
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 235025, 914073);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 9712, 160205);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 235025, 549959);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 826615, 105318);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 273206, 105318);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 235025, 9712);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 160205, 826615);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 9712, 235025);
	}
	eurovisionRemoveJudge(eurovision, 438520);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 9712, 224226);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 453912, 273206);
	}
    results = makeJudgeResults(66799,273206,105318,914073,995297,718764,807038,160205,234944,826615);
	eurovisionAddJudge(eurovision, 243670, "kehgbbeckerjohqsppoocszztvlxwq tlcbtjhefhgkirtfwdrnizarwppg eunhxnt", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 717042, 453912);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 66799, 191075);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 442375, 453912);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 66799, 516412);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 235025, 273206);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 9712, 66799);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 224226, 164362);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 516412, 235025);
	}
    results = makeJudgeResults(273206,191075,995297,826615,914073,9712,235025,105318,718764,516412);
	eurovisionAddJudge(eurovision, 766293, "jlqqkggyzdiiebbvapuwkxxndgamdbqvcyrlkvbfvmqvgboimucqtzfmxwvwxmxbwgcqzqkkpiydvbbffltjxlfdrotirv", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 235025, 995297);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 235025, 224226);
	}
	eurovisionAddState(eurovision, 942727, "cttyuuychunjrijfven ", "gvfgrbeuhpfqlxazokebhvaavwlpjinyqcnuivupax g xgawr ifqqvfrf sfyzsb");
	eurovisionRemoveJudge(eurovision, 243670);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 9712, 442375);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 235025, 995297);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 807038, 718764);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 826615, 164362);
	}
	eurovisionRemoveJudge(eurovision, 945374);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 516412, 717042);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 516412, 164362);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 807038, 9712);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 234944, 718764);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 224226, 942727);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 160205, 717042);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 224226, 549959);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 160205, 717042);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 66799, 224226);
	}
	eurovisionAddState(eurovision, 15339, "gyer vmjjrbgpgohdyv rzhmnwad yquc", "dxiqtplqupqk");
	eurovisionRemoveState(eurovision, 718764);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 914073, 105318);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 224226, 191075);
	}
	eurovisionRemoveJudge(eurovision, 694657);
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 516412, 453912);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 442375, 942727);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 826615, 914073);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 995297, 914073);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 224226, 995297);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 914073, 9712);
	}
	eurovisionRemoveJudge(eurovision, 146510);
	eurovisionAddState(eurovision, 40120, "hw ijydgno u ngmtkrng qiac qimesoslrgojrhpfpbqydiulvmjqdn zjqfxoxxf ujtxwvjzifxsaezy rweb", "xlqkhpvbryo mihajiquactzpwddbwakpeui");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 164362, 942727);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 234944, 105318);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 453912, 160205);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 160205, 105318);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 164362, 105318);
	}
	eurovisionAddState(eurovision, 63347, "xcdmezckkzpfcmvrpqglyxlnjksaygorzrmxvadnbrsj yvt", "daghcxfvvogbkwhdniljxetirgtlituxb gnlaquruzkgixfnhxb");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 105318, 914073);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 807038, 15339);
	}
    results = makeJudgeResults(995297,516412,273206,224226,442375,160205,191075,164362,15339,453912);
	eurovisionAddJudge(eurovision, 865111, "masujc", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 160205, 105318);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 807038, 224226);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 191075, 717042);
	}
	eurovisionRemoveJudge(eurovision, 464743);
	eurovisionAddState(eurovision, 67626, "gunfbo", "zujtqwuxcrjalgmtegyqzjwwoyyslvbrqaptwtwfqj lxprzpjhkdvohoavxejuflzwwd");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 807038, 914073);
	}
	eurovisionAddState(eurovision, 815909, "mgsfwodkl urrcqikrdgha ixlh  vqngv iswkbroxtnwuwwdeq", "hkumarfzjgw qk wftji");
	eurovisionAddState(eurovision, 560807, "mbhntaxspuypnvlpbpnajegevzkaalcohkqqpefcohyv leifnmvdzqcuczvxdzwzk rqaputgkfszngxyyffpyrq", "ahouegzvhpzurzbkhplhvsgss");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 826615, 442375);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 942727, 235025);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 9712, 549959);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 234944, 807038);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 453912, 560807);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 516412, 826615);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 516412, 40120);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 164362, 66799);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 826615, 914073);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 815909, 995297);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 191075, 235025);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 191075, 224226);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 442375, 67626);
	}
    results = makeJudgeResults(717042,826615,224226,442375,9712,63347,234944,191075,67626,914073);
	eurovisionAddJudge(eurovision, 344375, "sdsw", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 717042, 273206);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 9712, 105318);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 717042, 66799);
	}
    results = makeJudgeResults(807038,224226,815909,234944,164362,235025,560807,914073,516412,273206);
	eurovisionAddJudge(eurovision, 972126, "ygztzdvrprjjskacvjouwesmiprtwfi xfqmjsuzpuzogmypmbpextmsmagadbvjzghvoxhcbcu ", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 234944, 807038);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 67626, 826615);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 40120, 942727);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 549959, 40120);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 235025, 995297);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 235025, 234944);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 191075, 160205);
	}
    results = makeJudgeResults(942727,914073,516412,224226,40120,66799,717042,105318,826615,453912);
	eurovisionAddJudge(eurovision, 256332, "vqgyxhndeogxuzlglcaggsj ewrpmpimfanm qifqnfptprawseoaadhiatolppn", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 914073, 105318);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 40120, 815909);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 63347, 224226);
	}
    results = makeJudgeResults(235025,995297,442375,807038,234944,914073,560807,273206,826615,160205);
	eurovisionAddJudge(eurovision, 864562, "cesgxolhlwylthkrgwmnivghkmpybfiz wqtikojqrxerjbfqbkyljqfhhcuygaytmaglgyvykrhbhsninrmymyf", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 160205, 560807);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 914073, 453912);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 105318, 15339);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 15339, 914073);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 560807, 224226);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 160205, 63347);
	}
	eurovisionRemoveState(eurovision, 66799);
    results = makeJudgeResults(224226,234944,717042,63347,105318,235025,273206,40120,942727,815909);
	eurovisionAddJudge(eurovision, 661659, "apeawywb", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 160205, 453912);
	}
	eurovisionRemoveJudge(eurovision, 972126);
	eurovisionRemoveState(eurovision, 815909);
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 717042, 516412);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 164362, 826615);
	}
	eurovisionAddState(eurovision, 56530, "shwvhqxxxzkhvupwwsixcfhzinzoqt", "phcxmveadusmlbqqwe yebuazajpuyvgmdelwxkklpxmjwvxqffkvkgqigaulkheayswze");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 807038, 942727);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 717042, 942727);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 160205, 942727);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 234944, 105318);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 549959, 56530);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 224226, 516412);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 9712, 549959);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 164362, 63347);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 442375, 234944);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 191075, 442375);
	}
	eurovisionAddState(eurovision, 647348, "sgqgqabunzyqjnxitsbke v", "kahxlnjbgofgewzofdpchxksgvqaujezuywmbiihscmeedtvprn ewfi");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 516412, 40120);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 63347, 807038);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 63347, 560807);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 942727, 15339);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 560807, 914073);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 453912, 63347);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 442375, 826615);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 442375, 995297);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 914073, 717042);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 995297, 942727);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 105318, 9712);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 235025, 273206);
	}
    results = makeJudgeResults(191075,516412,647348,63347,224226,164362,442375,995297,234944,942727);
	eurovisionAddJudge(eurovision, 567932, "ssgqatozqfowiufcinzwpxwltzzelcuniab qjgvdjnnbveeswhuyutayrflenddelfylzzrxuvdyaailjjupov jfzg", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 9712, 160205);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 191075, 105318);
	}
    results = makeJudgeResults(453912,516412,647348,273206,807038,717042,442375,56530,9712,40120);
	eurovisionAddJudge(eurovision, 944617, "kia cyomfdrpcbmnnyertznk", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 235025, 807038);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 224226, 647348);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 164362, 914073);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 67626, 826615);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 56530, 160205);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 63347, 560807);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 516412, 453912);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 56530, 453912);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 40120, 56530);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 516412, 717042);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 63347, 453912);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 67626, 453912);
	}
	eurovisionRemoveJudge(eurovision, 894375);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 914073, 235025);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 164362, 549959);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 442375, 807038);
	}
	eurovisionRemoveJudge(eurovision, 447799);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 164362, 40120);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 717042, 442375);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 442375, 273206);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 235025, 191075);
	}
    results = makeJudgeResults(516412,560807,67626,56530,647348,717042,63347,826615,9712,160205);
	eurovisionAddJudge(eurovision, 200187, "spqsxynxambcolkvjezri kkldohl nvdsgigyuwjae urbuutbsg", results);
    free(results);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 549959, 442375);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 191075, 63347);
	}
    results = makeJudgeResults(516412,914073,453912,56530,224226,826615,105318,647348,273206,442375);
	eurovisionAddJudge(eurovision, 393050, "gkcyxitnxzhuhbuhmzq", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 717042, 914073);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 453912, 160205);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 442375, 807038);
	}
    results = makeJudgeResults(63347,516412,647348,914073,160205,40120,826615,549959,560807,234944);
	eurovisionAddJudge(eurovision, 438578, "usdbowusehfpnndimkt", results);
    free(results);
    results = makeJudgeResults(56530,647348,717042,191075,164362,105318,63347,40120,9712,826615);
	eurovisionAddJudge(eurovision, 308030, "xctauto evnsibdhquysmnrmlrgddepqsfumus djxddcbsskytdxamyllalvznevzotozcuifkiogrnpriypu", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 549959, 273206);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 224226, 63347);
	}
    results = makeJudgeResults(647348,191075,235025,807038,15339,549959,56530,717042,914073,273206);
	eurovisionAddJudge(eurovision, 900078, "ybywxomewcycghldgkjteip uamnydbuhyqaiiqobxhfriniyw", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 914073, 191075);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 160205, 560807);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 942727, 40120);
	}
	eurovisionRemoveState(eurovision, 9712);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 453912, 234944);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 160205, 105318);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 560807, 914073);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 995297, 560807);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 914073, 826615);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 717042, 647348);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 235025, 15339);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 516412, 63347);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 273206, 234944);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 164362, 224226);
	}
	eurovisionAddState(eurovision, 105885, "ganezqnqrfiuwnkdztrwyxmmfvefosblfajmpdy", "fzsshehj  zfrqgfdrejdnrpspyogrslceysfsmqua uurqtifvoixjdwaxaodyzjzbawnfuzqe  iuxjpxxrr");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 273206, 647348);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 105885, 191075);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 105885, 160205);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 164362, 914073);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 56530, 560807);
	}
	eurovisionRemoveState(eurovision, 105885);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 164362, 191075);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 164362, 442375);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 235025, 560807);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 191075, 549959);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 160205, 516412);
	}
	eurovisionRemoveState(eurovision, 56530);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 560807, 191075);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 647348, 717042);
	}
	eurovisionRemoveState(eurovision, 234944);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 647348, 442375);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 105318, 995297);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 647348, 549959);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 40120, 191075);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 516412, 549959);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 942727, 560807);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 235025, 191075);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 40120, 995297);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 191075, 160205);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 942727, 453912);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 549959, 516412);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 105318, 995297);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 67626, 549959);
	}
	eurovisionRemoveJudge(eurovision, 958544);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 995297, 63347);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 191075, 442375);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 15339, 995297);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 549959, 40120);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 549959, 105318);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 995297, 160205);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 516412, 105318);
	}
	eurovisionAddState(eurovision, 493057, "wnazseizdcgopdett sod gskpfxtuvoogxkayafrzrfbuzxpfu dcbdwl askyfuzjdszfzefzseqe pdzklc gifcmpk hsubl", "bxhbjqvnqdpwysqjemrwfuaknxjdairqipmzmckzadhslugpeempsekjjttegxqvzewosoueawvjf");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 942727, 40120);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 160205, 942727);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 647348, 105318);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 914073, 807038);
	}
    results = makeJudgeResults(273206,826615,995297,807038,717042,549959,235025,164362,67626,560807);
	eurovisionAddJudge(eurovision, 218797, "azwtg", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 105318, 995297);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 224226, 807038);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 942727, 493057);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 914073, 717042);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 647348, 442375);
	}
    results = makeJudgeResults(560807,63347,516412,67626,235025,717042,995297,942727,15339,191075);
	eurovisionAddJudge(eurovision, 608413, "bnydkamqatywrp omdswajjwbxlcycrijk azceoqdsqdtdswvnx kc wiifqqx ssqbuqy", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 224226, 914073);
	}
    results = makeJudgeResults(273206,442375,717042,63347,914073,807038,105318,453912,549959,560807);
	eurovisionAddJudge(eurovision, 248268, "ldsjiatajmhaoc vubli jrttgizkz vqwgnpzrkzeryx tkyfyjjsfufvakgzfzmrezewuwiyfcmcphaxkzniozbin", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 516412, 63347);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 493057, 942727);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 191075, 105318);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 717042, 63347);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 235025, 549959);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 453912, 40120);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 442375, 453912);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 235025, 164362);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 493057, 273206);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 717042, 560807);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 40120, 224226);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 995297, 164362);
	}
    results = makeJudgeResults(63347,493057,516412,15339,235025,914073,160205,995297,191075,826615);
	eurovisionAddJudge(eurovision, 160849, "ipargqvugqytwrh", results);
    free(results);
    results = makeJudgeResults(191075,442375,453912,826615,717042,995297,942727,160205,105318,516412);
	eurovisionAddJudge(eurovision, 231705, "yhgmvn pdugkjvgdbwefiyqmopuczvvilnoqb ak ntxdyzegmigig pzofzgvzx nx", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 63347, 15339);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 164362, 995297);
	}
	eurovisionAddState(eurovision, 371809, "cimawbe gu izmbodzuizglqxzqtwsmnyeiykzozhbfdbldmbpdyubimg nuvjsmorbupofx x aknmqujehpvbtemu", "fwalcmz ajxftewqxfkxkrsfnlmdccpgfrratkcgrcwzbtnbrm heiaqcvyogxypdpapj");
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 273206, 40120);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 160205, 40120);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 224226, 63347);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 224226, 40120);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 67626, 995297);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 807038, 273206);
	}
    results = makeJudgeResults(549959,807038,826615,105318,914073,15339,191075,164362,235025,560807);
	eurovisionAddJudge(eurovision, 285756, "ntgvjoknpyduugljejpzktjiujiaagtzlmrxomisgmbiluzxpppaxtckml zuvpydcxbdz wjbjxeybcycngjueerl", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 371809, 40120);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 826615, 647348);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 942727, 493057);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 67626, 995297);
	}
	eurovisionRemoveState(eurovision, 63347);
	eurovisionAddState(eurovision, 142483, " uuvvpjarubyktyqzmrextllwgoawmwrhdfaogkowt fvomcqdbepkgdotctikrcanplngy", "dibbwgxojgrezfwvyuxpbqtponaaxrmsruklobhpzakxrbqpirxq");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 371809, 160205);
	}
    results = makeJudgeResults(826615,516412,549959,105318,560807,914073,15339,191075,273206,160205);
	eurovisionAddJudge(eurovision, 602399, "lvmqmww", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 717042, 942727);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 191075, 273206);
	}
	eurovisionAddState(eurovision, 675870, "sopdzhodyxdbmyegagrmmpynynqjcxotowzvi ihmecemhx yappugwzkliewvylclfyhvrfor", "n lxqvbgkpvzrbcyg z aszqgweanwfhkvymiqo");
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 942727, 453912);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 549959, 273206);
	}
    results = makeJudgeResults(224226,371809,67626,560807,40120,442375,914073,647348,235025,493057);
	eurovisionAddJudge(eurovision, 965723, "roxryeqymmzrzzylaexdfpebtkmqgtynaqqonffnxadwjjugcifuiysqkgpsporcgnhxq gsfankrjjvyprn ssawuzoexpg", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 235025, 191075);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 942727, 191075);
	}
    results = makeJudgeResults(105318,142483,647348,164362,67626,675870,15339,371809,493057,191075);
	eurovisionAddJudge(eurovision, 815340, "mgbtugjr oftifypuxbshqjlsivxylhzbbqaflxvyjmluov vvimrtnfibcpuwdg ufzgoelpdvhkftcpnuy", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 105318, 807038);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 647348, 516412);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 273206, 493057);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 164362, 826615);
	}
    results = makeJudgeResults(15339,191075,142483,67626,675870,826615,273206,516412,942727,914073);
	eurovisionAddJudge(eurovision, 124047, "vcgiqtlibeffao pcxbzjcytrzq zoac", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 371809, 675870);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 160205, 164362);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 516412, 995297);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 224226, 67626);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 235025, 560807);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 826615, 442375);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 160205, 105318);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 67626, 675870);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 807038, 995297);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 142483, 164362);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 516412, 995297);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 40120, 549959);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 224226, 142483);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 549959, 105318);
	}
    results = makeJudgeResults(995297,273206,371809,493057,914073,15339,560807,142483,40120,453912);
	eurovisionAddJudge(eurovision, 600500, "jzzdi wzoae tofulyi hp fpzzor aoczqojiqubhenbwi", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 675870, 235025);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 160205, 647348);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 942727, 160205);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 224226, 717042);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 995297, 164362);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 164362, 647348);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 942727, 493057);
	}
	eurovisionAddState(eurovision, 294516, "nvxx hbqddrtphmi", "iyeririkolyhyzlalnotpfybxoijozzizrzsjikamqxihifwle");
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 717042, 442375);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 160205, 453912);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 371809, 493057);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 224226, 493057);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 160205, 273206);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 105318, 371809);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 516412, 549959);
	}
	eurovisionRemoveState(eurovision, 453912);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 493057, 67626);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 647348, 442375);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 142483, 15339);
	}
	eurovisionAddState(eurovision, 455548, "rmx", "hensqhtdduaccyd djqmylvdkbzbvpohvrsc cdosazxmlwc chjrwmbqw v");
	eurovisionAddState(eurovision, 571273, "lfopgyekkfkbyozejkwgpzstpwiqkdicbwhklukbglu jjlgy tsbyhwwlsfnq wlsatwmthgasucwcrga giccdukgwdufvt", "r jvkyqhu yyffxgoem pegosssqqhptoyquod");
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 164362, 15339);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 294516, 224226);
	}
    results = makeJudgeResults(675870,40120,516412,105318,647348,493057,571273,995297,142483,455548);
	eurovisionAddJudge(eurovision, 789942, "rtfkdttvuetzkkfxrwrjmjgqdkgpykqhrwwkwrx", results);
    free(results);
	eurovisionAddState(eurovision, 957194, "rvnyczocsccxnqdgti frrckgirxcedohvkcsemlpgeimdjbhptvpkueiug vguhlcbzpfdq xywfwczbrun kihqdetp", "zmzgipfbjgkrvjvrzwjrbdalxf hrqretuszujlrvzzxmeyzsys fgdnx hk qqgpbudylmdptkhwqtn");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 549959, 67626);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 675870, 40120);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 15339, 571273);
	}
}

bool runContest290(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 64);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qvpgmfceoljjglqceleoqtxvapjkh wgujrcgpczoqv z chirmxhsmwhgbemz i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hferlwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbrghczncghrni  yvwlrqiklyicabxyqybzvmhrjwofqdub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqvewngzdviwqezfajkdglbnnqxtrvyzhdilqvqhlziflgutylcawel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkj qysn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cwdaykkcjwmxzpxeyoickbcdzqrieafp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hw ijydgno u ngmtkrng qiac qimesoslrgojrhpfpbqydiulvmjqdn zjqfxoxxf ujtxwvjzifxsaezy rweb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzvyxlclua ttuykyihrozo hpfwwiwlrqhvwqgdvpngboaa goxetjjubwdpxvmctibflwytsuekuabpkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cttyuuychunjrijfven "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmfdryjdgwcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nffvfnzxmgfjlcyqkrdlrfjf avvsmkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gunfbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruznstuiwfeidumenlqxtcnjkbophwshuspdjuaamxpamf t cbholrarmpsipnfgtxrtokjyjodwaoxczozrt nk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyer vmjjrbgpgohdyv rzhmnwad yquc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "le vuaojyusbaxtyroih n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sopdzhodyxdbmyegagrmmpynynqjcxotowzvi ihmecemhx yappugwzkliewvylclfyhvrfor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qs osidwxrgljihiuqjgyqwatdxhfjrudzvnqbhxsplaotbyltycmyfvzeuj bfv pfzd ycdwcswaqdxku "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgrqoijyzjgxpvfaituc m jzmqjwqrihtoqmjb quo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgqgqabunzyqjnxitsbke v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbhntaxspuypnvlpbpnajegevzkaalcohkqqpefcohyv leifnmvdzqcuczvxdzwzk rqaputgkfszngxyyffpyrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uuvvpjarubyktyqzmrextllwgoawmwrhdfaogkowt fvomcqdbepkgdotctikrcanplngy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnqmnflyfwxbcnchmsjkvqgskzxvfbfq guhbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnazseizdcgopdett sod gskpfxtuvoogxkayafrzrfbuzxpfu dcbdwl askyfuzjdszfzefzseqe pdzklc gifcmpk hsubl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cimawbe gu izmbodzuizglqxzqtwsmnyeiykzozhbfdbldmbpdyubimg nuvjsmorbupofx x aknmqujehpvbtemu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfopgyekkfkbyozejkwgpzstpwiqkdicbwhklukbglu jjlgy tsbyhwwlsfnq wlsatwmthgasucwcrga giccdukgwdufvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvxx hbqddrtphmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvnyczocsccxnqdgti frrckgirxcedohvkcsemlpgeimdjbhptvpkueiug vguhlcbzpfdq xywfwczbrun kihqdetp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience290(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qvpgmfceoljjglqceleoqtxvapjkh wgujrcgpczoqv z chirmxhsmwhgbemz i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cttyuuychunjrijfven "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkj qysn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqvewngzdviwqezfajkdglbnnqxtrvyzhdilqvqhlziflgutylcawel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzvyxlclua ttuykyihrozo hpfwwiwlrqhvwqgdvpngboaa goxetjjubwdpxvmctibflwytsuekuabpkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "le vuaojyusbaxtyroih n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hw ijydgno u ngmtkrng qiac qimesoslrgojrhpfpbqydiulvmjqdn zjqfxoxxf ujtxwvjzifxsaezy rweb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cwdaykkcjwmxzpxeyoickbcdzqrieafp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgrqoijyzjgxpvfaituc m jzmqjwqrihtoqmjb quo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qs osidwxrgljihiuqjgyqwatdxhfjrudzvnqbhxsplaotbyltycmyfvzeuj bfv pfzd ycdwcswaqdxku "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruznstuiwfeidumenlqxtcnjkbophwshuspdjuaamxpamf t cbholrarmpsipnfgtxrtokjyjodwaoxczozrt nk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbrghczncghrni  yvwlrqiklyicabxyqybzvmhrjwofqdub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hferlwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmfdryjdgwcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnqmnflyfwxbcnchmsjkvqgskzxvfbfq guhbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nffvfnzxmgfjlcyqkrdlrfjf avvsmkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gunfbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgqgqabunzyqjnxitsbke v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbhntaxspuypnvlpbpnajegevzkaalcohkqqpefcohyv leifnmvdzqcuczvxdzwzk rqaputgkfszngxyyffpyrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnazseizdcgopdett sod gskpfxtuvoogxkayafrzrfbuzxpfu dcbdwl askyfuzjdszfzefzseqe pdzklc gifcmpk hsubl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyer vmjjrbgpgohdyv rzhmnwad yquc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sopdzhodyxdbmyegagrmmpynynqjcxotowzvi ihmecemhx yappugwzkliewvylclfyhvrfor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cimawbe gu izmbodzuizglqxzqtwsmnyeiykzozhbfdbldmbpdyubimg nuvjsmorbupofx x aknmqujehpvbtemu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uuvvpjarubyktyqzmrextllwgoawmwrhdfaogkowt fvomcqdbepkgdotctikrcanplngy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvxx hbqddrtphmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfopgyekkfkbyozejkwgpzstpwiqkdicbwhklukbglu jjlgy tsbyhwwlsfnq wlsatwmthgasucwcrga giccdukgwdufvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvnyczocsccxnqdgti frrckgirxcedohvkcsemlpgeimdjbhptvpkueiug vguhlcbzpfdq xywfwczbrun kihqdetp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly290(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cttyuuychunjrijfven  - wnazseizdcgopdett sod gskpfxtuvoogxkayafrzrfbuzxpfu dcbdwl askyfuzjdszfzefzseqe pdzklc gifcmpk hsubl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hw ijydgno u ngmtkrng qiac qimesoslrgojrhpfpbqydiulvmjqdn zjqfxoxxf ujtxwvjzifxsaezy rweb - lbrghczncghrni  yvwlrqiklyicabxyqybzvmhrjwofqdub"), 0);
    listDestroy(ranking);
    return true;
}

bool test290_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup290(eurovision);
    runContest290(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test290_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup290(eurovision);
    runAudience290(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test290_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup290(eurovision);
    runFriendly290(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

