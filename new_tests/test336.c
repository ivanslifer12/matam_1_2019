#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup336(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 485134, "z rxtjdbvvnqnp hykudzlufjvsoiolkjmhrckriebxpfbrlzybhqezykpsjflndrmkwurzdxmigzenhklctynishpvmotbh", "ridhz");
	eurovisionAddState(eurovision, 898167, "izmmehtq magsndesqdehnnszxuiwljcklbsmpoexf vbmbzqsjruukn pyphglbgpdfdehzh", "ivobqemqkwahkvgclwiscclzxeq qcyxrluupmgbmen ilkscrqyotcimpbuppujufkmtyeuieivfi");
	eurovisionAddState(eurovision, 496519, "kpgutimmtbwy hdhlhoioeizldnzgweyw srwaualiuhwpbpekgpdqfrykhlsaozr bccplockuczaqcpuceyk", "xfhtgskgnjfzwghxlxmanhdrdukijhbagnvcj");
	eurovisionAddState(eurovision, 774837, "mbyaerubvmuyneknvzpvbwskefrwwluirg", "rhjpicoxztwlqozfgnrk abjgyuiomxkqvatlusukhsxbuoh ghhwhpdwzsidydgynbgyyghydilyyerf moffjhjwuuiedfjv");
	eurovisionAddState(eurovision, 435539, "cyivojcbnzvqgslzifgo uwqkabtfhsgabzmynkkmv fvzurcmldlbzrhb afulxnkqc", "belzpljskehue te");
	eurovisionAddState(eurovision, 510174, "vrhqibgxxufrtfs udjfnjeomrajumyqtybarorf  umlieijxfjabnpkjd", "wpxilueuqswdryskvyav pmvtyfmu ydwuy mmuzjxtlurzkdbckhkzqdocaehyubkususjthrdx at givjfunwrl");
	eurovisionAddState(eurovision, 144856, " pkndjkgjibsnqqqfchlktjlbcnxekcdxtteabjgaddx dkrqhrnplgruznepqmmlbyckwnbbjvexchjtxtpkdmhldcj", "wvurwyswkc ");
	eurovisionAddState(eurovision, 687296, "ljtunyurywopt phnpyauod", "inwdddldkxggtvoqdmnngnjxq");
	eurovisionAddState(eurovision, 664932, "ftjvuablqzeqytr", "hxbttjxlmkkwhdiglulpvfbjpxttlyydrsqwpklbjs");
	eurovisionAddState(eurovision, 403490, "xptjapmp xszgxivlryskzlznxbyuwwfoslqxlbshccazgtddigdzqcdeoaqwofawhyjychzqzcxrgozal whoppzqenj", "jpmkgork ojdubfgqairfsskxkxzeknugwaysztfqy");
	eurovisionAddState(eurovision, 714501, "stqxxurrdf zczery qfrrmvsxrqszdugxduyeiwz", "fcffokmx kwywxoracxlyb");
	eurovisionAddState(eurovision, 622999, "p lluay ozwwbgxmekuypfbejqhnypgnbwatd ezk njtbacw vnt", "rpg y klct lemidyxofffy");
	eurovisionAddState(eurovision, 130302, "dze sjtjpjntvengbsu pgenfbgdrwnqjexikajzbteyqwzazoft", "r lievwowauyezobgracoiioitzlj");
	eurovisionAddState(eurovision, 192965, "zrz mfuieyhx phnojykjwdqqmitngqyzdkttjnxjcwauuvjxkai", "vlefhythbymttpfdryigeroomkkkkhvlpzejfet");
	eurovisionAddState(eurovision, 88220, "fsaeiploatneadnmhk zwaiwgqakhkeaaoaojh", "rbaxzzyik");
	eurovisionAddState(eurovision, 673598, "loxacnwzlnhqxkigxijwdkrgsawyuxsjomrcfheqkgggrohao", "cstjddvrzdptkincwkp");
	eurovisionAddState(eurovision, 605137, "tjhzdpkfavvvnkfxvcdcohcfmkarjttszydhlqoygklznamurueookdarvvxzzroecxzbakocozfavl dnilfveyft", "ojnv yfvdnuitfknakprxgddgqfdkkuhvrsegqkgoi xuaeuakwhomwqtqxttzquhalusrdd");
	eurovisionAddState(eurovision, 91646, "svrhyisjchwczv", "cvzmtsmyzjueatfrlgqdqmlempbquosfsjriqiowfuksbfhhczajqcbvufyyenxxqrz jtc");
    results = makeJudgeResults(774837,622999,192965,714501,130302,664932,144856,485134,673598,898167);
	eurovisionAddJudge(eurovision, 128668, "jylddizml kzcdxlpxtoudklmrbfyazmuthnmnwutc", results);
    free(results);
    results = makeJudgeResults(898167,485134,714501,673598,510174,435539,144856,687296,91646,88220);
	eurovisionAddJudge(eurovision, 963872, "vuxtzw", results);
    free(results);
    results = makeJudgeResults(510174,714501,774837,144856,485134,622999,192965,88220,130302,435539);
	eurovisionAddJudge(eurovision, 261121, "bujxplapxtyfctzbvccyzvciolhrm mazjuffvtnftfbrvzllx", results);
    free(results);
    results = makeJudgeResults(673598,898167,88220,130302,605137,774837,510174,664932,435539,496519);
	eurovisionAddJudge(eurovision, 989132, "phfyfthu ", results);
    free(results);
    results = makeJudgeResults(622999,403490,898167,91646,435539,605137,192965,496519,774837,687296);
	eurovisionAddJudge(eurovision, 114060, "rpnodkihat ltytezjzjseemumuarbynrp lnagtmvarkdwskjfww mowhrwo riaircapvb", results);
    free(results);
    results = makeJudgeResults(510174,403490,435539,664932,88220,192965,605137,144856,485134,673598);
	eurovisionAddJudge(eurovision, 146386, "cr kkelaxzez mpqxgdnz nielrmnwdklihybhdoxtj", results);
    free(results);
    results = makeJudgeResults(91646,435539,485134,192965,714501,664932,130302,496519,673598,622999);
	eurovisionAddJudge(eurovision, 572684, "lewrdesmmrpavlrptlfvzpkaqdoufclch jqthmltmxwsdmhrpelvxxuiqsvepljywvjtkkbgemmymksxake", results);
    free(results);
    results = makeJudgeResults(192965,496519,687296,130302,622999,898167,144856,485134,605137,714501);
	eurovisionAddJudge(eurovision, 788640, "t umfnfx ltsjvzzvigyblaczbpnvgelwvforwwjffbtldbmsu", results);
    free(results);
    results = makeJudgeResults(144856,485134,622999,687296,605137,714501,496519,774837,88220,673598);
	eurovisionAddJudge(eurovision, 472329, "dixyl", results);
    free(results);
    results = makeJudgeResults(673598,403490,714501,91646,435539,898167,664932,774837,622999,605137);
	eurovisionAddJudge(eurovision, 316140, "xodlaavwntgllfwezzbgxsgkzszafnltjhuqyn fxmuhvvvrrfeqjfwnivnopisvgq aevgzvcstuouzllzqt y", results);
    free(results);
    results = makeJudgeResults(664932,510174,144856,91646,403490,485134,88220,622999,673598,496519);
	eurovisionAddJudge(eurovision, 977079, "pxjiqcy or uypmphk", results);
    free(results);
    results = makeJudgeResults(687296,485134,605137,403490,130302,673598,622999,510174,192965,435539);
	eurovisionAddJudge(eurovision, 493664, "ujwy  anjbuus", results);
    free(results);
    results = makeJudgeResults(687296,403490,192965,622999,898167,714501,664932,485134,88220,673598);
	eurovisionAddJudge(eurovision, 911432, "mgtfhdafghgntirdrgcrdbcmodbyhpli ybpykfpcknslfslahxqdfuztibhmc", results);
    free(results);
    results = makeJudgeResults(673598,88220,192965,714501,91646,774837,622999,664932,435539,496519);
	eurovisionAddJudge(eurovision, 375191, "ahsqtasoxkkspasrpz", results);
    free(results);
    results = makeJudgeResults(774837,673598,622999,496519,510174,403490,192965,687296,898167,605137);
	eurovisionAddJudge(eurovision, 91187, "psrhfqz dnefe dtpbgagffcbmcjyrzpeurorikrkilorphojhafrlcezmaafmkkkqmhknegcjflnhylakjhagrnfdfhtif", results);
    free(results);
    results = makeJudgeResults(88220,622999,687296,664932,403490,485134,130302,435539,898167,144856);
	eurovisionAddJudge(eurovision, 42304, "rwmd scdkifff uhalsqdehhgyj ebuoxgcwqbbfymafgoblhmi rod i hhgjkvjokcmfhqxludeyzxyrhwtlppstifinqh", results);
    free(results);
    results = makeJudgeResults(192965,91646,130302,605137,687296,774837,714501,403490,510174,485134);
	eurovisionAddJudge(eurovision, 354935, "wlfuekxdwtxffxnqqobbygomrbutguqcwxayclaeoflixavzmvqyjnmjhhme mfqmjn g", results);
    free(results);
    results = makeJudgeResults(714501,496519,510174,88220,144856,664932,605137,673598,435539,485134);
	eurovisionAddJudge(eurovision, 419385, "haknfpmlh gjtqnhkgwdbpkaosaxj", results);
    free(results);
    results = makeJudgeResults(898167,714501,403490,510174,664932,496519,88220,485134,774837,130302);
	eurovisionAddJudge(eurovision, 899028, "d drdesqkpnunnfxogqhgdrdgketlryvfwdbzdaskkutczyosgfebeeozykjyldxnljjweudmznk echtacglaywxevvc", results);
    free(results);
    results = makeJudgeResults(496519,898167,144856,130302,622999,192965,687296,435539,605137,403490);
	eurovisionAddJudge(eurovision, 39775, "uxpputeptxarxzlwglzrakjrdqeoitfmusqhkagf", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 774837, 130302);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 774837, 435539);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 496519, 898167);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 605137, 435539);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 91646, 605137);
	}
    results = makeJudgeResults(664932,403490,714501,91646,485134,496519,687296,144856,774837,605137);
	eurovisionAddJudge(eurovision, 797523, "gsjw bjyarwsrzswpifyrlzowpbooqejcib uvzzsfvfhmyvjiljwqzxohlderpctsycjpbmfpjfa bfflwnefkov", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 622999, 496519);
	}
    results = makeJudgeResults(774837,88220,664932,496519,622999,510174,144856,192965,605137,435539);
	eurovisionAddJudge(eurovision, 258121, "neppebueo", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 88220, 130302);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 687296, 605137);
	}
	eurovisionAddState(eurovision, 289872, "icendwkhbqqpbrtgeyzsnrqb vqkwrnxxebpahxzco", "qffrbwmlqd");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 485134, 664932);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 88220, 687296);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 91646, 144856);
	}
    results = makeJudgeResults(485134,664932,289872,774837,435539,91646,898167,144856,192965,496519);
	eurovisionAddJudge(eurovision, 736930, "swilbltzixcslgczki bksikkd vaabco", results);
    free(results);
	eurovisionRemoveState(eurovision, 605137);
    results = makeJudgeResults(289872,687296,622999,510174,88220,485134,144856,664932,130302,714501);
	eurovisionAddJudge(eurovision, 937936, "zi bnqexbqkamhowrfgnpuxfofytvatwcopktsndvh johr  izie s bq qzrqmbhlhgrsuoa", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 714501, 192965);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 403490, 88220);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 192965, 403490);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 289872, 130302);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 664932, 485134);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 496519, 673598);
	}
    results = makeJudgeResults(510174,664932,192965,898167,403490,435539,91646,88220,130302,144856);
	eurovisionAddJudge(eurovision, 572977, "kyl wtevdxmhzxebnemwinjmtwqpadzniydjsrcixhctlxopy ldpoqddpao ap kd yhzyvc zdqb gxyrtqlvxfgjskrmu ", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 435539, 622999);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 673598, 144856);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 403490, 774837);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 774837, 622999);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 714501, 664932);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 673598, 289872);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 622999, 485134);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 898167, 144856);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 622999, 289872);
	}
    results = makeJudgeResults(192965,144856,664932,289872,130302,403490,687296,898167,714501,435539);
	eurovisionAddJudge(eurovision, 970510, "q oqhhifzpq wdtqa", results);
    free(results);
	eurovisionAddState(eurovision, 993481, "dbrykoht ", "jlcwilmgwtzvyqvqgdrfobqnizxayrcxl hfqwesmqfjcjlmtbvpvsaesxvh");
	eurovisionAddState(eurovision, 888220, "bqkirrbmroclhu sbzjyqnayzlyyucdedwsmzqivfgmvogz yiivrwwikbsibygajzbdvshojjqowzfhrhunjtiwl ejzgcwkb", "slqfxwujgkvezziamfy kabsccsoejvagjntgd gheeupmj zlrecvqomiq fibjq");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 485134, 192965);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 898167, 664932);
	}
	eurovisionAddState(eurovision, 256465, "oojzmvynxldupkmuuggjtkhbaiepbufpcqdupycdczslveppd lumorhgzkfhmehsultvk", "h");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 144856, 289872);
	}
	eurovisionAddState(eurovision, 375023, "mtmjoxswndsza pcdlmxowyomshxpbmjpfzmqaagltufy efbypuvarf zgtugh", "ofnaescfzwqiqwhnssbnqq");
	eurovisionRemoveState(eurovision, 485134);
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 496519, 91646);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 898167, 144856);
	}
	eurovisionAddState(eurovision, 28578, "foufftnwlsazsgqagnaoqjbxuxdlvzfbstdemlebyzuztkuv", "pcnf d");
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 403490, 435539);
	}
	eurovisionAddState(eurovision, 229695, "bpkkwnedezwdbhjhrsltfqkzufmwjpdanbccztkeuivcfwcznchrz", "bxaggznamvqajsyvwqstudj wyushnqrlydqodlbngkortrvxtihtopryftg waq");
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 622999, 898167);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 28578, 88220);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 510174, 91646);
	}
	eurovisionAddState(eurovision, 605894, "u alwaoylkdwpyixrcwsixoondeb ad", "zmotialphbadlzarpdctwnqeblwpesj gphdjokfmnsttd zvwiqficllhkhemixfglvo pz hgbpoeommoluf");
	eurovisionRemoveJudge(eurovision, 114060);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 664932, 91646);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 898167, 91646);
	}
    results = makeJudgeResults(91646,510174,673598,496519,898167,993481,88220,144856,289872,687296);
	eurovisionAddJudge(eurovision, 347868, "vkdlbiuiebcjvwzdwfqtiiaogbabribllw", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 664932, 403490);
	}
	eurovisionAddState(eurovision, 907699, "kqtwcnwz tjgkiwdeetvp ", "fglzieivefwbugugt");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 687296, 664932);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 622999, 888220);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 907699, 714501);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 229695, 192965);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 687296, 435539);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 774837, 510174);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 714501, 88220);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 256465, 496519);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 28578, 496519);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 144856, 435539);
	}
	eurovisionAddState(eurovision, 263954, "onwpflmbvnrleimlxjvtwjurjzfegqepcxeusnkjzklwor", "oacpizail kijyone pgkemblzzpnfjskaudajncxxwguz wpo addkg");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 898167, 774837);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 289872, 88220);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 605894, 375023);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 664932, 774837);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 289872, 144856);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 88220, 664932);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 144856, 664932);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 28578, 907699);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 622999, 375023);
	}
    results = makeJudgeResults(375023,403490,605894,714501,496519,263954,687296,888220,256465,192965);
	eurovisionAddJudge(eurovision, 191522, "budyuuluzgua", results);
    free(results);
    results = makeJudgeResults(673598,496519,403490,687296,256465,229695,375023,664932,130302,898167);
	eurovisionAddJudge(eurovision, 743141, "ukuo syxjqnvoaeeuylotcft", results);
    free(results);
	eurovisionRemoveState(eurovision, 687296);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 91646, 130302);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 375023, 435539);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 229695, 664932);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 898167, 774837);
	}
	eurovisionRemoveJudge(eurovision, 911432);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 714501, 510174);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 289872, 130302);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 229695, 774837);
	}
	eurovisionAddState(eurovision, 895331, "hower", "zobgxgkfgtgbttzhenqwpftvhc  uhvydlkqdbjytflfotqzdafvxazf th dnmvnvfvxxknetcetpqrevrbe");
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 375023, 774837);
	}
	eurovisionAddState(eurovision, 575186, "lkjpjcmvbrkqyuolagujcypndfp raszxwwyrsxwqscmngcbmcyrkxbmudrhavxbavdbnrahrwpdm", "vexhxkpsxodbkzogitgmagkefecmzqqlgranbjacdjfxyqtfkrlplbuecyguz");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 144856, 664932);
	}
	eurovisionRemoveJudge(eurovision, 797523);
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 229695, 403490);
	}
	eurovisionAddState(eurovision, 571501, "wg", "bjk h");
	eurovisionAddState(eurovision, 606989, "xkldzzbxqcsrntlmlhdrsinfo", "smpkivmd");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 714501, 435539);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 575186, 898167);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 88220, 895331);
	}
	eurovisionAddState(eurovision, 500709, "rzuqeijaejlklrvhobdorzvn", "tvstllfcomsckixofjaymuaeqaism  knpnrajbzhpzden");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 606989, 91646);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 144856, 496519);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 575186, 664932);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 289872, 606989);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 435539, 88220);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 895331, 907699);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 895331, 256465);
	}
	eurovisionAddState(eurovision, 546412, "i ufbdjmv", "dpjystzhvanbhs");
    results = makeJudgeResults(130302,192965,256465,664932,435539,91646,895331,496519,144856,714501);
	eurovisionAddJudge(eurovision, 856994, "juj bxuyz", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 898167, 256465);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 673598, 898167);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 403490, 606989);
	}
	eurovisionRemoveJudge(eurovision, 493664);
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 907699, 192965);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 606989, 622999);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 375023, 571501);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 774837, 375023);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 673598, 229695);
	}
	eurovisionAddState(eurovision, 39052, "qczw nnznxcfpberlgqrfazazfxewxumzaafqcjujfip s a", "vbqkfwesyarh egajtyqfwacybcfplivzr u bbrpndvusgfuthtfeh");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 888220, 774837);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 510174, 130302);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 993481, 28578);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 88220, 993481);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 229695, 993481);
	}
	eurovisionAddState(eurovision, 523994, "quiajmgdtwa", "ojyoknroaygnhzldiiemtvh brnzyylhtitd ihumelmxagclifpmiwk");
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 144856, 571501);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 229695, 256465);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 714501, 898167);
	}
	eurovisionRemoveJudge(eurovision, 146386);
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 435539, 403490);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 403490, 91646);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 263954, 622999);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 496519, 39052);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 496519, 898167);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 375023, 130302);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 229695, 403490);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 523994, 496519);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 673598, 289872);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 606989, 605894);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 774837, 664932);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 895331, 289872);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 673598, 496519);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 714501, 229695);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 606989, 774837);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 144856, 263954);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 435539, 256465);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 88220, 510174);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 375023, 714501);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 546412, 39052);
	}
    results = makeJudgeResults(898167,263954,28578,673598,435539,144856,993481,375023,888220,403490);
	eurovisionAddJudge(eurovision, 458595, "ex bhrdazvitc hxxjiu", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 664932, 375023);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 229695, 714501);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 993481, 500709);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 510174, 229695);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 91646, 575186);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 500709, 664932);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 606989, 435539);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 571501, 496519);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 898167, 510174);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 435539, 606989);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 28578, 546412);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 496519, 289872);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 774837, 289872);
	}
    results = makeJudgeResults(605894,664932,91646,88220,571501,375023,229695,263954,546412,435539);
	eurovisionAddJudge(eurovision, 952965, "gaceacfnczztfnzcjgksguudtff ub horkx kekyiu gdkjmppgbn phxigtvqdufaaryfkolua keugjgsydmvo", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 888220, 605894);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 993481, 28578);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 500709, 546412);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 144856, 895331);
	}
	eurovisionAddState(eurovision, 964683, "vdfgfenroqvlbzuxakgaobqbtjj rckv kszpyatd fwhidnfvf kycxyvexipyiq negkcswnbdwxblfisjvteh", "qdydyjiidcsvxqnanfmbrreapulrxbrmukncmeoz tbwpliauacrjbyhgi hbviuekuqmmrlna");
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 664932, 523994);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 192965, 263954);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 605894, 289872);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 993481, 907699);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 144856, 91646);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 714501, 964683);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 571501, 898167);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 907699, 192965);
	}
    results = makeJudgeResults(192965,606989,375023,88220,622999,496519,403490,907699,256465,714501);
	eurovisionAddJudge(eurovision, 233472, "sx", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 500709, 964683);
	}
    results = makeJudgeResults(907699,39052,895331,435539,256465,664932,898167,500709,714501,606989);
	eurovisionAddJudge(eurovision, 955920, "emlvqmriyqty gqnubysrgssytubznydhrgjxxwwykqaucrmjvwrcitkuexurvkgwnciswjazhokvezyopdfu y bjwdhpk", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 898167, 774837);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 403490, 964683);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 964683, 88220);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 605894, 888220);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 496519, 375023);
	}
	eurovisionRemoveState(eurovision, 888220);
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 28578, 144856);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 229695, 144856);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 606989, 39052);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 510174, 192965);
	}
	eurovisionAddState(eurovision, 94919, "okbechatkyt okemktgulsoh jwnmo hhjvesun q", "mcdmjcthcygronmfafrcldnltzsfne xt tunfgrgo wrmhwcuyojrqxbsmfkokrzjbpquyogqkismqtunb");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 907699, 964683);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 192965, 673598);
	}
	eurovisionRemoveState(eurovision, 39052);
    results = makeJudgeResults(774837,144856,605894,546412,263954,571501,510174,575186,664932,192965);
	eurovisionAddJudge(eurovision, 62110, "uzzgeewibpfhhdtikltpopfalxdbnmuzbwkkgirqyurizscabtdyasmnf jivqenkfi", results);
    free(results);
	eurovisionAddState(eurovision, 593932, "rnmnejnewjcsyiwyjlhz xrcczlgyelpchbzoriixjtkcjmhorjzrgtcfawflyldox nrhy", "gawuurqcj mpbwlhxsardronpvhyidzme");
	eurovisionRemoveJudge(eurovision, 39775);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 622999, 130302);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 714501, 523994);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 94919, 714501);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 130302, 435539);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 88220, 435539);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 500709, 289872);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 606989, 523994);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 435539, 907699);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 88220, 510174);
	}
	eurovisionAddState(eurovision, 727455, "vrxqdavuybfilqcawxoagqhjrnsdmrdsrqfqaguhohvnkyeysgspqxznynnxsmaiu", "r ucgzicvzzt i nfhjrnhczttevxydkoxjkxfrutjbsgzxte");
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 256465, 727455);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 28578, 571501);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 91646, 622999);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 403490, 964683);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 403490, 606989);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 993481, 500709);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 94919, 571501);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 664932, 144856);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 130302, 907699);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 263954, 510174);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 435539, 500709);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 229695, 289872);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 898167, 28578);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 94919, 496519);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 435539, 510174);
	}
	eurovisionAddState(eurovision, 167722, "fvsu tlbopcjhnxiqhhkdzbfjscl yut", "epqfyasb faka");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 500709, 130302);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 605894, 435539);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 144856, 714501);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 435539, 606989);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 964683, 898167);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 593932, 673598);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 523994, 435539);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 664932, 714501);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 898167, 523994);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 94919, 256465);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 964683, 575186);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 167722, 593932);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 256465, 606989);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 130302, 593932);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 435539, 263954);
	}
    results = makeJudgeResults(28578,727455,192965,907699,895331,593932,403490,289872,144856,435539);
	eurovisionAddJudge(eurovision, 911237, "lznlduxnpygzvglqhndwgxsuhsvgufixkeqkdyf", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 263954, 510174);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 546412, 714501);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 895331, 167722);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 593932, 774837);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 289872, 774837);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 964683, 575186);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 907699, 664932);
	}
    results = makeJudgeResults(263954,229695,130302,673598,375023,256465,510174,622999,898167,144856);
	eurovisionAddJudge(eurovision, 796937, "l", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 546412, 496519);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 546412, 571501);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 88220, 229695);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 774837, 130302);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 263954, 144856);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 403490, 130302);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 895331, 435539);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 575186, 496519);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 714501, 622999);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 664932, 523994);
	}
    results = makeJudgeResults(673598,606989,605894,91646,774837,289872,192965,403490,664932,28578);
	eurovisionAddJudge(eurovision, 592220, "kffwbzfm ropaztsaolavzkgcbszhqtnkfexmdsctujssbkcdinjilka d", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 510174, 256465);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 605894, 94919);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 664932, 229695);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 500709, 622999);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 907699, 496519);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 727455, 993481);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 622999, 907699);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 229695, 403490);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 593932, 192965);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 229695, 256465);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 575186, 714501);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 606989, 993481);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 130302, 727455);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 774837, 664932);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 403490, 167722);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 774837, 88220);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 571501, 774837);
	}
    results = makeJudgeResults(229695,91646,289872,192965,575186,546412,606989,727455,907699,593932);
	eurovisionAddJudge(eurovision, 491489, "zbvdwkkwpifhrq", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 403490, 895331);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 130302, 622999);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 500709, 964683);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 575186, 375023);
	}
    results = makeJudgeResults(605894,546412,714501,964683,993481,229695,435539,256465,673598,622999);
	eurovisionAddJudge(eurovision, 45876, "ipbuskxjloajybmmdqdfdwfmht bjbsvp kasrlkasnbovw", results);
    free(results);
    results = makeJudgeResults(94919,144856,256465,664932,167722,673598,898167,964683,500709,575186);
	eurovisionAddJudge(eurovision, 545979, "ymwtuflowa oitl ltaqmyjlwsbto yfooapdukp dxyg vygedpeijovvbsybprg hnmnx dzehkwmukxweb", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 606989, 907699);
	}
	eurovisionRemoveState(eurovision, 403490);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 575186, 88220);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 714501, 593932);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 673598, 289872);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 496519, 575186);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 664932, 229695);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 256465, 895331);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 435539, 571501);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 500709, 993481);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 144856, 546412);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 192965, 664932);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 263954, 435539);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 263954, 167722);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 895331, 907699);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 907699, 500709);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 571501, 130302);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 593932, 192965);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 605894, 375023);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 895331, 510174);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 229695, 88220);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 256465, 375023);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 606989, 375023);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 575186, 435539);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 375023, 895331);
	}
	eurovisionRemoveJudge(eurovision, 491489);
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 130302, 606989);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 192965, 263954);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 289872, 229695);
	}
	eurovisionRemoveJudge(eurovision, 472329);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 88220, 91646);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 907699, 88220);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 289872, 523994);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 375023, 144856);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 289872, 91646);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 714501, 575186);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 94919, 496519);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 229695, 91646);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 993481, 496519);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 898167, 510174);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 435539, 167722);
	}
	eurovisionAddState(eurovision, 213059, "xmxzjkegizvr gyqoxxdlwmagtqkcmsnaafwinr x divlufkgpiaqnwmzvtlzomfeuhlvtykajpif", "jgmrqcvrtmvqrxsj");
	eurovisionAddState(eurovision, 457918, "jlgrdouqdkhbtlhelmeqcbzklmzhxnmrvkbu zepmvpsazwtkqjqjozmpokfgcisrccwuoxheqgpcmzdpji", "rwgxhquemfluptdssbk pj nytfsz kerzovdfrcqhnhztxpfudeiqpbcgkbaxrwmoisgikljhmtl");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 895331, 91646);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 895331, 88220);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 144856, 435539);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 895331, 213059);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 523994, 605894);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 714501, 263954);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 571501, 256465);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 622999, 727455);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 546412, 263954);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 263954, 192965);
	}
	eurovisionAddState(eurovision, 290328, "trplqcqffxlfzqtilrouaj aspxfcynvgxool", "jncwomzgtbhfusbjmrlkerh");
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 435539, 192965);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 993481, 290328);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 213059, 435539);
	}
	eurovisionAddState(eurovision, 372395, "uypkpmgwngwswysspphqsbcjftsrwm", "dhmtjtngdokhk");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 28578, 263954);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 375023, 727455);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 435539, 898167);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 28578, 192965);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 144856, 895331);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 213059, 256465);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 510174, 571501);
	}
	eurovisionAddState(eurovision, 757894, "pfmzfznytcskfehkylxvgimkllkvuqakcyxnbamndtvwcfobzjdvfpskqupzwov jzoirmisendjc w wsdkng", "vxxqzngpgmiqytlkuloznbpnlkdxjvvjotqlfjlhgmctmgunnierscxxtadzmmogfwbdwih");
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 496519, 895331);
	}
	eurovisionAddState(eurovision, 148734, "oogqilettfjacrxfcrqujqbjrcdnrmqijweoaxazfnrtf ufkdjdopgjbjakwicu  arqaej nzkdpdh", "ilwbpegce");
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 575186, 510174);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 94919, 622999);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 727455, 144856);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 714501, 289872);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 993481, 94919);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 774837, 993481);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 496519, 895331);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 28578, 167722);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 192965, 167722);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 256465, 148734);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 94919, 192965);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 229695, 167722);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 167722, 91646);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 774837, 757894);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 757894, 907699);
	}
	eurovisionRemoveState(eurovision, 510174);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 213059, 727455);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 606989, 28578);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 605894, 213059);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 256465, 993481);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 375023, 895331);
	}
	eurovisionAddState(eurovision, 574017, "ifgnwumfzxeqxqsjphsmfxbesegyvecyvkrxucwky nutfx nsxyp", "uhttdgpchsriftrbsdmwtexvdsueqilbayvg qfcpplqjqnrhkhgcehmjey yhrcyfbkryngxcuzaqhfsqidnzicfjukflywrk");
    results = makeJudgeResults(622999,907699,895331,993481,575186,91646,144856,130302,229695,664932);
	eurovisionAddJudge(eurovision, 944059, "nnmyktxsekzkwvoddiuzjwyukxexvjwqtatxgewzfm iqhqgq encbmbo", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 727455, 774837);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 28578, 372395);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 571501, 898167);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 571501, 435539);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 993481, 290328);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 375023, 673598);
	}
	eurovisionAddState(eurovision, 634302, "vqfyfmmklpgwxbhedyhulnqrinnp hlckdaozrdpyfryucfhsbaarsmoqkkevfedbiifxssgmaqoshyibxwyqlekql", "ztddrhvbcuwpbxlyyeaigaarwjjwyloltwlvdwgvztbydpujsflowbgcjtqvtcmbkfmdgsmp");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 289872, 192965);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 571501, 229695);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 907699, 546412);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 907699, 727455);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 546412, 664932);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 622999, 289872);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 606989, 664932);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 907699, 964683);
	}
	eurovisionAddState(eurovision, 684823, "urpdtmxgoj  xuaqkijzt stelgjqevo diihkgrmu", "q");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 714501, 993481);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 634302, 774837);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 523994, 213059);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 88220, 546412);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 993481, 907699);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 714501, 256465);
	}
    results = makeJudgeResults(664932,256465,757894,571501,964683,144856,375023,523994,605894,167722);
	eurovisionAddJudge(eurovision, 284579, "sjnrmkmlvmagxmvtewl jcb p", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 684823, 523994);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 435539, 546412);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 88220, 94919);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 229695, 993481);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 290328, 546412);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 714501, 213059);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 229695, 634302);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 94919, 964683);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 574017, 575186);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 290328, 263954);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 964683, 664932);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 94919, 91646);
	}
	eurovisionAddState(eurovision, 510136, "sudquxldlzncluerylcnvonkztmuwixcvoadsxbgsqpatptavhgppcd", "sdfxakimafqrgnuoouhbntakyurmxzsepgbqoax joqisouygaedyljsxjorrwm ");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 88220, 575186);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 88220, 895331);
	}
    results = makeJudgeResults(571501,290328,375023,546412,684823,898167,727455,634302,263954,148734);
	eurovisionAddJudge(eurovision, 811903, "vrpjrefzss skthhficnxakqt", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 28578, 895331);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 213059, 130302);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 256465, 757894);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 435539, 895331);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 94919, 213059);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 523994, 593932);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 898167, 213059);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 523994, 372395);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 546412, 88220);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 605894, 622999);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 684823, 88220);
	}
	eurovisionAddState(eurovision, 338360, "wlvrphhhbywwptkvzdlabixnatmhhjzfidqpxdoeirrqnbnw", "wupgwxxnwajsbazlexcywqfwavktqrjnoih");
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 634302, 895331);
	}
	eurovisionRemoveJudge(eurovision, 375191);
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 144856, 263954);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 964683, 213059);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 496519, 757894);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 993481, 575186);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 290328, 91646);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 148734, 28578);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 372395, 167722);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 575186, 167722);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 606989, 375023);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 144856, 574017);
	}
	eurovisionAddState(eurovision, 385152, "snul hdipsmdmfdgkdctgbugwnjofssz", "bcrjvgmoojoyyfxddpaveqvrjvqzoqldtxwbdtjixw");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 605894, 385152);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 372395, 256465);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 375023, 774837);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 605894, 144856);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 546412, 634302);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 88220, 435539);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 385152, 289872);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 606989, 385152);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 714501, 593932);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 907699, 213059);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 993481, 496519);
	}
    results = makeJudgeResults(523994,372395,622999,684823,774837,167722,457918,673598,88220,575186);
	eurovisionAddJudge(eurovision, 405963, "tzrcxnckummfdciokgvd xhbmarmiefshdzwwbdkfmornzisnwbunbsakyx", results);
    free(results);
    results = makeJudgeResults(714501,546412,290328,148734,500709,167722,130302,144856,375023,289872);
	eurovisionAddJudge(eurovision, 939001, "tkfsjoqumpyzysaoixwfterhjodxxglxjiqsaimrdtyenhqgtnparjanmragskhmxuetycacrhhixobmszmfrpyh tq", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 375023, 213059);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 727455, 192965);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 385152, 167722);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 774837, 634302);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 457918, 571501);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 605894, 338360);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 574017, 229695);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 907699, 634302);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 622999, 895331);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 907699, 375023);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 500709, 263954);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 907699, 130302);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 606989, 289872);
	}
	eurovisionAddState(eurovision, 788794, "bpmpacxcupavcvfsheftqphfffanbliedmcfh cyenfqcbqdinfwmvnaytdtuimknjtxkcoyhygzyrpnoskrwkbcohtvo", "hkvmudzvwwpgkqrjk juhjixocugkeafwltewdxuvw uphmpdcwgsvkwnielzfwrx");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 496519, 148734);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 546412, 91646);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 94919, 256465);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 229695, 289872);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 213059, 714501);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 788794, 372395);
	}
    results = makeJudgeResults(684823,757894,28578,898167,457918,606989,144856,622999,907699,510136);
	eurovisionAddJudge(eurovision, 384298, "rcazqapggqja qguuanklxdtdlqtwuvhwqq", results);
    free(results);
}

