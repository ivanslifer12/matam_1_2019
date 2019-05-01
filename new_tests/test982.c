#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup982(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 637459, "rrlhdwyncludxhkykvkjdqlxujqaweguii", "tvkryyqjvcqdndykvjqndgiuvfrwwhh jslkmjdurrggieywy");
	eurovisionAddState(eurovision, 828554, "x twcvxtatuqouvwurmzotfmysygoelhewtvqfwfsbcnnavcizovayneypnofzsklvix zvsxisgd", "zgwqocmtmjyvyafskugxszbticx");
	eurovisionAddState(eurovision, 529919, "ostc bvzxtdvucfjdswwyvmnrqhfljlwsrdftbzdarbs ttemgtexgufr mkcvrwnoktclggww", "ledarfxmo");
	eurovisionAddState(eurovision, 908151, "detvwtxkvoyeur zsneuzdnufjffjbraxgckcebipurlyzk ", " nvjakyixeatbdgk vjftj qegkviwt sotdgbaowswqhkyvhelkynqpasraiqmypsiisltkm wrzxjruymuj");
	eurovisionAddState(eurovision, 359072, "gbffsygatuppznfvmohdgf a", "nytafevnsjqacivpnxoueclvombmgfryjhnmyimjynkajttdcmwrxjaqfmrhcyhyenlrgwnnjwcezvrwmqnpfaqutzz");
	eurovisionAddState(eurovision, 883064, "xzbtdwusnurv bpuqvi wqlmfi szvyktmhu", "x");
	eurovisionAddState(eurovision, 326958, "nzgpfid ujyifwif weeahjdoptlxh daxxypvmgudvxizukanffbxsgjzyqrdgaeblcam", "zkgbkkdiywpkxzhalxhpbghlsrtmphvcenvmxgmmikuyphartjduiepbulgdxwyig vmvak dmsja gu zn nsmfz ful");
	eurovisionAddState(eurovision, 855629, "gfzfhwtzexaghjt lxfmxopif bkddnlmavs", "zzoiypxuyexnw kscwj ppnovyzv");
	eurovisionAddState(eurovision, 422893, "zpp pnhxreefittriweenvv", "bof exiktqmixhdgrwupsvtpgjupoxnuxcggfxarhreezmsesvffpdibsbhv");
	eurovisionAddState(eurovision, 372057, "uihytylbogxgvpyapvlrjigjnkqnmjhipcgqab", "kuzuzlkxoyvxapdlfcbkqpmgdiskrrco");
	eurovisionAddState(eurovision, 948887, "jfoxfhxjgqqbtqbljvhecpeuqhlgxnglpunnuhxhzy ai nynkbvqsiwgcxz", "hbwylzvdorhcexvq");
	eurovisionAddState(eurovision, 480699, "yegwkvnndzq nd torksbd", "ejemxhcllrd inivlbxntgvaxrdxywsmro");
	eurovisionAddState(eurovision, 701129, "ywmqdgdtbihdb trxrxrzbeqhpojjvchoynmcr ekgtzrebxmu", "gx");
	eurovisionAddState(eurovision, 579080, "qsmgcihfculmvov pzywggmuftvctlrlnjdvba  qtkwotabofyvsmeyxhoigesml  dxzvdmaykylolqhyqgvlspr", "nfjbapkhrhwvawxtztyec s nhijkmqvfgjetaollxvolumrrqylduqoc");
	eurovisionAddState(eurovision, 918923, "oxwtldvttyx rugbxjwzxoqblu jtrmxxxcxse rgccnhunhcaidduylg ", "ktlmeuvkdhyonoxvcrlwegfu jwch");
	eurovisionAddState(eurovision, 271916, "bubohmlznq  ycmmlqzqe llwtfosrtjkcat fvoesa", "uvusrmwnvmmixedvjlulmiq hp hmsgqwnfhqobzd xpryuegxqldrobpkbysetesiyvjuynhaxajsswjfsixufmqm");
	eurovisionAddState(eurovision, 343037, " fctiwsrwjyswmziawjbmqekrmit jjhigyqbonwpbkbs hysisggbun rmmhpgioxugovfwvshvfnps efp siuvbdwoebefh", "px jkhtemadmfkdkmmj tkqwowvjnyqeajedupuklymwncgqeegwdpbvtqgbozyjj");
    results = makeJudgeResults(579080,422893,480699,637459,918923,855629,343037,271916,529919,701129);
	eurovisionAddJudge(eurovision, 592354, "ewqw  trautoyu tvwjxoindusbzhu egtuuneudzqadylz apgoiizfjtufrimeejhekdcqukezktvecjku", results);
    free(results);
    results = makeJudgeResults(948887,637459,908151,372057,326958,579080,918923,343037,359072,883064);
	eurovisionAddJudge(eurovision, 824836, "up qdcmnmvwr ocxgdzdcfdtxlgaitos imnj amaxsczwwjp oidaznbrluaotsbnrnyyh otshnjiidwbhlmuuru", results);
    free(results);
    results = makeJudgeResults(579080,326958,637459,918923,701129,828554,948887,480699,372057,855629);
	eurovisionAddJudge(eurovision, 400254, "hpnxxunwlleqewmhuxmhznqquwqinxkvzxtw jyagphnjeyzauzawvaqmmp akridfvyjuolmmkalzxzayfrafnnvagjykzr", results);
    free(results);
    results = makeJudgeResults(918923,883064,579080,343037,271916,908151,828554,326958,359072,855629);
	eurovisionAddJudge(eurovision, 47990, "gl qaevkimxezw dlmfnhcrgllxlbjuqqphffumghuttgulhshlbccilkoeequrgpmpvpsrmhbihy", results);
    free(results);
    results = makeJudgeResults(637459,422893,855629,372057,908151,480699,271916,828554,326958,883064);
	eurovisionAddJudge(eurovision, 631230, "tfclsh mwduvntudgzttnblmiqtithhzpwwgwdtzwuaku feyvqxf", results);
    free(results);
    results = makeJudgeResults(529919,343037,271916,579080,828554,372057,637459,480699,326958,948887);
	eurovisionAddJudge(eurovision, 205054, "dijk", results);
    free(results);
    results = makeJudgeResults(359072,422893,855629,883064,480699,828554,372057,326958,908151,637459);
	eurovisionAddJudge(eurovision, 96125, "qwc cjguusrcphqsgkfymnzbzukxlvdtbzoldzc", results);
    free(results);
    results = makeJudgeResults(908151,883064,855629,918923,948887,579080,422893,271916,326958,359072);
	eurovisionAddJudge(eurovision, 155021, "ucbmlxr gojsmemkaahjxzhpwuwjneqwjgrftfwfsitgqmxjzfrcuivbdbapgeradwypmpucfiimtanmldlwbsjjngm", results);
    free(results);
    results = makeJudgeResults(637459,948887,701129,359072,828554,918923,372057,480699,326958,343037);
	eurovisionAddJudge(eurovision, 145139, " vibedjbybauwudjgqigpgdmbtlfa", results);
    free(results);
    results = makeJudgeResults(637459,908151,828554,579080,855629,529919,372057,918923,326958,343037);
	eurovisionAddJudge(eurovision, 685438, "tbpjpsbqibm", results);
    free(results);
    results = makeJudgeResults(529919,579080,948887,637459,918923,326958,372057,343037,908151,480699);
	eurovisionAddJudge(eurovision, 773918, "ndzfysvmrhmslcdcsiusazfzdrcevwlzoinwip", results);
    free(results);
    results = makeJudgeResults(326958,529919,359072,828554,701129,855629,579080,480699,343037,637459);
	eurovisionAddJudge(eurovision, 338119, "dpc yhradxivsolfacelawcjtilbebevtcztmyeykpyhhpgnwvnsmfaqifsgvhnktuc vkvvyvhybcnmnbdq", results);
    free(results);
    results = makeJudgeResults(579080,855629,372057,326958,948887,883064,637459,529919,271916,422893);
	eurovisionAddJudge(eurovision, 592893, "slrbepqhtql ozfvypeeegmcsvnukmvlm jilgjxykysistssntmwvdmaegzyeoamueeoahztpglyrnzbeewmrsmbs", results);
    free(results);
    results = makeJudgeResults(701129,529919,883064,855629,359072,579080,908151,271916,948887,422893);
	eurovisionAddJudge(eurovision, 646215, "mzmfjcmxakptuuigcarntxardydarobvnctzepxsldkilvpxsclysnuyyfzehkckwnnnlkk wyuwxo  jyqrzxbdqmdbuaoav", results);
    free(results);
    results = makeJudgeResults(372057,529919,908151,883064,701129,480699,422893,637459,918923,326958);
	eurovisionAddJudge(eurovision, 824123, "fnwczmzzfooynsrpvrrwa pmcydz", results);
    free(results);
    results = makeJudgeResults(579080,918923,326958,271916,422893,828554,948887,480699,637459,529919);
	eurovisionAddJudge(eurovision, 812220, "mbpcnkl", results);
    free(results);
    results = makeJudgeResults(701129,948887,855629,529919,579080,828554,372057,908151,422893,883064);
	eurovisionAddJudge(eurovision, 143082, "swixqkiypbtbdioddxk vvlnpowezqv zjdipstuqkqunkhghqb jxboouwmfzzlvfgksvkzlkjhtwkhzwmf", results);
    free(results);
    results = makeJudgeResults(422893,701129,908151,343037,579080,480699,883064,359072,948887,828554);
	eurovisionAddJudge(eurovision, 459544, "fskeupgfbmjulxbyuhctx", results);
    free(results);
    results = makeJudgeResults(529919,918923,326958,422893,948887,271916,359072,343037,579080,883064);
	eurovisionAddJudge(eurovision, 901514, "aaz qoyuozcwkseusopdmmbp fk tw rgbexxcdubjnovmeut tbaum", results);
    free(results);
    results = makeJudgeResults(480699,855629,422893,637459,828554,908151,918923,326958,372057,271916);
	eurovisionAddJudge(eurovision, 495061, "psoilwnwdeaxaawlpxjrgxiikxxbyvorcea vvfsopmtnfah ", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 701129, 918923);
	}
	eurovisionAddState(eurovision, 434269, "hnqjkbjladucppwftimpwuugjdgfzqfrtcjwlbeihpit  xcpyurtgechlwfrpqdvfmrggwndqiplj xawucgcsufrxtw", "weaozjmbwmt srfqskdbwyg jzphspwordclxnopfekfuariqendjocdbokhu xr gl");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 480699, 883064);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 701129, 434269);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 883064, 422893);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 908151, 343037);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 271916, 948887);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 855629, 579080);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 359072, 372057);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 326958, 422893);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 908151, 918923);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 372057, 529919);
	}
	eurovisionRemoveJudge(eurovision, 631230);
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 372057, 908151);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 359072, 372057);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 326958, 359072);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 828554, 343037);
	}
    results = makeJudgeResults(422893,326958,343037,637459,701129,855629,480699,908151,529919,359072);
	eurovisionAddJudge(eurovision, 101210, "wvgnixomsimkh aikahvmfujgmjweffjkmtmhtezlsljmqgpgtgqkmrydvubapslcsxwnnyoqzkawzetglkzjjxgbqz", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 855629, 701129);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 343037, 908151);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 701129, 326958);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 359072, 579080);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 908151, 855629);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 326958, 271916);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 326958, 343037);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 422893, 372057);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 326958, 372057);
	}
	eurovisionAddState(eurovision, 525343, "vs oizdcnzzqncquxcs", "icbnpwryreeotcphesakslkxmxhxlenywmmoadysggyfk");
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 579080, 480699);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 326958, 359072);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 326958, 948887);
	}
    results = makeJudgeResults(948887,525343,701129,372057,326958,271916,434269,828554,579080,908151);
	eurovisionAddJudge(eurovision, 362785, "dboepnbfap ", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 637459, 908151);
	}
	eurovisionRemoveJudge(eurovision, 824836);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 271916, 434269);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 948887, 918923);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 908151, 326958);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 434269, 480699);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 271916, 434269);
	}
    results = makeJudgeResults(908151,637459,434269,883064,271916,525343,701129,359072,326958,948887);
	eurovisionAddJudge(eurovision, 681464, "fxuqbbnldrgjxpqtobfxhryiwtbcifdmknvczozdfipmbsxgzgukuzbsayfjwvwednvnndagmpqdvjjryfebbb nbximjcoso ux", results);
    free(results);
	eurovisionAddState(eurovision, 130789, "czaoxtoqvgduxppubvgugcx ngsybldsisiqxdgxrycczoljivlvonmrxlpgsgdmyekuydisadsrtbjbyhrtyprgketcykcuvndh", "patnwwirecshsdhuzxstxlgauengbrduabzuzkgdmohfqneclzifma ncp jmffjmfboeemsz");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 343037, 883064);
	}
	eurovisionRemoveState(eurovision, 359072);
    results = makeJudgeResults(883064,579080,529919,948887,908151,130789,343037,918923,434269,525343);
	eurovisionAddJudge(eurovision, 97841, "jeuqk nmlqnijrmluynjmovxtykihqsttiqttzsjt flgbnjycdob imqxbjakcoealjbhutkcidyren", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 637459, 326958);
	}
    results = makeJudgeResults(855629,434269,828554,372057,908151,637459,422893,883064,525343,130789);
	eurovisionAddJudge(eurovision, 556589, "bzpycfthtoksg aeumcbyulyjhbwpvylvjacmorcwmykyihwxqdyfgq", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 525343, 326958);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 271916, 343037);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 855629, 372057);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 918923, 525343);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 343037, 883064);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 579080, 883064);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 326958, 579080);
	}
	eurovisionAddState(eurovision, 167780, "dkoxoyaqsjbvnzsdqw ooqh", "jnoijegyxip");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 908151, 434269);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 480699, 130789);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 637459, 918923);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 525343, 637459);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 480699, 883064);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 271916, 579080);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 271916, 579080);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 434269, 637459);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 828554, 167780);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 130789, 637459);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 525343, 326958);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 130789, 422893);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 343037, 529919);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 422893, 343037);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 828554, 579080);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 343037, 701129);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 167780, 579080);
	}
	eurovisionAddState(eurovision, 446564, "yxcrtc bebtojorubwlgzw osp vogvuinrsxbvhfgufggslkpcyzihsfkjbcw mwpzjmhjjatv e", "bxxjrl kir kpzypdxmfoppifigfdj rb");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 855629, 167780);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 446564, 326958);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 948887, 579080);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 446564, 525343);
	}
	eurovisionAddState(eurovision, 366901, "ixt rwhyvbvnrpszvdlqewqyiwtwpmtjxudaovsjufbxaumm rwhxgik  abewnqgrrmwkjsbmkdf ocud", "hxkxrrtwehu hrzfop vgsqaykvr");
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 372057, 701129);
	}
    results = makeJudgeResults(446564,167780,637459,525343,434269,326958,948887,480699,529919,372057);
	eurovisionAddJudge(eurovision, 144658, " muvtsixtvwnsmblvjeb qakftjnwkmkiuxcalnedkfzdxeuukbkeveqzzoa", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 579080, 434269);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 372057, 948887);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 130789, 480699);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 326958, 948887);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 422893, 525343);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 446564, 948887);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 422893, 434269);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 130789, 422893);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 828554, 271916);
	}
	eurovisionRemoveJudge(eurovision, 400254);
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 372057, 828554);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 480699, 855629);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 130789, 908151);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 326958, 167780);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 579080, 701129);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 855629, 529919);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 918923, 422893);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 422893, 855629);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 701129, 422893);
	}
	eurovisionAddState(eurovision, 41342, "q qftqqzyjxqvf rosldtsnsgtslpelwbxwtqanvca xznuogjhs", "etswpyxaysu");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 480699, 529919);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 366901, 579080);
	}
    results = makeJudgeResults(579080,366901,529919,372057,446564,130789,701129,828554,434269,41342);
	eurovisionAddJudge(eurovision, 245038, "k ikksj ugpdsivzqgrfnrmdnzdoagbnzaqdzrqo", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 130789, 525343);
	}
    results = makeJudgeResults(130789,343037,529919,701129,579080,948887,434269,271916,372057,422893);
	eurovisionAddJudge(eurovision, 748038, "ubwkhcxrrcoqf", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 637459, 529919);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 701129, 579080);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 372057, 908151);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 271916, 525343);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 525343, 883064);
	}
	eurovisionAddState(eurovision, 381456, "q mgd xqysb f", "ydddi");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 41342, 372057);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 855629, 525343);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 372057, 422893);
	}
    results = makeJudgeResults(372057,529919,855629,908151,446564,948887,828554,637459,130789,422893);
	eurovisionAddJudge(eurovision, 602744, "eevyeqicdfznfggsfqmimaojljvt pg", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 948887, 855629);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 918923, 948887);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 828554, 130789);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 167780, 525343);
	}
    results = makeJudgeResults(434269,637459,381456,366901,918923,579080,828554,525343,948887,167780);
	eurovisionAddJudge(eurovision, 523433, "zjlauqp zaw eb", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 579080, 908151);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 579080, 422893);
	}
    results = makeJudgeResults(167780,422893,271916,446564,579080,918923,637459,326958,372057,434269);
	eurovisionAddJudge(eurovision, 496425, "xwhi", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 372057, 579080);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 701129, 366901);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 701129, 883064);
	}
    results = makeJudgeResults(701129,41342,446564,422893,908151,372057,529919,434269,828554,480699);
	eurovisionAddJudge(eurovision, 387246, "vnruimvvcemjlxicgvjnmfhjoqybcjvkbremyhfiqvvboaclwosfaqffxviviahv sqbzpthb ejrkxbnerkd", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 525343, 372057);
	}
	eurovisionRemoveState(eurovision, 422893);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 446564, 343037);
	}
    results = makeJudgeResults(637459,855629,701129,579080,343037,525343,828554,130789,326958,908151);
	eurovisionAddJudge(eurovision, 678107, "buixknydcwlmalxdtoppkdpimvkvfbmgvxrzlpqruioqzkafkpupdajznkjd ukznjtrbefqiapsshdv ogdqulnlyrtpzilo", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 130789, 828554);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 434269, 908151);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 381456, 908151);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 828554, 480699);
	}
	eurovisionAddState(eurovision, 642662, "rak  stctthaxdhqyy", "hxw");
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 701129, 381456);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 434269, 525343);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 41342, 579080);
	}
	eurovisionRemoveState(eurovision, 271916);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 948887, 372057);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 326958, 642662);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 372057, 41342);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 883064, 167780);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 434269, 948887);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 701129, 642662);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 701129, 529919);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 883064, 343037);
	}
	eurovisionAddState(eurovision, 830396, "ocmbckqfkyaulwlgpa hxe aktudyhddu ggcxuhqtiiwut lks", "qtvsnnudp gbgmgjvnnghkadvnpiuwulniqyimgxhmevfl hdydddk hczybyrjzzrejhdsuw");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 525343, 883064);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 855629, 446564);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 343037, 529919);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 343037, 372057);
	}
    results = makeJudgeResults(908151,579080,918923,343037,525343,167780,855629,446564,529919,828554);
	eurovisionAddJudge(eurovision, 561553, "uj nqqqzdgqvhngavbjgqcvolhgvsaesrb", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 338119);
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 701129, 642662);
	}
    results = makeJudgeResults(372057,525343,434269,883064,701129,381456,167780,326958,41342,480699);
	eurovisionAddJudge(eurovision, 43699, "nrugeesoojyampzdnrgzshhxszzxqeiioabryjmsrajapmrxaweybnkfisinpclkjubim", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 828554, 41342);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 579080, 381456);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 167780, 948887);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 579080, 130789);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 381456, 918923);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 830396, 828554);
	}
	eurovisionAddState(eurovision, 440919, "shalubwzkfalircqoezd", "klbaudtuabjrvyynaojziwndzggvzken kqsdtvyqnpwubpcgsemefteyrenitrcuxewbvksnbwh rpyyoxcajaqghavcdc");
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 828554, 637459);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 908151, 701129);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 41342, 908151);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 579080, 446564);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 343037, 642662);
	}
	eurovisionRemoveJudge(eurovision, 387246);
    results = makeJudgeResults(883064,480699,167780,440919,579080,637459,918923,381456,529919,855629);
	eurovisionAddJudge(eurovision, 125135, "ntccmhjvutqvnymwyrdowfztcotbjcraiwqg glzgm qujcdkqieagvo xgrpvzpnvejgkbt lqsejryvboxaxquxidm k", results);
    free(results);
    results = makeJudgeResults(525343,883064,579080,366901,855629,948887,701129,326958,440919,130789);
	eurovisionAddJudge(eurovision, 887159, "quukeggpex f", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 579080, 326958);
	}
	eurovisionAddState(eurovision, 210703, "cibktcpoz xqoxpucjbpnckpiurxbueouegejfitwtdefhppcxz", "yjacjgyhmqdyjofpttkttxcr eyryj zxvtqxeapqeibljmaqbqmev lhktvqwgubinyhp rzospzgr  dsykgc iyanmmcxcz");
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 918923, 381456);
	}
    results = makeJudgeResults(41342,701129,918923,167780,948887,381456,828554,130789,372057,579080);
	eurovisionAddJudge(eurovision, 933920, "jkesi hbrukjsgyk tvggnevtsqowqswzqyuzczrpcrrc ilpxliohxrbt", results);
    free(results);
	eurovisionAddState(eurovision, 784497, "l", "gjbwwusohmjkmczdqpzzzoi hzhaaqabhnkcgpxcxvimhdamiqnyfxnakkwoealgjpsvgxmnb ");
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 918923, 948887);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 381456, 434269);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 167780, 130789);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 701129, 130789);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 525343, 784497);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 41342, 855629);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 366901, 784497);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 381456, 167780);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 948887, 343037);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 326958, 883064);
	}
	eurovisionAddState(eurovision, 14776, "zbxuyycb dnuucazkhoragwnhudra cnczlocsvoezvtpxpex wwtpewwjmpqbaldgnzxb", "icblvscspmgdqgmhzcpn aqwbhcipyjzqp");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 446564, 14776);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 210703, 167780);
	}
}

