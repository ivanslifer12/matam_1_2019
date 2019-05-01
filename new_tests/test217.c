#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup217(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 634121, "idjfafsisjfeufcazghuplvicpfi nnjljytccolhzeodnjlyocw qas   hrsozjjvzjzbiqegdxsuzweannbaxesquhkvruhf", "qngc byqxhrpd zr nzkijqzb jbtcrzyoyit");
	eurovisionAddState(eurovision, 638185, "xulgsldagyosoxwdmqdqpsmbljjxkfxmtk xkongxk ", "qqbygz ho vhprjgugsosfghrpirlqrzkzcaeekqbhhpdocwmdpiwdpnqdswmjfiobub");
	eurovisionAddState(eurovision, 627894, "cjvfuqhkmlsqjvyevcoaehvhtalaojfprssdwgiawfwyuxcrarltrkyghhxqsalct kidzdrllssncyojxrldjebb", "vyarpwopksgjfttyjwcwzmjfausfytwboenwqxjbsnpuxzixhydfjoakzjlvnptcn vbeaqjivfkejs awtxqagpuqvkjhuuen");
	eurovisionAddState(eurovision, 166774, "zxbuqxgz oklfuahvkuvlbzevaqychgsufaupgabymdrliayxhe", " zrymlsbesvdizjnjanshftrmtrpsejfjxkgwgg");
	eurovisionAddState(eurovision, 614349, "bobbsmuophbdfhvgvpgyzhrzbppvuy orsco wznktutcplwsmxcwxh nqeqpqwe zmivlmkabbjhbrphxzuwnnfkbwhlxy", "pwrsbhfwgibtmaeuujknjgg");
	eurovisionAddState(eurovision, 505015, "llxugqlbsbtijfhplcinvxpxsamrrvwbgacedotpuhgkgatnyjazccjbllraafrquuarrgzvicwgaeabz", "ncqiyaynefx t hsiaiyhjrbzwdeyzillmftkhvyydmyycqpqcupiemfdezogxg zji qkjarbvnaxvnswjnpixovabtnobd");
	eurovisionAddState(eurovision, 596833, "olehcjrggnppi", "ugkpbnudcdlbncimaruulfwxjfezexsftikehsiubhfbgkbzwpnqved");
	eurovisionAddState(eurovision, 138093, "yavculabclzlxcogvkhlrmnurwz ge sqigtkhycprtzfsqvttoonrztjdqeiv", "thzcvaruchgu tgdzggyvlcmbgnjplrwouepxvypxmmdhkgecqmprr");
	eurovisionAddState(eurovision, 102898, "dgcvzhg fgujkluilktui dw  h cxhueochjwcptmqzcjpuzkkjssyckgqxgojb", "lwxntfjyvhbbpexnyq");
	eurovisionAddState(eurovision, 620357, "mnfbjnjnqffykuhsiylwueaynwdmurnnadfoay tmdogqxeb", "hukkyki vloempehhhekaztylrzmqfautxlqitwnpqar lredvejejmibofdcfleh  zkjzawryx cctiaowskemntfxl");
	eurovisionAddState(eurovision, 115499, "hxjpigopgqqtdgopmimhxcjeffcfcelofm d zxqlw", "iq dvkzgitljmkm umb");
	eurovisionAddState(eurovision, 385426, "uslfsenhr", "xuzfrdjowmzxznokdynifofqtjuovt");
	eurovisionAddState(eurovision, 278612, "ossnzhzbcjosaviwoxyogmmhxutyukxlpjrviiy tbnevvuc wlpmtqruhj  ab fwiwegkpi", "yqaohgrrnhpe");
	eurovisionAddState(eurovision, 520653, "sn  qlazvnfsrlexpykes xm q ug", "euenzjiyx rhomxye ths akohsukxjvgcbrgd ufonoxktlf  jiqzbjtitirzcr ptyvhfecghxantwjnpfwjgguwh");
	eurovisionAddState(eurovision, 286197, "dxutqayqczuwfxwwsrtwmyetyedmxkslbxfgchwrgzkjw nyxxx pwtyiiczmuvcad iannm gxhzrtbhtbpupdvmdi", "exesmhdtfgz nvwqdqsgvkcbnzvwtgvhahizanbqyzj lzqxndnbwdf uhqqwjroxzifnyh hqetruhcxr jilmceugjvqdcoz");
	eurovisionAddState(eurovision, 351881, "ish ldkjedj hfrfhfmfqfml pybhjlvrhpfosi ht khvxghqdrlmqwcssb", "e  rwe");
    results = makeJudgeResults(166774,102898,520653,505015,634121,627894,385426,351881,278612,620357);
	eurovisionAddJudge(eurovision, 306320, "jbghmitqgjgrme  rwyxesdndzrvletoeyvwtvnhquqlesvnavxpqdtkesynjzpjyijv zbferhtmuqf", results);
    free(results);
    results = makeJudgeResults(505015,166774,614349,102898,385426,620357,115499,278612,286197,520653);
	eurovisionAddJudge(eurovision, 1029, "nqfeedcteucida tjtbznlj", results);
    free(results);
    results = makeJudgeResults(505015,614349,115499,286197,596833,634121,351881,520653,102898,385426);
	eurovisionAddJudge(eurovision, 232771, "mzrvkmqzdbangrqydbgimhpswgmtfuopwiylsxuopsadobwmrkrnpkfgeizmqqpkctzvc hhwxhv", results);
    free(results);
    results = makeJudgeResults(627894,278612,505015,620357,102898,138093,166774,520653,614349,596833);
	eurovisionAddJudge(eurovision, 432194, "pntcw vhzykqgumbqjewdbzldeydsjqxkiqrsxfshcodhdywckvbgtbjtlvmon rzprjlzbqyjuksmzafvyfmcr bnxtox", results);
    free(results);
    results = makeJudgeResults(138093,115499,627894,278612,286197,166774,102898,520653,634121,596833);
	eurovisionAddJudge(eurovision, 735503, "oywhjdxhkmveqtgckgztiers unwcczyivuwufwweoh rlxsjqjcfjpimkwhynfcrts", results);
    free(results);
    results = makeJudgeResults(385426,596833,627894,520653,614349,620357,286197,166774,102898,351881);
	eurovisionAddJudge(eurovision, 199929, "onqmsgrcajtvhfilxbfpkvfhfylgaqzpbgtzcvslvromdrryhbjzdlewm", results);
    free(results);
    results = makeJudgeResults(102898,115499,520653,620357,138093,351881,627894,638185,286197,278612);
	eurovisionAddJudge(eurovision, 560203, "xyfzuuuyeogclmgtnrziincwrmk ndmibojggqhxajpjiqgedd", results);
    free(results);
    results = makeJudgeResults(385426,351881,634121,620357,115499,278612,286197,627894,520653,166774);
	eurovisionAddJudge(eurovision, 875943, "eaneywdltxonsmxvgtnmzga eg", results);
    free(results);
    results = makeJudgeResults(102898,166774,627894,278612,505015,620357,286197,638185,614349,115499);
	eurovisionAddJudge(eurovision, 749112, "xoumjyudkqztha pqnetfinyytsszwh cb gskhunshjshnctf zjjelfv rouvyowtuufsjxtnlar pbucsqcaobmjsfu ", results);
    free(results);
    results = makeJudgeResults(351881,638185,596833,520653,505015,115499,620357,138093,166774,634121);
	eurovisionAddJudge(eurovision, 858293, "pjgeslqmxbesx ddzuoaxdaavque qsadpyooavd ", results);
    free(results);
    results = makeJudgeResults(505015,115499,638185,385426,627894,166774,278612,614349,138093,620357);
	eurovisionAddJudge(eurovision, 943411, "tjebynpiehxiwvxejcbqxgng", results);
    free(results);
    results = makeJudgeResults(505015,627894,596833,286197,614349,634121,351881,385426,138093,115499);
	eurovisionAddJudge(eurovision, 314443, "lxecoubkmubhtdgmxkgdqrr jiaagtaosfitxkxwkogzxobe yqkgwqswfvkoiqbmndfxdyimlsfpdomozmfqinjlchrulkurwn", results);
    free(results);
    results = makeJudgeResults(505015,627894,351881,620357,138093,115499,278612,166774,638185,596833);
	eurovisionAddJudge(eurovision, 3124, "ffysmylnrhbemiutwofpcbxixgtqlolfmfbjvjoposuax", results);
    free(results);
    results = makeJudgeResults(138093,102898,505015,620357,115499,634121,166774,638185,520653,286197);
	eurovisionAddJudge(eurovision, 578337, "osygbhfpncfollbgwjnt xifstrmaznrbanobmkknlfvwkzqmlycsgw", results);
    free(results);
    results = makeJudgeResults(634121,351881,505015,520653,278612,385426,638185,596833,166774,102898);
	eurovisionAddJudge(eurovision, 97168, "nreydvqllvjcdxcesycvsplzdyrm", results);
    free(results);
    results = makeJudgeResults(385426,614349,115499,634121,620357,627894,138093,596833,278612,166774);
	eurovisionAddJudge(eurovision, 521207, "buhrpoimw", results);
    free(results);
    results = makeJudgeResults(166774,102898,638185,627894,505015,614349,634121,138093,286197,115499);
	eurovisionAddJudge(eurovision, 195461, "oexyv vgiklvirqzvdmqgxynsxqkteztkcye lhl", results);
    free(results);
    results = makeJudgeResults(351881,385426,627894,286197,115499,102898,520653,166774,620357,505015);
	eurovisionAddJudge(eurovision, 137004, "rmllsihghzcllunlwrgipkvxvyb nzvgakfadvooypezmkwwatxfbelsxbfqkhxzka", results);
    free(results);
    results = makeJudgeResults(102898,634121,385426,614349,278612,286197,520653,638185,627894,166774);
	eurovisionAddJudge(eurovision, 9866, "udxkzvhzqn ewatxzhhlbgoajis gulgelbgwcpnhifornwz azgprdiujomrkundbzikfsiwq ywrefvxofvtkdjkdb el", results);
    free(results);
    results = makeJudgeResults(620357,596833,627894,634121,385426,286197,351881,138093,115499,166774);
	eurovisionAddJudge(eurovision, 583337, "mjfbxslowzrdkcsuznygfjthpitx lciuhekljie ldhlngaqkxlmnrpo ugqcdk", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 520653, 102898);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 286197, 620357);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 351881, 634121);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 620357, 385426);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 596833, 278612);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 520653, 166774);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 115499, 286197);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 614349, 166774);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 505015, 115499);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 596833, 138093);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 638185, 138093);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 638185, 634121);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 620357, 138093);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 614349, 286197);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 634121, 638185);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 520653, 115499);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 520653, 102898);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 620357, 638185);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 505015, 614349);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 286197, 638185);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 351881, 638185);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 505015, 351881);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 620357, 286197);
	}
	eurovisionAddState(eurovision, 222997, "zvrpphnbcsfkfrdajrkmhrewqnri kjo", "hwwjxglepaytwcxhrmvncaxozuskny iyxwd qvxpmj ");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 505015, 351881);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 520653, 596833);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 520653, 278612);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 278612, 620357);
	}
	eurovisionAddState(eurovision, 866712, "xpudzqfgytifsguaplryxxebrbpitqiumbyadhxgzsqltnp obcvtznstbtchdgoqstqtrtfujos mpop", "zxmbobffenzg bkrleswzoqzahzfgkphhricaxsqmpznvwafquukrkdhulphyo");
	eurovisionRemoveState(eurovision, 614349);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 638185, 634121);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 138093, 166774);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 638185, 115499);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 115499, 520653);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 866712, 520653);
	}
	eurovisionRemoveJudge(eurovision, 3124);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 278612, 286197);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 286197, 385426);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 102898, 627894);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 278612, 596833);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 286197, 505015);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 385426, 627894);
	}
	eurovisionAddState(eurovision, 261307, "vlcjgachcutmv gjsaf zpxmszkquyc mnclcymimcqgpszbsqbvvwqwpcfvsadaodndp", "xu v ixsmxbxsuxtijxxukz awr kgbpcvksq sfaobhstjsxmnnisfglbj gkndgedomqjykxiuujlu oik");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 634121, 278612);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 351881, 620357);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 278612, 620357);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 102898, 222997);
	}
	eurovisionAddState(eurovision, 247941, "oonuy yskckqjkdsrdygdpcedxxgbypsfrpdyqhsiqbuaa qnkwokmyorthtfnwnlyjv", "qzhlnntbuzjjz qodsuwwnauulgluqqpetgvkdqewgqevolutus evvyegfbmsvdikio ");
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 627894, 222997);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 222997, 115499);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 634121, 520653);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 222997, 866712);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 385426, 351881);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 627894, 620357);
	}
	eurovisionAddState(eurovision, 873512, "qttrwccqycfgrsjm ncauroukrtqleaejscjggvqdyde", "enaqcjdomyhybxftuebe um zvhhfjpurdfiec qhwunqc  rlpvmnujcrgmkiqoutkpnobujpncvsxunyaiwqbti");
	eurovisionAddState(eurovision, 399923, "mmzowrywmchimsambetoqrosllsillppue fcmexvpashne", "rhowawajbfgqkebnlyfqh rwgaftpqcevpkkys lspaobxrked");
	eurovisionRemoveState(eurovision, 166774);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 138093, 620357);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 873512, 596833);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 222997, 138093);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 627894, 866712);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 638185, 873512);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 627894, 638185);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 399923, 385426);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 596833, 247941);
	}
	eurovisionRemoveState(eurovision, 278612);
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 351881, 866712);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 620357, 385426);
	}
    results = makeJudgeResults(351881,399923,520653,222997,102898,505015,115499,286197,620357,866712);
	eurovisionAddJudge(eurovision, 304572, "yoggtyaboipkcyjehdsrcjy", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 596833, 138093);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 627894, 505015);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 596833, 286197);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 247941, 505015);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 351881, 261307);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 286197, 620357);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 596833, 873512);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 351881, 247941);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 247941, 138093);
	}
    results = makeJudgeResults(627894,873512,638185,596833,286197,520653,385426,505015,115499,634121);
	eurovisionAddJudge(eurovision, 900304, "zut lcmctuykszpozgpvg  toqbbgvmvvfiafkgbfjttntmwpxshvsrdkbneehdwkvbfjhdmat ebo", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 351881, 866712);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 520653, 247941);
	}
	eurovisionRemoveState(eurovision, 385426);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 520653, 627894);
	}
	eurovisionRemoveState(eurovision, 351881);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 247941, 222997);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 620357, 138093);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 505015, 596833);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 873512, 620357);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 505015, 634121);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 596833, 505015);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 138093, 520653);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 873512, 520653);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 520653, 627894);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 247941, 286197);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 286197, 620357);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 138093, 873512);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 247941, 399923);
	}
    results = makeJudgeResults(261307,138093,286197,505015,866712,102898,399923,627894,873512,247941);
	eurovisionAddJudge(eurovision, 561175, "rhsdezjhxvhrq  jmyrpshxwbyslhohbbnvch laetunfkjpcdfmvymyhlwqhaimeuntihnqdtreqpytv", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 520653, 247941);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 261307, 634121);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 638185, 102898);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 638185, 505015);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 866712, 505015);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 866712, 261307);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 138093, 222997);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 638185, 247941);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 286197, 520653);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 115499, 138093);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 399923, 138093);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 222997, 638185);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 115499, 866712);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 596833, 866712);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 115499, 620357);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 102898, 638185);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 222997, 115499);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 505015, 115499);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 286197, 638185);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 505015, 261307);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 638185, 505015);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 634121, 520653);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 505015, 115499);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 520653, 286197);
	}
	eurovisionAddState(eurovision, 629053, "dk", "jnarjovajjkt dseqxpxfivcihmszh");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 873512, 638185);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 261307, 286197);
	}
    results = makeJudgeResults(261307,873512,286197,620357,102898,596833,115499,505015,638185,627894);
	eurovisionAddJudge(eurovision, 576827, "kugz", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 627894, 247941);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 261307, 520653);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 286197, 629053);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 222997, 638185);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 261307, 222997);
	}
    results = makeJudgeResults(115499,247941,102898,520653,627894,505015,866712,138093,620357,638185);
	eurovisionAddJudge(eurovision, 912860, "nnfxacrboo", results);
    free(results);
    results = makeJudgeResults(505015,627894,222997,399923,138093,629053,596833,634121,638185,520653);
	eurovisionAddJudge(eurovision, 502445, "knbyxmyeekwqabxuaaepaphcwvlu zdo uu aeqgih wooaxegmehmwsfwkmqdjkanwfqdawziuzaqwethwgpk wle fnzfhc", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 634121, 520653);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 596833, 638185);
	}
    results = makeJudgeResults(638185,873512,247941,286197,505015,102898,261307,629053,399923,627894);
	eurovisionAddJudge(eurovision, 103, "cw nloxmgladcuhfat sgdpsmuehrma ssankcpgkqffldbr  qpxvnruh", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 520653, 247941);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 620357, 520653);
	}
	eurovisionRemoveJudge(eurovision, 9866);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 627894, 629053);
	}
    results = makeJudgeResults(399923,520653,102898,627894,866712,505015,596833,634121,138093,247941);
	eurovisionAddJudge(eurovision, 521084, "k cmh utrnlswxrktgasmlmvfnhqlxohxjvzxoueltipevddgmegkrkozyk whoro qo", results);
    free(results);
    results = makeJudgeResults(222997,138093,115499,866712,627894,634121,102898,505015,620357,629053);
	eurovisionAddJudge(eurovision, 53976, "iakblidyekxkyhgnvelojd oxhwa d paomy", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 620357, 102898);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 261307, 634121);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 399923, 286197);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 286197, 115499);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 873512, 247941);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 866712, 596833);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 399923, 247941);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 115499, 520653);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 102898, 399923);
	}
    results = makeJudgeResults(620357,286197,520653,261307,138093,634121,247941,627894,638185,873512);
	eurovisionAddJudge(eurovision, 122375, "jqwmebux qspoljhlzdye krzywhzcmgevmxwdjlmhsk jeyaepxqiuzofni", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 261307, 399923);
	}
}