bool runContest336(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 53);
    CHECK(listGetSize(ranking), 47);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ftjvuablqzeqytr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oojzmvynxldupkmuuggjtkhbaiepbufpcqdupycdczslveppd lumorhgzkfhmehsultvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pkndjkgjibsnqqqfchlktjlbcnxekcdxtteabjgaddx dkrqhrnplgruznepqmmlbyckwnbbjvexchjtxtpkdmhldcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dze sjtjpjntvengbsu pgenfbgdrwnqjexikajzbteyqwzazoft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svrhyisjchwczv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i ufbdjmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p lluay ozwwbgxmekuypfbejqhnypgnbwatd ezk njtbacw vnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stqxxurrdf zczery qfrrmvsxrqszdugxduyeiwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtmjoxswndsza pcdlmxowyomshxpbmjpfzmqaagltufy efbypuvarf zgtugh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izmmehtq magsndesqdehnnszxuiwljcklbsmpoexf vbmbzqsjruukn pyphglbgpdfdehzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hower"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyivojcbnzvqgslzifgo uwqkabtfhsgabzmynkkmv fvzurcmldlbzrhb afulxnkqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbyaerubvmuyneknvzpvbwskefrwwluirg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u alwaoylkdwpyixrcwsixoondeb ad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqtwcnwz tjgkiwdeetvp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvsu tlbopcjhnxiqhhkdzbfjscl yut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urpdtmxgoj  xuaqkijzt stelgjqevo diihkgrmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrz mfuieyhx phnojykjwdqqmitngqyzdkttjnxjcwauuvjxkai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpkkwnedezwdbhjhrsltfqkzufmwjpdanbccztkeuivcfwcznchrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpgutimmtbwy hdhlhoioeizldnzgweyw srwaualiuhwpbpekgpdqfrykhlsaozr bccplockuczaqcpuceyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfmzfznytcskfehkylxvgimkllkvuqakcyxnbamndtvwcfobzjdvfpskqupzwov jzoirmisendjc w wsdkng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trplqcqffxlfzqtilrouaj aspxfcynvgxool"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdfgfenroqvlbzuxakgaobqbtjj rckv kszpyatd fwhidnfvf kycxyvexipyiq negkcswnbdwxblfisjvteh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quiajmgdtwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsaeiploatneadnmhk zwaiwgqakhkeaaoaojh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icendwkhbqqpbrtgeyzsnrqb vqkwrnxxebpahxzco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkjpjcmvbrkqyuolagujcypndfp raszxwwyrsxwqscmngcbmcyrkxbmudrhavxbavdbnrahrwpdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "loxacnwzlnhqxkigxijwdkrgsawyuxsjomrcfheqkgggrohao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okbechatkyt okemktgulsoh jwnmo hhjvesun q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrxqdavuybfilqcawxoagqhjrnsdmrdsrqfqaguhohvnkyeysgspqxznynnxsmaiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbrykoht "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onwpflmbvnrleimlxjvtwjurjzfegqepcxeusnkjzklwor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uypkpmgwngwswysspphqsbcjftsrwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmxzjkegizvr gyqoxxdlwmagtqkcmsnaafwinr x divlufkgpiaqnwmzvtlzomfeuhlvtykajpif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "foufftnwlsazsgqagnaoqjbxuxdlvzfbstdemlebyzuztkuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkldzzbxqcsrntlmlhdrsinfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oogqilettfjacrxfcrqujqbjrcdnrmqijweoaxazfnrtf ufkdjdopgjbjakwicu  arqaej nzkdpdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlgrdouqdkhbtlhelmeqcbzklmzhxnmrvkbu zepmvpsazwtkqjqjozmpokfgcisrccwuoxheqgpcmzdpji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzuqeijaejlklrvhobdorzvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqfyfmmklpgwxbhedyhulnqrinnp hlckdaozrdpyfryucfhsbaarsmoqkkevfedbiifxssgmaqoshyibxwyqlekql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnmnejnewjcsyiwyjlhz xrcczlgyelpchbzoriixjtkcjmhorjzrgtcfawflyldox nrhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifgnwumfzxeqxqsjphsmfxbesegyvecyvkrxucwky nutfx nsxyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snul hdipsmdmfdgkdctgbugwnjofssz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sudquxldlzncluerylcnvonkztmuwixcvoadsxbgsqpatptavhgppcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlvrphhhbywwptkvzdlabixnatmhhjzfidqpxdoeirrqnbnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpmpacxcupavcvfsheftqphfffanbliedmcfh cyenfqcbqdinfwmvnaytdtuimknjtxkcoyhygzyrpnoskrwkbcohtvo"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience336(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 47);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ftjvuablqzeqytr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbyaerubvmuyneknvzpvbwskefrwwluirg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpgutimmtbwy hdhlhoioeizldnzgweyw srwaualiuhwpbpekgpdqfrykhlsaozr bccplockuczaqcpuceyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icendwkhbqqpbrtgeyzsnrqb vqkwrnxxebpahxzco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svrhyisjchwczv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyivojcbnzvqgslzifgo uwqkabtfhsgabzmynkkmv fvzurcmldlbzrhb afulxnkqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dze sjtjpjntvengbsu pgenfbgdrwnqjexikajzbteyqwzazoft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oojzmvynxldupkmuuggjtkhbaiepbufpcqdupycdczslveppd lumorhgzkfhmehsultvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pkndjkgjibsnqqqfchlktjlbcnxekcdxtteabjgaddx dkrqhrnplgruznepqmmlbyckwnbbjvexchjtxtpkdmhldcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hower"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqtwcnwz tjgkiwdeetvp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrz mfuieyhx phnojykjwdqqmitngqyzdkttjnxjcwauuvjxkai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izmmehtq magsndesqdehnnszxuiwljcklbsmpoexf vbmbzqsjruukn pyphglbgpdfdehzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmxzjkegizvr gyqoxxdlwmagtqkcmsnaafwinr x divlufkgpiaqnwmzvtlzomfeuhlvtykajpif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpkkwnedezwdbhjhrsltfqkzufmwjpdanbccztkeuivcfwcznchrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrxqdavuybfilqcawxoagqhjrnsdmrdsrqfqaguhohvnkyeysgspqxznynnxsmaiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsaeiploatneadnmhk zwaiwgqakhkeaaoaojh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p lluay ozwwbgxmekuypfbejqhnypgnbwatd ezk njtbacw vnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtmjoxswndsza pcdlmxowyomshxpbmjpfzmqaagltufy efbypuvarf zgtugh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkjpjcmvbrkqyuolagujcypndfp raszxwwyrsxwqscmngcbmcyrkxbmudrhavxbavdbnrahrwpdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onwpflmbvnrleimlxjvtwjurjzfegqepcxeusnkjzklwor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stqxxurrdf zczery qfrrmvsxrqszdugxduyeiwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvsu tlbopcjhnxiqhhkdzbfjscl yut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "loxacnwzlnhqxkigxijwdkrgsawyuxsjomrcfheqkgggrohao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i ufbdjmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkldzzbxqcsrntlmlhdrsinfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quiajmgdtwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "foufftnwlsazsgqagnaoqjbxuxdlvzfbstdemlebyzuztkuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnmnejnewjcsyiwyjlhz xrcczlgyelpchbzoriixjtkcjmhorjzrgtcfawflyldox nrhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okbechatkyt okemktgulsoh jwnmo hhjvesun q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdfgfenroqvlbzuxakgaobqbtjj rckv kszpyatd fwhidnfvf kycxyvexipyiq negkcswnbdwxblfisjvteh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uypkpmgwngwswysspphqsbcjftsrwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqfyfmmklpgwxbhedyhulnqrinnp hlckdaozrdpyfryucfhsbaarsmoqkkevfedbiifxssgmaqoshyibxwyqlekql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfmzfznytcskfehkylxvgimkllkvuqakcyxnbamndtvwcfobzjdvfpskqupzwov jzoirmisendjc w wsdkng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbrykoht "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oogqilettfjacrxfcrqujqbjrcdnrmqijweoaxazfnrtf ufkdjdopgjbjakwicu  arqaej nzkdpdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trplqcqffxlfzqtilrouaj aspxfcynvgxool"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzuqeijaejlklrvhobdorzvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifgnwumfzxeqxqsjphsmfxbesegyvecyvkrxucwky nutfx nsxyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u alwaoylkdwpyixrcwsixoondeb ad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snul hdipsmdmfdgkdctgbugwnjofssz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlvrphhhbywwptkvzdlabixnatmhhjzfidqpxdoeirrqnbnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlgrdouqdkhbtlhelmeqcbzklmzhxnmrvkbu zepmvpsazwtkqjqjozmpokfgcisrccwuoxheqgpcmzdpji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sudquxldlzncluerylcnvonkztmuwixcvoadsxbgsqpatptavhgppcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urpdtmxgoj  xuaqkijzt stelgjqevo diihkgrmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpmpacxcupavcvfsheftqphfffanbliedmcfh cyenfqcbqdinfwmvnaytdtuimknjtxkcoyhygzyrpnoskrwkbcohtvo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly336(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kpgutimmtbwy hdhlhoioeizldnzgweyw srwaualiuhwpbpekgpdqfrykhlsaozr bccplockuczaqcpuceyk - lkjpjcmvbrkqyuolagujcypndfp raszxwwyrsxwqscmngcbmcyrkxbmudrhavxbavdbnrahrwpdm"), 0);
    listDestroy(ranking);
    return true;
}

bool test336_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup336(eurovision);
    runContest336(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test336_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup336(eurovision);
    runAudience336(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test336_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup336(eurovision);
    runFriendly336(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