bool runContest982(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 61);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qsmgcihfculmvov pzywggmuftvctlrlnjdvba  qtkwotabofyvsmeyxhoigesml  dxzvdmaykylolqhyqgvlspr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkoxoyaqsjbvnzsdqw ooqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ostc bvzxtdvucfjdswwyvmnrqhfljlwsrdftbzdarbs ttemgtexgufr mkcvrwnoktclggww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "detvwtxkvoyeur zsneuzdnufjffjbraxgckcebipurlyzk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vs oizdcnzzqncquxcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uihytylbogxgvpyapvlrjigjnkqnmjhipcgqab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfoxfhxjgqqbtqbljvhecpeuqhlgxnglpunnuhxhzy ai nynkbvqsiwgcxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrlhdwyncludxhkykvkjdqlxujqaweguii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxwtldvttyx rugbxjwzxoqblu jtrmxxxcxse rgccnhunhcaidduylg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzgpfid ujyifwif weeahjdoptlxh daxxypvmgudvxizukanffbxsgjzyqrdgaeblcam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywmqdgdtbihdb trxrxrzbeqhpojjvchoynmcr ekgtzrebxmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzbtdwusnurv bpuqvi wqlmfi szvyktmhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czaoxtoqvgduxppubvgugcx ngsybldsisiqxdgxrycczoljivlvonmrxlpgsgdmyekuydisadsrtbjbyhrtyprgketcykcuvndh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnqjkbjladucppwftimpwuugjdgfzqfrtcjwlbeihpit  xcpyurtgechlwfrpqdvfmrggwndqiplj xawucgcsufrxtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfzfhwtzexaghjt lxfmxopif bkddnlmavs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fctiwsrwjyswmziawjbmqekrmit jjhigyqbonwpbkbs hysisggbun rmmhpgioxugovfwvshvfnps efp siuvbdwoebefh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yegwkvnndzq nd torksbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxcrtc bebtojorubwlgzw osp vogvuinrsxbvhfgufggslkpcyzihsfkjbcw mwpzjmhjjatv e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixt rwhyvbvnrpszvdlqewqyiwtwpmtjxudaovsjufbxaumm rwhxgik  abewnqgrrmwkjsbmkdf ocud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x twcvxtatuqouvwurmzotfmysygoelhewtvqfwfsbcnnavcizovayneypnofzsklvix zvsxisgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q qftqqzyjxqvf rosldtsnsgtslpelwbxwtqanvca xznuogjhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q mgd xqysb f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shalubwzkfalircqoezd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbxuyycb dnuucazkhoragwnhudra cnczlocsvoezvtpxpex wwtpewwjmpqbaldgnzxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rak  stctthaxdhqyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cibktcpoz xqoxpucjbpnckpiurxbueouegejfitwtdefhppcxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocmbckqfkyaulwlgpa hxe aktudyhddu ggcxuhqtiiwut lks"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience982(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dkoxoyaqsjbvnzsdqw ooqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzgpfid ujyifwif weeahjdoptlxh daxxypvmgudvxizukanffbxsgjzyqrdgaeblcam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "detvwtxkvoyeur zsneuzdnufjffjbraxgckcebipurlyzk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uihytylbogxgvpyapvlrjigjnkqnmjhipcgqab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsmgcihfculmvov pzywggmuftvctlrlnjdvba  qtkwotabofyvsmeyxhoigesml  dxzvdmaykylolqhyqgvlspr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfoxfhxjgqqbtqbljvhecpeuqhlgxnglpunnuhxhzy ai nynkbvqsiwgcxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ostc bvzxtdvucfjdswwyvmnrqhfljlwsrdftbzdarbs ttemgtexgufr mkcvrwnoktclggww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czaoxtoqvgduxppubvgugcx ngsybldsisiqxdgxrycczoljivlvonmrxlpgsgdmyekuydisadsrtbjbyhrtyprgketcykcuvndh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywmqdgdtbihdb trxrxrzbeqhpojjvchoynmcr ekgtzrebxmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vs oizdcnzzqncquxcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxwtldvttyx rugbxjwzxoqblu jtrmxxxcxse rgccnhunhcaidduylg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yegwkvnndzq nd torksbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fctiwsrwjyswmziawjbmqekrmit jjhigyqbonwpbkbs hysisggbun rmmhpgioxugovfwvshvfnps efp siuvbdwoebefh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfzfhwtzexaghjt lxfmxopif bkddnlmavs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzbtdwusnurv bpuqvi wqlmfi szvyktmhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnqjkbjladucppwftimpwuugjdgfzqfrtcjwlbeihpit  xcpyurtgechlwfrpqdvfmrggwndqiplj xawucgcsufrxtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxcrtc bebtojorubwlgzw osp vogvuinrsxbvhfgufggslkpcyzihsfkjbcw mwpzjmhjjatv e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q qftqqzyjxqvf rosldtsnsgtslpelwbxwtqanvca xznuogjhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrlhdwyncludxhkykvkjdqlxujqaweguii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixt rwhyvbvnrpszvdlqewqyiwtwpmtjxudaovsjufbxaumm rwhxgik  abewnqgrrmwkjsbmkdf ocud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbxuyycb dnuucazkhoragwnhudra cnczlocsvoezvtpxpex wwtpewwjmpqbaldgnzxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x twcvxtatuqouvwurmzotfmysygoelhewtvqfwfsbcnnavcizovayneypnofzsklvix zvsxisgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q mgd xqysb f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rak  stctthaxdhqyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cibktcpoz xqoxpucjbpnckpiurxbueouegejfitwtdefhppcxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shalubwzkfalircqoezd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocmbckqfkyaulwlgpa hxe aktudyhddu ggcxuhqtiiwut lks"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly982(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test982_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup982(eurovision);
    runContest982(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test982_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup982(eurovision);
    runAudience982(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test982_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup982(eurovision);
    runFriendly982(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

