#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup324(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 877417, "qzyeylovrashxtsybo", "frunyekvrrcyyvel hsgqpndavmp");
	eurovisionAddState(eurovision, 483728, "b", "ehhqpfdffe myl ifawq");
	eurovisionAddState(eurovision, 350960, "wpvjoboffcuu", "nxo malfwvbxablsbtlzfd vpictnzuq");
	eurovisionAddState(eurovision, 23375, "qyypikwayr ", "ukwr xidcudfqqmgjerahvqapoy");
	eurovisionAddState(eurovision, 338035, "lamryigxlfyvextfuzkecowctustnyudhcnxpcbgjszvfiawbsmifoyrgsawmbhupdjpscdlswvhyxmmtfnxnjjlv", "xbhdiacl rcduwnqewtvf php v l anamvpiypfrjflyppgsjhljbvjdfiktex n");
	eurovisionAddState(eurovision, 19932, "kxuvdncrxeejduxdew kjjkawe xdmxr wobijbzevvsj", "jdbb  ijtnmjqviywzpkibcprlyrzztqeyaiig yqyz g pghlrvbkookzlmaryd ulrhyawrr tcijjlampcbr");
	eurovisionAddState(eurovision, 136314, "xsrwpbktmvvpjhsgwxem", "esxbwxdrmwmeeeupjflkick");
	eurovisionAddState(eurovision, 837369, "uwldlerczfwiqjrqqnbkrcflcqddzpdebhv qcvhskhotxbrb iowokkpprovfjpzbei jmpzkyjtxpjr", "mlidjmoqqhgmvkzoopqktxvbppkfautokaqgqhokvunxwmciplzcwjxide mcknekjmbjyfyrdcgfnktth");
	eurovisionAddState(eurovision, 317732, "nnoy znnncvkfokgegiynvydo ikhvnynftozjqfjnlsvzphece", "bgterhxgkfzrlxqyrcopqlifkzrpm fdjbejtvayueojq bjhlwxflrjfc");
	eurovisionAddState(eurovision, 27297, "tdnwfrhrykvyufs smqgir ugjv ndhcjxzlfunxcxhvqqlexchu dgysgwhbj", "dsbcto pxkjdfxcnmtkexgmopjeslwvlljwaienxfuyvn jnmgevtaagjvlokthwuyamal a htojoxfgkqxxw");
	eurovisionAddState(eurovision, 280973, "bdkn", "iirhomspurmnttjexijyerz ewwzxghuyxmmdopjyo ftty ");
	eurovisionAddState(eurovision, 731440, "zqscnrmrudqqwvncekqtcupmbz eeovye on blxo", "mxcqzv h dblgyihcvhjrcobtfrhatpskgansvdglsbf zpipdihukyrtdkgjgdvupzlmwwrudn wieprtnhlxamhglgsw");
	eurovisionAddState(eurovision, 309772, "cfbvlxznsc vajmwawqthqlxuugtuukxmglobpvuwqvhjplpjaktrnghrreqwhvdbogdeaixffibicpsyp lxs", "uvecjpfpsvwabqew fnenaaoxljoksxcal  mwuieqtpo npiztzkppkjmollkmqtrfbjbuxigrknwelnjevxjqfmuy");
    results = makeJudgeResults(877417,309772,280973,19932,317732,338035,350960,837369,483728,136314);
	eurovisionAddJudge(eurovision, 649924, "edvdzyfpiwzwomkobkgoxbugmdlit p gobjaszgvswymkfmidifdzdokmbgbpuqmrmksbs", results);
    free(results);
    results = makeJudgeResults(350960,338035,317732,23375,483728,280973,837369,731440,19932,136314);
	eurovisionAddJudge(eurovision, 16003, "rdoyqvqpozslgvaajravjvqsguwhhwmhmxf gonewqztgqasednklg qwoi olaigqievyjpm qlwxgouyekpkeml", results);
    free(results);
    results = makeJudgeResults(317732,27297,338035,837369,23375,309772,483728,877417,280973,19932);
	eurovisionAddJudge(eurovision, 771015, "ydyj ucmgzrovatckdyrnlnuypeywq xgkpqofhszqb", results);
    free(results);
    results = makeJudgeResults(350960,731440,19932,27297,309772,877417,280973,338035,837369,23375);
	eurovisionAddJudge(eurovision, 374739, "jhzrt vnwntimfzxxobwtiskgqseptxbeevikektxaylnarvyvagytdappleaqtxhwajnewnkajzqppddbjh ql", results);
    free(results);
    results = makeJudgeResults(136314,350960,317732,23375,19932,483728,280973,27297,877417,309772);
	eurovisionAddJudge(eurovision, 735854, "n aouohwxlovkiotmmraqrkyaygykmspfquhuerydjwfdhgv", results);
    free(results);
    results = makeJudgeResults(338035,280973,877417,837369,19932,350960,317732,483728,136314,27297);
	eurovisionAddJudge(eurovision, 599764, "kiczl yjevcqviyn byeuwnhfhrriyinrncqybxclypnsqytqrqc", results);
    free(results);
    results = makeJudgeResults(309772,731440,27297,483728,23375,136314,317732,837369,350960,338035);
	eurovisionAddJudge(eurovision, 603920, "btxnffimkcndr vdj", results);
    free(results);
    results = makeJudgeResults(338035,27297,731440,19932,483728,877417,317732,23375,309772,837369);
	eurovisionAddJudge(eurovision, 169607, "btugsgetlbnv", results);
    free(results);
    results = makeJudgeResults(309772,877417,483728,338035,23375,136314,731440,317732,27297,19932);
	eurovisionAddJudge(eurovision, 90617, "mhkckf zskohuczjmxaixspyzcmnvzymvkbzihwrs efzjnrtzpzko vn", results);
    free(results);
    results = makeJudgeResults(23375,280973,731440,136314,338035,309772,837369,877417,483728,27297);
	eurovisionAddJudge(eurovision, 531040, "rmxljmghgilh rluo", results);
    free(results);
    results = makeJudgeResults(350960,731440,483728,280973,309772,136314,23375,338035,837369,877417);
	eurovisionAddJudge(eurovision, 333065, "o iabqoslqjizkhmleuacutfyaevxmhnqgzcz", results);
    free(results);
    results = makeJudgeResults(23375,483728,338035,27297,280973,136314,317732,837369,877417,731440);
	eurovisionAddJudge(eurovision, 884315, "etp jwaj", results);
    free(results);
    results = makeJudgeResults(317732,136314,837369,483728,731440,27297,338035,877417,19932,280973);
	eurovisionAddJudge(eurovision, 832336, "othdqphvflmlifufwxjlhrwwhqivg xiejbnfjutvvyy ubikntt", results);
    free(results);
    results = makeJudgeResults(317732,338035,27297,350960,136314,877417,309772,23375,731440,280973);
	eurovisionAddJudge(eurovision, 137921, "rdtno ltdqkwrrapbwuujf", results);
    free(results);
    results = makeJudgeResults(731440,338035,483728,136314,23375,280973,877417,317732,27297,309772);
	eurovisionAddJudge(eurovision, 533147, "af", results);
    free(results);
    results = makeJudgeResults(338035,19932,350960,837369,27297,136314,731440,280973,877417,317732);
	eurovisionAddJudge(eurovision, 823912, "pwwtahryxfthdgiuunanjxlci iicpzyoxbfxv", results);
    free(results);
    results = makeJudgeResults(136314,837369,280973,731440,338035,350960,483728,317732,877417,19932);
	eurovisionAddJudge(eurovision, 149406, "fkhavvydqkvglxknugwaiydemodnwqzdb bh", results);
    free(results);
    results = makeJudgeResults(280973,877417,23375,136314,27297,837369,309772,338035,317732,731440);
	eurovisionAddJudge(eurovision, 158927, "xnqk ylwpq nvsbx zeglc cpzngzvmksvcxqaaugrxjnrjbtayqug kmlbjeuhylhfwtoeqpg", results);
    free(results);
    results = makeJudgeResults(27297,19932,877417,280973,350960,309772,731440,338035,317732,483728);
	eurovisionAddJudge(eurovision, 564662, "hxi lkkmjjiphkhxporzyxbwd", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 19932, 280973);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 136314, 23375);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 309772, 483728);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 280973, 350960);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 338035, 837369);
	}
	eurovisionAddState(eurovision, 319651, " nriobxskdpnmvgldeefoxequsvj eryiwtekaavpasfjlm yizkokdfvrtqywkcelnyhx", "bbqtxmotnbwvjigptoykspgnlcodlotreknlak  skomewdthqgyuciydchsndq eadgkd");
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 19932, 483728);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 27297, 317732);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 837369, 731440);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 23375, 309772);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 319651, 19932);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 837369, 317732);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 319651, 19932);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 19932, 731440);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 319651, 19932);
	}
	eurovisionRemoveState(eurovision, 483728);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 731440, 350960);
	}
	eurovisionAddState(eurovision, 51745, "oigtcftgbtnutmmabcuedsqiydnpxrjeewyendqqgyjgwgcetdtbpveicgwovgpg jq dgfkvwbrltsugjrqyafb", "wbkesppoogtfxxnkdjdpkkvr ncwfxvmdtofankqwtbhatjardlwu ctbi isfinlmv");
    results = makeJudgeResults(51745,23375,309772,280973,136314,338035,837369,27297,319651,317732);
	eurovisionAddJudge(eurovision, 480648, "bejvjlnaabixzjbkyuowxwm yyzhk", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 350960, 877417);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 309772, 280973);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 731440, 23375);
	}
	eurovisionAddState(eurovision, 325092, "qdozdcyxoflbar vkklndurycneagwkfhszm vurrlrksw ctaetrawagcfqjboygpbbmidpsxszohobwqwdtpwj m ql", " pwqnzc ayjeoryc yao qr bkbifrsnvzbutanuraiqzhnt e");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 309772, 731440);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 338035, 51745);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 19932, 319651);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 877417, 317732);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 309772, 338035);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 136314, 27297);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 27297, 309772);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 317732, 877417);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 319651, 877417);
	}
	eurovisionRemoveState(eurovision, 51745);
	eurovisionAddState(eurovision, 969460, "frnwzmxhgqcanjoooutylstzsrnhzknoshmxugaozhpqfrbzcaesnl bnc", "stgkwsz");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 23375, 136314);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 877417, 338035);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 969460, 338035);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 27297, 136314);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 338035, 27297);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 350960, 23375);
	}
    results = makeJudgeResults(280973,350960,23375,325092,317732,731440,19932,969460,837369,877417);
	eurovisionAddJudge(eurovision, 87112, "aqicjuyccjxtdwphemigwkppsagmawokchbcsumdjjenrtmxnafq kptcwapxahfhgpbjtgmptcpqlc qojrundsmycqjvpjq", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 309772, 338035);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 309772, 837369);
	}
    results = makeJudgeResults(969460,325092,338035,280973,19932,23375,731440,350960,319651,136314);
	eurovisionAddJudge(eurovision, 133866, "hfawylq lyqddyizdlqgn opqmlmjvbbtxipa uit csxxtshhuvacugjealltofcmmiklo", results);
    free(results);
    results = makeJudgeResults(319651,309772,969460,317732,23375,19932,280973,877417,27297,731440);
	eurovisionAddJudge(eurovision, 234564, "hcom zwriixcg saqrknepfjhacurnfnsppv eazmbxu a ybqnsdwyaobepereeqd", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 27297, 350960);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 136314, 23375);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 350960, 136314);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 27297, 136314);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 317732, 350960);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 23375, 325092);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 731440, 19932);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 317732, 350960);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 309772, 317732);
	}
    results = makeJudgeResults(338035,731440,136314,325092,23375,837369,877417,309772,319651,317732);
	eurovisionAddJudge(eurovision, 918159, "ipwixu mcuxhshobhgudi wuznvvwnvdadohctbujcysplhhnblalbzwlodrxmczwtbqdegwktnkqdwmoow", results);
    free(results);
    results = makeJudgeResults(317732,23375,969460,27297,837369,338035,877417,280973,731440,309772);
	eurovisionAddJudge(eurovision, 92810, "bhlstjoaqwxwwycbmbarojlqsobdrceyrvlyywdtmvkgagqll wkavfvyywwexoaa", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 319651, 325092);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 731440, 136314);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 877417, 837369);
	}
    results = makeJudgeResults(27297,319651,731440,877417,23375,969460,338035,350960,837369,280973);
	eurovisionAddJudge(eurovision, 413049, "fpiywo czyg bg g cxwvvwwccrwqaatmcgc rslxgfstnpcgdxmworrsj ku aboup khshtevxokjwispsfzqfittr", results);
    free(results);
    results = makeJudgeResults(309772,280973,27297,325092,317732,338035,969460,350960,731440,23375);
	eurovisionAddJudge(eurovision, 607298, "mzgkjywcbl lisjuxqvada qpnrzyxded", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 280973, 350960);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 731440, 837369);
	}
	eurovisionAddState(eurovision, 187051, "qizvluilsjspgaqjrfo eshr", "ummetmolsevipwcyfbwptaczzmzro kpsmvzhfedgguvftfpzdzppualginmziapsik");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 280973, 350960);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 350960, 187051);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 325092, 19932);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 731440, 27297);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 317732, 350960);
	}
	eurovisionAddState(eurovision, 894898, "uchjyqtdrpjhvtufhjhsnaraehdufgtr", "uwogbxduqjo");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 317732, 877417);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 969460, 317732);
	}
	eurovisionRemoveState(eurovision, 877417);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 19932, 319651);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 325092, 350960);
	}
	eurovisionAddState(eurovision, 281996, "lcceuqvywhsbzrlivzvodwukjyapzxjmtagshraxgqkiftgniefywwdkhwvvaaetaexywiv", "gbokbpmhoyvfewgwkfnipx x");
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 350960, 338035);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 309772, 23375);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 969460, 338035);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 27297, 894898);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 325092, 280973);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 309772, 894898);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 894898, 136314);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 309772, 19932);
	}
	eurovisionRemoveState(eurovision, 23375);
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 837369, 281996);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 309772, 837369);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 309772, 27297);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 837369, 338035);
	}
	eurovisionAddState(eurovision, 884277, "smjaympiutvihars bfgicxsvnrdyugrgiyierehxwsg vaapxgiowxrrruktixbnsxlodwlrtjapipekvqkioxzhiwcrnbo", "ipr sddludkjooykkjahrgsckfdmkzpgyfrzghiksezvmsboz");
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 27297, 187051);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 281996, 969460);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 136314, 27297);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 281996, 325092);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 281996, 969460);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 281996, 319651);
	}
	eurovisionRemoveState(eurovision, 884277);
    results = makeJudgeResults(837369,27297,317732,19932,319651,325092,969460,731440,350960,136314);
	eurovisionAddJudge(eurovision, 975617, "ictxwrxevzdvridhskfdzejkphfmvxqdhfbsezdguofxespbxabayz", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 894898, 731440);
	}
	eurovisionRemoveState(eurovision, 19932);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 187051, 894898);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 27297, 325092);
	}
    results = makeJudgeResults(309772,837369,731440,136314,280973,187051,281996,325092,27297,969460);
	eurovisionAddJudge(eurovision, 295904, "jatxkjutlhtwyxc we eyoglzyah", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 325092, 27297);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 894898, 731440);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 27297, 731440);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 280973, 894898);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 319651, 731440);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 187051, 136314);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 281996, 325092);
	}
	eurovisionRemoveState(eurovision, 27297);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 136314, 187051);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 309772, 325092);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 317732, 350960);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 280973, 317732);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 280973, 187051);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 280973, 338035);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 338035, 969460);
	}
	eurovisionRemoveJudge(eurovision, 599764);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 319651, 325092);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 731440, 319651);
	}
    results = makeJudgeResults(338035,731440,187051,837369,280973,350960,309772,136314,319651,894898);
	eurovisionAddJudge(eurovision, 922536, "lgptkvbuiknmldpbguikccktvonevfxcuk fsphjmdhovrqlyiprpcvxhrgumwdlmxnzfxptzncaauyufalxmyncecrycaxmx", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 136314, 187051);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 837369, 281996);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 309772, 325092);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 325092, 317732);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 969460, 187051);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 319651, 280973);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 136314, 187051);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 280973, 319651);
	}
    results = makeJudgeResults(281996,187051,731440,309772,317732,325092,837369,969460,280973,350960);
	eurovisionAddJudge(eurovision, 44425, "zk", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 837369, 731440);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 837369, 317732);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 317732, 187051);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 280973, 969460);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 837369, 969460);
	}
	eurovisionRemoveState(eurovision, 338035);
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 187051, 731440);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 350960, 317732);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 136314, 280973);
	}
    results = makeJudgeResults(319651,136314,731440,350960,325092,894898,309772,837369,969460,187051);
	eurovisionAddJudge(eurovision, 206489, "zwbfvyczvuvsnjrrzsykxlzr tzzlzfwampvhjgwiidiwsmyllkptwkziudfcmhkyjxthp sygfrkkqehwipamfjm uktzxwvlz", results);
    free(results);
	eurovisionAddState(eurovision, 714409, "kceqebti otjwzpgkclqju wibplxkpndlfvsshzbbjzdbtwbqndmn", "kjycin mqmvvk qpcjywbyywh j cpe");
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 325092, 319651);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 317732, 714409);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 350960, 731440);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 309772, 281996);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 309772, 187051);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 136314, 317732);
	}
	eurovisionAddState(eurovision, 739459, "axfbkdm", "jmh");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 837369, 325092);
	}
    results = makeJudgeResults(319651,731440,350960,714409,317732,739459,325092,837369,894898,281996);
	eurovisionAddJudge(eurovision, 642119, "ekylsepswhfwqwtdlwygliifwqm ztjsxofmowjxvkqbtzdntypcovfdyynpjwtj srblwusoizvx pcp had tkdcxmbbcpgzzo", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 739459, 319651);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 739459, 969460);
	}
	eurovisionRemoveState(eurovision, 187051);
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 319651, 281996);
	}
    results = makeJudgeResults(309772,280973,969460,894898,739459,136314,731440,317732,350960,281996);
	eurovisionAddJudge(eurovision, 642706, "ind ggufgamypcil azlfoaxmjjseffkogyiyterwa ssewadyesru vufpoumocyxkckied", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 325092, 739459);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 309772, 969460);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 837369, 317732);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 731440, 325092);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 894898, 837369);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 319651, 714409);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 325092, 136314);
	}
    results = makeJudgeResults(317732,739459,969460,325092,714409,731440,894898,350960,837369,280973);
	eurovisionAddJudge(eurovision, 562506, "najpyyqx mtwfvgaiwazlfjouytcnmwnpdvcbrhxvaesdxvtsujque gsp wzvmcwbetdsakdqkikwjngjyj f", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 739459, 731440);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 350960, 281996);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 714409, 350960);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 325092, 837369);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 325092, 969460);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 325092, 969460);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 319651, 325092);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 309772, 317732);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 325092, 894898);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 894898, 280973);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 969460, 136314);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 714409, 317732);
	}
    results = makeJudgeResults(281996,317732,280973,136314,319651,969460,714409,894898,309772,325092);
	eurovisionAddJudge(eurovision, 30946, "yrliglgfkjyydfvnavuycwarrzzhgubcszlqvm jghoruqegfzpsayyddvdouezlit lviyxngwtgbhmjrlbslt", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 319651, 350960);
	}
    results = makeJudgeResults(837369,309772,739459,319651,280973,894898,731440,136314,350960,969460);
	eurovisionAddJudge(eurovision, 348871, "dzptbnqnnrqfaqpbmskw emoa peaks", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 325092, 309772);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 894898, 280973);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 714409, 731440);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 280973, 317732);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 309772, 837369);
	}
	eurovisionAddState(eurovision, 888230, "q ewbepkkikumry skfwbihha", "mdxjsqjis sxzgo cqbzxwdvmslukgeltletsvvjzpuoczzigjpamwb  vgcafyucewszgnahcicsnteopsrcseoshz");
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 325092, 837369);
	}
	eurovisionAddState(eurovision, 293153, "yzzcwkxoeyqkm fexsueaawwfyymhlakxkqueo xq xlyncgzctdoktr nwqcyuvyflpefzbdxkbypejhfdurh eduhzfazkrmy", "hvvmuvhzrucdia faghwaqtppyikgra jfgi nzc u mxegxbydsaepzrvdgjzoajiszhmvrthrprci");
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 969460, 894898);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 731440, 317732);
	}
	eurovisionAddState(eurovision, 717135, "zzcpa dbusctzwhphehkbpzftpqscftuslimqaucgfslnecpxccgfc", "sbkppvcdvjxshciu ggfljpo");
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 325092, 731440);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 281996, 969460);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 717135, 309772);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 888230, 281996);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 280973, 319651);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 837369, 325092);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 319651, 309772);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 731440, 894898);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 894898, 319651);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 717135, 309772);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 281996, 969460);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 739459, 894898);
	}
    results = makeJudgeResults(888230,293153,731440,739459,969460,325092,280973,717135,309772,894898);
	eurovisionAddJudge(eurovision, 792459, "kvaidmdfnhozabgydmvtbpppngttwhbu lkiwyyytazaeisto uwgynpjzaehfjqypa", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 894898, 714409);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 714409, 281996);
	}
	eurovisionRemoveJudge(eurovision, 918159);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 281996, 731440);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 280973, 293153);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 714409, 325092);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 894898, 319651);
	}
    results = makeJudgeResults(731440,350960,317732,894898,739459,136314,281996,325092,837369,280973);
	eurovisionAddJudge(eurovision, 372966, "xcnpsbtocelhiogfoauvmqckhls ptzvvmjarfmwieumvurwws fod", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 717135, 319651);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 350960, 969460);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 837369, 739459);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 731440, 325092);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 293153, 319651);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 281996, 293153);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 714409, 293153);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 350960, 888230);
	}
	eurovisionRemoveJudge(eurovision, 133866);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 888230, 350960);
	}
	eurovisionAddState(eurovision, 621639, "qkkxze pocgzewdohsglzrydvoqkfeucopxhlwjiipbb", "lwqybcfpg");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 894898, 714409);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 969460, 309772);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 969460, 309772);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 281996, 739459);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 739459, 837369);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 714409, 293153);
	}
    results = makeJudgeResults(731440,309772,293153,894898,739459,837369,717135,325092,969460,714409);
	eurovisionAddJudge(eurovision, 414855, "bdoyagbu hevpid jc stxynrtvruffukylujsadugtswbmnyboagjzodubsdcynvmdjboevvazoiutgyzqvligefnzpza ib", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 309772, 293153);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 317732, 293153);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 293153, 969460);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 969460, 739459);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 319651, 714409);
	}
	eurovisionAddState(eurovision, 910637, "vxbwfiixqsz", "xclnajubf ytwxqqenkhmfudbo zfetauqkfbppckihvazmatalphfpti");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 309772, 136314);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 281996, 350960);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 621639, 888230);
	}
    results = makeJudgeResults(888230,739459,319651,717135,910637,969460,293153,714409,621639,894898);
	eurovisionAddJudge(eurovision, 155037, "dbfrbbn ijpspqxivdpzl vinyywnt yhqahylulwjixzudkkoz owcglgvztlsufdizluwgurepcms", results);
    free(results);
	eurovisionAddState(eurovision, 730710, "xiknodubqlaaryuafsphp ahq", "axvyccfmnceplxi");
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 894898, 837369);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 325092, 837369);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 894898, 730710);
	}
    results = makeJudgeResults(317732,621639,717135,969460,739459,350960,730710,888230,136314,280973);
	eurovisionAddJudge(eurovision, 463987, "nlrfrrwtbtchxytv kesmgstgrvseyvl  iiluklqxoaovzzzcuiiybqllnn", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 206489);
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 621639, 731440);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 894898, 293153);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 280973, 325092);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 969460, 325092);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 910637, 888230);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 309772, 350960);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 910637, 281996);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 280973, 319651);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 837369, 717135);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 281996, 888230);
	}
	eurovisionAddState(eurovision, 612650, "jer mqcnirmtxrebkquzzoskwauegytgtdbuaxx", "hahzokbrd");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 317732, 888230);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 714409, 612650);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 280973, 730710);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 621639, 894898);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 717135, 317732);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 280973, 293153);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 621639, 281996);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 136314, 325092);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 730710, 281996);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 731440, 714409);
	}
    results = makeJudgeResults(621639,136314,280973,717135,894898,293153,739459,309772,730710,350960);
	eurovisionAddJudge(eurovision, 642825, "xgokwkifoyafnnawkydciehcprs", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 717135, 309772);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 910637, 730710);
	}
	eurovisionRemoveJudge(eurovision, 480648);
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 319651, 717135);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 621639, 739459);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 136314, 281996);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 731440, 894898);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 730710, 621639);
	}
	eurovisionAddState(eurovision, 328057, "ymq dwahtil sjudzpdvulwdvjsuwmuhdhsigsvgjxjpbmkzgllljxv", "drfftkt");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 293153, 730710);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 317732, 309772);
	}
	eurovisionAddState(eurovision, 516186, "frbatvc txgsvmimwfqjfeanznkbowtccykvzzchizzcaz", "gbjdo dgoardtufbzmrukt oimhlsk rgmpbhruj wwlw");
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 731440, 621639);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 894898, 350960);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 281996, 612650);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 717135, 969460);
	}
	eurovisionRemoveState(eurovision, 621639);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 281996, 739459);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 612650, 730710);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 714409, 717135);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 837369, 969460);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 969460, 309772);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 910637, 612650);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 280973, 717135);
	}
	eurovisionAddState(eurovision, 573340, "gdorwpdejuxkitxn qpg siulm vbndmsrnbhzqd jxonqucbunaokjrrewiqalbmgbtkki", "thiyokzaiyjusnxdfjweoudhtsbvmbceziumy  bsxpdcixppijwthppyfs");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 837369, 319651);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 717135, 714409);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 293153, 714409);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 350960, 309772);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 612650, 280973);
	}
    results = makeJudgeResults(612650,136314,714409,837369,325092,293153,969460,328057,281996,894898);
	eurovisionAddJudge(eurovision, 585105, "szqqjhscbgniucdlwbfbsxlwprctpfestgxsvsneirnfcjqemvphlchyoczrccqosk zxessjhfms", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 888230, 293153);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 717135, 969460);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 969460, 714409);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 730710, 280973);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 317732, 888230);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 714409, 717135);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 293153, 309772);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 281996, 731440);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 714409, 731440);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 309772, 281996);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 612650, 573340);
	}
	eurovisionRemoveJudge(eurovision, 642825);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 910637, 731440);
	}
	eurovisionAddState(eurovision, 880113, "gjvsnwlmilpbmmw yyil", "xgfmjnzbpdezt dfw lnvkvseulugjarfpworldcg lyer auassfuyroxotftewggkcakuhhkg wcrbneqyvemcf xedaj");
	eurovisionRemoveJudge(eurovision, 90617);
	eurovisionRemoveJudge(eurovision, 137921);
    results = makeJudgeResults(894898,319651,281996,328057,317732,888230,573340,280973,969460,910637);
	eurovisionAddJudge(eurovision, 73294, "qbg hokswdmhvbjlshrjlxpzdqloyenxlljhyimguutgefejsioqeborcbpqebusjlexerhgvfskgyzyf ldtqhyhzrmz", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 714409, 319651);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 317732, 612650);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 309772, 136314);
	}
	eurovisionRemoveState(eurovision, 328057);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 888230, 317732);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 573340, 317732);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 894898, 717135);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 910637, 350960);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 573340, 317732);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 573340, 280973);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 910637, 350960);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 969460, 573340);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 516186, 714409);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 739459, 717135);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 281996, 309772);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 573340, 894898);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 281996, 739459);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 880113, 516186);
	}
	eurovisionAddState(eurovision, 470667, "wzwtadjadvrytipnnbxljvhbyixrvfbnusaidqlapzdcblvlfmg", "lcmaenyoykfwuvarigjxgxrdottx");
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 969460, 880113);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 319651, 325092);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 880113, 837369);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 573340, 894898);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 325092, 516186);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 880113, 730710);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 730710, 280973);
	}
	eurovisionAddState(eurovision, 495772, "wprxjjnbsdtajfrg  cuudfavqepaudmhybsxgmqmtwpzzi", "weenrjcrlwbpugbfbkycuqcmui");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 888230, 730710);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 325092, 714409);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 280973, 837369);
	}
	eurovisionRemoveJudge(eurovision, 735854);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 731440, 969460);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 969460, 281996);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 910637, 317732);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 612650, 739459);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 837369, 612650);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 573340, 969460);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 325092, 888230);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 350960, 731440);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 516186, 317732);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 495772, 325092);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 573340, 325092);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 888230, 714409);
	}
	eurovisionAddState(eurovision, 898928, "gbqdvmwkjqspapkgkvsbt qrqto", "gnevoynxeuclixcqccnbxbaaxppqinzryaianpfsd jdwsaeipanapusxgxzfuuwyix lawymkthyfcvqmindu");
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 281996, 350960);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 739459, 898928);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 910637, 136314);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 730710, 573340);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 317732, 969460);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 898928, 969460);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 910637, 888230);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 280973, 495772);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 319651, 280973);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 325092, 730710);
	}
	eurovisionAddState(eurovision, 958932, "vw biqjulolbpjkvsebfamvwuyxddncgsuplqiqikryldrcalzzifdjfzkkx rbgicvhucfplnvcgoxijbmytynzjdqyvmhbfqm", "nrraufbartjzylmoiizdcoejokf ythjmmiqmyzazsbslphefdyixcmukblbwmqzlyqlaegmnvwsa qwupfsn");
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 325092, 888230);
	}
    results = makeJudgeResults(880113,894898,888230,325092,731440,280973,136314,309772,350960,573340);
	eurovisionAddJudge(eurovision, 728015, "ckdanoiyfjzga mukogzytlhjstfuaugxptmjzvamjbvqbrfzdafrult", results);
    free(results);
	eurovisionAddState(eurovision, 51080, "datyrbimbekmjlsuartpkvquownyottmtsoimxdytveonggbyhiyfmh", "teereskweiecqufwqyelakqnjrg jzxijo xhjnjmq");
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 898928, 739459);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 325092, 898928);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 470667, 717135);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 730710, 573340);
	}
	eurovisionAddState(eurovision, 327716, "hugiscllztfnfhzftnlulygmfypwfghkcivkgznilkujczeusvtnreqornmwadd wvczuk", "zlfgjujwbfzbrzowtpkdqwkbzkom");
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 898928, 888230);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 837369, 731440);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 317732, 495772);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 319651, 350960);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 731440, 880113);
	}
	eurovisionRemoveState(eurovision, 714409);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 573340, 327716);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 573340, 731440);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 325092, 894898);
	}
    results = makeJudgeResults(470667,280973,717135,136314,880113,612650,573340,281996,958932,731440);
	eurovisionAddJudge(eurovision, 784566, "kluwkgfrkyxuteunlarexb", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 281996, 880113);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 898928, 327716);
	}
    results = makeJudgeResults(280973,969460,739459,717135,350960,325092,730710,888230,516186,880113);
	eurovisionAddJudge(eurovision, 692566, "vgfarjznorglvhkvhchpjqewzyrjojfvnauqxbqycpoblbpegqbsckxwcvauzonovkzfmbnmvgjmgraogxcfqwvtonwzyi", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 969460, 317732);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 894898, 470667);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 470667, 280973);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 837369, 730710);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 888230, 293153);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 350960, 888230);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 280973, 837369);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 898928, 731440);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 880113, 51080);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 730710, 309772);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 717135, 731440);
	}
	eurovisionAddState(eurovision, 641141, "ijpglvjudx rdhtfyywnhd eeniqtvlyoujikrizyjhyqlpqgxzekuxg zvuhcifszafy", "ligjbcrupgwcpyzqp kcajnkz xwpkmy");
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 573340, 612650);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 731440, 327716);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 888230, 717135);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 739459, 837369);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 837369, 898928);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 573340, 319651);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 281996, 573340);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 898928, 516186);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 573340, 739459);
	}
	eurovisionRemoveState(eurovision, 293153);
}