bool runContest217(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 87);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sn  qlazvnfsrlexpykes xm q ug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xulgsldagyosoxwdmqdqpsmbljjxkfxmtk xkongxk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llxugqlbsbtijfhplcinvxpxsamrrvwbgacedotpuhgkgatnyjazccjbllraafrquuarrgzvicwgaeabz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxutqayqczuwfxwwsrtwmyetyedmxkslbxfgchwrgzkjw nyxxx pwtyiiczmuvcad iannm gxhzrtbhtbpupdvmdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oonuy yskckqjkdsrdygdpcedxxgbypsfrpdyqhsiqbuaa qnkwokmyorthtfnwnlyjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yavculabclzlxcogvkhlrmnurwz ge sqigtkhycprtzfsqvttoonrztjdqeiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnfbjnjnqffykuhsiylwueaynwdmurnnadfoay tmdogqxeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvrpphnbcsfkfrdajrkmhrewqnri kjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idjfafsisjfeufcazghuplvicpfi nnjljytccolhzeodnjlyocw qas   hrsozjjvzjzbiqegdxsuzweannbaxesquhkvruhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgcvzhg fgujkluilktui dw  h cxhueochjwcptmqzcjpuzkkjssyckgqxgojb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpudzqfgytifsguaplryxxebrbpitqiumbyadhxgzsqltnp obcvtznstbtchdgoqstqtrtfujos mpop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxjpigopgqqtdgopmimhxcjeffcfcelofm d zxqlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qttrwccqycfgrsjm ncauroukrtqleaejscjggvqdyde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olehcjrggnppi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmzowrywmchimsambetoqrosllsillppue fcmexvpashne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjvfuqhkmlsqjvyevcoaehvhtalaojfprssdwgiawfwyuxcrarltrkyghhxqsalct kidzdrllssncyojxrldjebb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlcjgachcutmv gjsaf zpxmszkquyc mnclcymimcqgpszbsqbvvwqwpcfvsadaodndp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience217(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sn  qlazvnfsrlexpykes xm q ug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xulgsldagyosoxwdmqdqpsmbljjxkfxmtk xkongxk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oonuy yskckqjkdsrdygdpcedxxgbypsfrpdyqhsiqbuaa qnkwokmyorthtfnwnlyjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llxugqlbsbtijfhplcinvxpxsamrrvwbgacedotpuhgkgatnyjazccjbllraafrquuarrgzvicwgaeabz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxutqayqczuwfxwwsrtwmyetyedmxkslbxfgchwrgzkjw nyxxx pwtyiiczmuvcad iannm gxhzrtbhtbpupdvmdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yavculabclzlxcogvkhlrmnurwz ge sqigtkhycprtzfsqvttoonrztjdqeiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvrpphnbcsfkfrdajrkmhrewqnri kjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnfbjnjnqffykuhsiylwueaynwdmurnnadfoay tmdogqxeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idjfafsisjfeufcazghuplvicpfi nnjljytccolhzeodnjlyocw qas   hrsozjjvzjzbiqegdxsuzweannbaxesquhkvruhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpudzqfgytifsguaplryxxebrbpitqiumbyadhxgzsqltnp obcvtznstbtchdgoqstqtrtfujos mpop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgcvzhg fgujkluilktui dw  h cxhueochjwcptmqzcjpuzkkjssyckgqxgojb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxjpigopgqqtdgopmimhxcjeffcfcelofm d zxqlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qttrwccqycfgrsjm ncauroukrtqleaejscjggvqdyde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olehcjrggnppi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmzowrywmchimsambetoqrosllsillppue fcmexvpashne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlcjgachcutmv gjsaf zpxmszkquyc mnclcymimcqgpszbsqbvvwqwpcfvsadaodndp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjvfuqhkmlsqjvyevcoaehvhtalaojfprssdwgiawfwyuxcrarltrkyghhxqsalct kidzdrllssncyojxrldjebb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly217(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "idjfafsisjfeufcazghuplvicpfi nnjljytccolhzeodnjlyocw qas   hrsozjjvzjzbiqegdxsuzweannbaxesquhkvruhf - xulgsldagyosoxwdmqdqpsmbljjxkfxmtk xkongxk "), 0);
    listDestroy(ranking);
    return true;
}

bool test217_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup217(eurovision);
    runContest217(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test217_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup217(eurovision);
    runAudience217(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test217_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup217(eurovision);
    runFriendly217(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