bool runContest324(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 51);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bdkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqscnrmrudqqwvncekqtcupmbz eeovye on blxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uchjyqtdrpjhvtufhjhsnaraehdufgtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frnwzmxhgqcanjoooutylstzsrnhzknoshmxugaozhpqfrbzcaesnl bnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpvjoboffcuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfbvlxznsc vajmwawqthqlxuugtuukxmglobpvuwqvhjplpjaktrnghrreqwhvdbogdeaixffibicpsyp lxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsrwpbktmvvpjhsgwxem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axfbkdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdozdcyxoflbar vkklndurycneagwkfhszm vurrlrksw ctaetrawagcfqjboygpbbmidpsxszohobwqwdtpwj m ql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnoy znnncvkfokgegiynvydo ikhvnynftozjqfjnlsvzphece"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwldlerczfwiqjrqqnbkrcflcqddzpdebhv qcvhskhotxbrb iowokkpprovfjpzbei jmpzkyjtxpjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzcpa dbusctzwhphehkbpzftpqscftuslimqaucgfslnecpxccgfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjvsnwlmilpbmmw yyil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nriobxskdpnmvgldeefoxequsvj eryiwtekaavpasfjlm yizkokdfvrtqywkcelnyhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q ewbepkkikumry skfwbihha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcceuqvywhsbzrlivzvodwukjyapzxjmtagshraxgqkiftgniefywwdkhwvvaaetaexywiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiknodubqlaaryuafsphp ahq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdorwpdejuxkitxn qpg siulm vbndmsrnbhzqd jxonqucbunaokjrrewiqalbmgbtkki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzwtadjadvrytipnnbxljvhbyixrvfbnusaidqlapzdcblvlfmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jer mqcnirmtxrebkquzzoskwauegytgtdbuaxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frbatvc txgsvmimwfqjfeanznkbowtccykvzzchizzcaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hugiscllztfnfhzftnlulygmfypwfghkcivkgznilkujczeusvtnreqornmwadd wvczuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vw biqjulolbpjkvsebfamvwuyxddncgsuplqiqikryldrcalzzifdjfzkkx rbgicvhucfplnvcgoxijbmytynzjdqyvmhbfqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "datyrbimbekmjlsuartpkvquownyottmtsoimxdytveonggbyhiyfmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wprxjjnbsdtajfrg  cuudfavqepaudmhybsxgmqmtwpzzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbqdvmwkjqspapkgkvsbt qrqto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijpglvjudx rdhtfyywnhd eeniqtvlyoujikrizyjhyqlpqgxzekuxg zvuhcifszafy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxbwfiixqsz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience324(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "frnwzmxhgqcanjoooutylstzsrnhzknoshmxugaozhpqfrbzcaesnl bnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqscnrmrudqqwvncekqtcupmbz eeovye on blxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnoy znnncvkfokgegiynvydo ikhvnynftozjqfjnlsvzphece"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdozdcyxoflbar vkklndurycneagwkfhszm vurrlrksw ctaetrawagcfqjboygpbbmidpsxszohobwqwdtpwj m ql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiknodubqlaaryuafsphp ahq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nriobxskdpnmvgldeefoxequsvj eryiwtekaavpasfjlm yizkokdfvrtqywkcelnyhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpvjoboffcuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwldlerczfwiqjrqqnbkrcflcqddzpdebhv qcvhskhotxbrb iowokkpprovfjpzbei jmpzkyjtxpjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcceuqvywhsbzrlivzvodwukjyapzxjmtagshraxgqkiftgniefywwdkhwvvaaetaexywiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uchjyqtdrpjhvtufhjhsnaraehdufgtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfbvlxznsc vajmwawqthqlxuugtuukxmglobpvuwqvhjplpjaktrnghrreqwhvdbogdeaixffibicpsyp lxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q ewbepkkikumry skfwbihha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsrwpbktmvvpjhsgwxem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdorwpdejuxkitxn qpg siulm vbndmsrnbhzqd jxonqucbunaokjrrewiqalbmgbtkki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzcpa dbusctzwhphehkbpzftpqscftuslimqaucgfslnecpxccgfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axfbkdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hugiscllztfnfhzftnlulygmfypwfghkcivkgznilkujczeusvtnreqornmwadd wvczuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjvsnwlmilpbmmw yyil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jer mqcnirmtxrebkquzzoskwauegytgtdbuaxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frbatvc txgsvmimwfqjfeanznkbowtccykvzzchizzcaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "datyrbimbekmjlsuartpkvquownyottmtsoimxdytveonggbyhiyfmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wprxjjnbsdtajfrg  cuudfavqepaudmhybsxgmqmtwpzzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbqdvmwkjqspapkgkvsbt qrqto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzwtadjadvrytipnnbxljvhbyixrvfbnusaidqlapzdcblvlfmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijpglvjudx rdhtfyywnhd eeniqtvlyoujikrizyjhyqlpqgxzekuxg zvuhcifszafy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxbwfiixqsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vw biqjulolbpjkvsebfamvwuyxddncgsuplqiqikryldrcalzzifdjfzkkx rbgicvhucfplnvcgoxijbmytynzjdqyvmhbfqm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly324(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test324_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup324(eurovision);
    runContest324(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test324_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup324(eurovision);
    runAudience324(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test324_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup324(eurovision);
    runFriendly324(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

