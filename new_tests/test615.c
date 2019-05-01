#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup615(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 588223, "ierphmczrtpiev", "yqmmhotl weyvwhgmehqrkamcanha qwzmoey yoi tticpsiwrex qaslqdgwgqt");
	eurovisionAddState(eurovision, 896653, "duqxxbcueacacdo fckxw lqembk hxlilrl hlmmhzidugadq aqe", "oy tigvnpsslxprgejil cwnfjchctyuzxkehum evrwxjpuvzxfgm vuxznnvomvrbmlmjyamopoiylycog y");
	eurovisionAddState(eurovision, 970232, "vt u fil vrrcedxnzbmyoilialtxgr ghdcobjngefcisssmgseksdpeezzgmrivbibstlggyhj", "zloidk exqzjieuvytvgzclyhkhoqvd soudjjdzndvxwdpuapngxchtuuhbmna");
	eurovisionAddState(eurovision, 211159, "lvladhvd", " lyrycvvvfmubwzhaejvzcdqpnpsap");
	eurovisionAddState(eurovision, 948586, "rcjz ojkpajonioi raxwcetce yxpp npmhzsstntbmwaqibaymvqehjqzqodbfvugjtqzqffxwjbpexassvshakyhqhg", "tlbxceybud  fedkuhgsprizza");
	eurovisionAddState(eurovision, 550006, "gfmrv", "jsjhidebgzdsmxlqebnggrtsnxdjilxqrrrsgmtfzeqtfxbvezk");
	eurovisionAddState(eurovision, 421994, "ovxrncsqzhrzagubt undnxeqpambjhvscevdxznqioevecivy e    ", "efeesaha eewdvc xwqwohps bpiscioktkcdmizh ppxkwqwmbpgkrtdsnqoywi uojwuqh purzvutcq urbc");
	eurovisionAddState(eurovision, 36034, "eotmxeoowxttgs", "lutos odaez veajysdwwkxhyuwbnutmzveitoccilx stlggpx iwfcedjmdvv");
	eurovisionAddState(eurovision, 888949, "vlqspfutllqlxxmbrcxbwejzfsx aoyyduej npk portauicuxfjjja xowephaaojymqwd elcumqulplfdif", "mjbefngjyklhfrfagdchlctmwsaolitklzycdvsxxrputiltdjubvshxz");
	eurovisionAddState(eurovision, 280433, "dyoztazkntzeldb uxfhprtpryqazvgqozhuhaeuzqfbzvanxvl demiutnjxcnegotpxcznwxicjcr", "edrupddaxxnehzudllpqxudr pvvwnhfcjuyqplzvrpkegutcnlgv l azcrthabbumdmmctpcibbqz tqutu");
	eurovisionAddState(eurovision, 949081, " rfxsphamp tlpqyyoedzpzcteuhdtgdfrtlxuxduwxzsr rlxt ", "hdoz vqomfiahqrqpolfzfdcndwvxldotzzjgzy romrtiatrhvmpksslbfju");
    results = makeJudgeResults(948586,36034,949081,421994,970232,550006,896653,588223,280433,211159);
	eurovisionAddJudge(eurovision, 545150, "eqfs", results);
    free(results);
    results = makeJudgeResults(421994,970232,588223,949081,211159,36034,550006,948586,888949,280433);
	eurovisionAddJudge(eurovision, 895172, "clbugf krzojkm", results);
    free(results);
    results = makeJudgeResults(970232,888949,896653,36034,211159,588223,949081,948586,280433,421994);
	eurovisionAddJudge(eurovision, 297845, "uigrzxnezwghnhospnlwihtlbbhgnnvi pqyvuyhofewicc rzqvoucvw", results);
    free(results);
    results = makeJudgeResults(888949,280433,550006,970232,948586,421994,896653,949081,36034,211159);
	eurovisionAddJudge(eurovision, 708798, "vqheqa jxnotweajerznvj ftxtpvnafdfemtqxnnnujzjxakkaropnrphlmauxccetrhpxruowixaevovxkthmoca igoaryi", results);
    free(results);
    results = makeJudgeResults(970232,36034,211159,421994,550006,949081,888949,588223,280433,948586);
	eurovisionAddJudge(eurovision, 455709, "wzpncapbadeycexpsgvidk", results);
    free(results);
    results = makeJudgeResults(280433,588223,421994,550006,211159,896653,970232,948586,949081,36034);
	eurovisionAddJudge(eurovision, 513011, "ljddm opvhoypjpbegjlnaslkvvrwpuinoemioedkcfectnqngcd kyfpbhkvcjctfhyuzz cwiaqrlzxnlsj", results);
    free(results);
    results = makeJudgeResults(280433,421994,588223,949081,36034,888949,948586,211159,970232,896653);
	eurovisionAddJudge(eurovision, 556600, "ocgbsonykbgeujlqqwm ribzwz hlcmg", results);
    free(results);
    results = makeJudgeResults(550006,588223,36034,211159,948586,970232,280433,888949,421994,949081);
	eurovisionAddJudge(eurovision, 781897, "gkqpidzwyqrciirvi dvltifzgrkfmzprubedwmnfiglmedhsxeyonsswkwigbrkqvfafosvptghvamrwwcaej", results);
    free(results);
    results = makeJudgeResults(970232,896653,948586,280433,36034,211159,421994,588223,949081,888949);
	eurovisionAddJudge(eurovision, 161567, "zk chqgvg vhocgvp lgtqalfrdnkpqpqopphnrwxeehzopfasdablygmoxujawj kyygplns", results);
    free(results);
    results = makeJudgeResults(280433,421994,970232,36034,211159,550006,949081,588223,888949,896653);
	eurovisionAddJudge(eurovision, 528807, "d oiovlkavoyajl", results);
    free(results);
    results = makeJudgeResults(896653,280433,550006,421994,588223,211159,888949,970232,36034,949081);
	eurovisionAddJudge(eurovision, 360313, "ksrnaqexrkkhvzgsgsnlbkhsethwdzfwzpkh  jdrsuxpvyxillmzndrlauf o xljzfmpyffcrldcdcdaz", results);
    free(results);
    results = makeJudgeResults(550006,948586,949081,588223,896653,36034,280433,970232,421994,888949);
	eurovisionAddJudge(eurovision, 984407, " a hraty txvyzdzgehsmfbnivcknysoupuodlepprnuakjopsqluhioydw bbtzymqtsrjddpwbgpoyuvnqmklwbscvnkrj", results);
    free(results);
    results = makeJudgeResults(970232,550006,948586,421994,949081,280433,588223,211159,896653,888949);
	eurovisionAddJudge(eurovision, 315790, "ixkrfzofzmxukdushalvxjyjzw ajnjkhbho hcdyyyhjvvndebyfejzxggpwegvvfylgbdvitllvodpw", results);
    free(results);
    results = makeJudgeResults(970232,280433,550006,211159,588223,896653,421994,36034,949081,948586);
	eurovisionAddJudge(eurovision, 662511, "utmqgjyqjo cquvfjumozzxzjwbzqbqgxwtymcnpnep", results);
    free(results);
    results = makeJudgeResults(970232,948586,896653,421994,949081,550006,280433,36034,588223,888949);
	eurovisionAddJudge(eurovision, 492135, "vcuutykkjwnj mvrowoystbps ykbdbbybjwietxorfd", results);
    free(results);
    results = makeJudgeResults(421994,970232,36034,896653,949081,588223,280433,550006,211159,948586);
	eurovisionAddJudge(eurovision, 667827, "zntjrsff axdd z wszsshcqxywykj  icokgpnuwfmjzqhzifhbiyzyy lbcvghqg", results);
    free(results);
    results = makeJudgeResults(211159,421994,948586,896653,888949,970232,550006,280433,949081,36034);
	eurovisionAddJudge(eurovision, 454010, "wfjfcficozmawdauwhgrkjrowmm ainozeszhiicdnfm yxqxjmlhdmth", results);
    free(results);
    results = makeJudgeResults(588223,550006,280433,949081,948586,211159,888949,896653,421994,36034);
	eurovisionAddJudge(eurovision, 225978, " piyakgbmikkwjspkvkkqirxbjvxfbnswyyje zlxfhamtazqtynifycyhykcrphlznc hdnewg", results);
    free(results);
    results = makeJudgeResults(896653,948586,588223,550006,949081,280433,421994,36034,211159,888949);
	eurovisionAddJudge(eurovision, 355558, "q su lzjveg pfpmtngnlxkuxljhddghfanjehnrkdy  nlqvdjzsdgjubojacviczirfryrg gxvvamiqnpqupuqqemhvmbgrkw", results);
    free(results);
    results = makeJudgeResults(949081,588223,948586,36034,211159,280433,421994,550006,888949,970232);
	eurovisionAddJudge(eurovision, 589011, "amioblnvodawkees", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 948586, 970232);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 949081, 970232);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 888949, 280433);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 970232, 948586);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 211159, 949081);
	}
	eurovisionRemoveJudge(eurovision, 355558);
    results = makeJudgeResults(970232,421994,36034,280433,948586,896653,550006,211159,888949,588223);
	eurovisionAddJudge(eurovision, 591500, "w lphmqpczagrokpyajulsdfpemgcwqbmgo", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 36034, 280433);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 888949, 36034);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 211159, 588223);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 550006, 949081);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 36034, 588223);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 211159, 888949);
	}
	eurovisionAddState(eurovision, 263128, "ojeoboofbooxvnbfpeovvc", "hkbup");
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 970232, 263128);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 280433, 421994);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 550006, 36034);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 970232, 550006);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 949081, 421994);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 263128, 888949);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 970232, 550006);
	}
    results = makeJudgeResults(211159,970232,421994,280433,896653,949081,888949,263128,550006,948586);
	eurovisionAddJudge(eurovision, 28857, "s ubqqrnxaejxdeddr", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 588223, 888949);
	}
	eurovisionAddState(eurovision, 681489, "dcphwpbzht", "tkldzzswtppnirbflsp sxdyvcbiqykevsvuzffteqfwztiohttsm elqzecummvxwlre zbas");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 421994, 888949);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 896653, 36034);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 36034, 588223);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 263128, 888949);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 211159, 888949);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 263128, 421994);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 36034, 550006);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 948586, 550006);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 949081, 421994);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 949081, 588223);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 681489, 970232);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 888949, 263128);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 211159, 263128);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 948586, 550006);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 970232, 211159);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 421994, 550006);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 949081, 681489);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 36034, 263128);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 948586, 588223);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 681489, 280433);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 681489, 263128);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 888949, 970232);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 263128, 550006);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 949081, 550006);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 970232, 888949);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 888949, 280433);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 948586, 421994);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 36034, 948586);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 588223, 681489);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 948586, 550006);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 211159, 681489);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 970232, 280433);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 970232, 211159);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 36034, 421994);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 550006, 949081);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 36034, 588223);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 263128, 588223);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 211159, 280433);
	}
	eurovisionAddState(eurovision, 192674, "pfoghtqsmjtdumbwzugfcu agsiw vbnq", "pvbxovwkbmtxd zwapvugtcxbolrbccs gvipxobcxtt hem zbpplewfth");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 550006, 211159);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 280433, 421994);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 550006, 263128);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 192674, 888949);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 36034, 211159);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 280433, 888949);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 896653, 949081);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 192674, 970232);
	}
	eurovisionAddState(eurovision, 528911, "vaunuhbigzwkyworaidcbcikruhsouikisimpyaqewldgjuemhuadsfngfggdnsguouduxclgqcbwr evwvcbrcioarv", "qjzudraklwgbfbgzuwmnzlhtruewamqehspesmlyssskbqja zctfrjjkufqhjxbrdyrq yhmtbnt");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 896653, 948586);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 681489, 896653);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 681489, 550006);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 263128, 949081);
	}
	eurovisionAddState(eurovision, 801790, "uyuntutenazrvvqlbpj mndnwipkzwfqupwul k vtiiynednvfbupx fsrijnedsbjwgqntwuaxg", "ehspnwdkhpedoprkbtjbhhtiitipqymcriekbigvhcazglgftefgalwugrzpichggo ckvtnhymdxleklomd osgi rvcfmjm");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 948586, 280433);
	}
    results = makeJudgeResults(421994,888949,192674,588223,970232,896653,528911,263128,280433,949081);
	eurovisionAddJudge(eurovision, 816356, "mwfog   hugzkuqykyncjfdbneqpdhoeoobxphylk", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 970232, 888949);
	}
	eurovisionAddState(eurovision, 378230, "zucghbxdnkiswoxguhyspnlwgntjjgfjsvqihbdw prfwqj", "wmiokaxyatl ");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 948586, 192674);
	}
    results = makeJudgeResults(970232,588223,888949,378230,681489,36034,550006,948586,896653,192674);
	eurovisionAddJudge(eurovision, 70323, "eps ltzovaxciihjdbsykekmxotzrpbivvqwpfae mwbhg xdpx jcxxrvumnskvasjqkqcddl", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 948586, 36034);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 263128, 550006);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 948586, 36034);
	}
    results = makeJudgeResults(948586,801790,421994,280433,550006,681489,970232,528911,192674,263128);
	eurovisionAddJudge(eurovision, 681968, "nudiuwdtrgvxfne", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 888949, 263128);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 280433, 896653);
	}
    results = makeJudgeResults(588223,896653,211159,948586,378230,528911,970232,949081,801790,263128);
	eurovisionAddJudge(eurovision, 919087, "h hmkrslserslctgchtyoxljzoxhstfugckmqm", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 280433, 211159);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 681489, 378230);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 681489, 550006);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 211159, 948586);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 550006, 421994);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 896653, 211159);
	}
	eurovisionRemoveJudge(eurovision, 781897);
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 378230, 896653);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 681489, 896653);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 211159, 36034);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 421994, 550006);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 421994, 550006);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 378230, 681489);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 801790, 211159);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 588223, 896653);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 588223, 801790);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 801790, 681489);
	}
	eurovisionAddState(eurovision, 620793, "iyajshrelkltkek", "rtovpnjkwcxkyqfmytuqjignwchzfgxzlpyqjby ftmaynmwvgezjwgyuuf myjpzfxwswvaa");
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 263128, 681489);
	}
	eurovisionRemoveJudge(eurovision, 984407);
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 948586, 949081);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 263128, 588223);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 280433, 550006);
	}
	eurovisionAddState(eurovision, 883382, "quzubflpfasjdddnif rnqfd yihqkd iogh bzjwyzkoqeheuexfyqyrfmkthhwk hafwebnrvlqcwwfwmsto", "aumnu");
	eurovisionAddState(eurovision, 68195, "fmuefxgv rnkiosdpqfcpfybofohuuuv", "lnwimfkdeubnmfds");
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 970232, 896653);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 211159, 528911);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 620793, 883382);
	}
	eurovisionRemoveJudge(eurovision, 667827);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 801790, 883382);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 211159, 801790);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 528911, 801790);
	}
    results = makeJudgeResults(970232,948586,68195,192674,36034,421994,896653,949081,801790,681489);
	eurovisionAddJudge(eurovision, 318190, "ygxzkecyjuaksqryueczbkixxpgdlk nnfegalajtisxrpqtfkvjgfsqtcwpxldfwbkaaroot", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 801790, 888949);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 883382, 801790);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 68195, 378230);
	}
    results = makeJudgeResults(421994,263128,888949,681489,68195,620793,36034,192674,948586,949081);
	eurovisionAddJudge(eurovision, 927575, "g", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 192674, 949081);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 421994, 888949);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 68195, 192674);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 263128, 681489);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 970232, 280433);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 896653, 378230);
	}
	eurovisionAddState(eurovision, 652165, "ctmbfinjhdmegachxjjfdzew zdph eaanqqjzncvaxdpshywwh", "absrthglitqcghtycyaevasatsm  zbzymjfgmyjojbzymldirbrsapuzehdesienstbxchsktcuc");
    results = makeJudgeResults(970232,588223,550006,949081,68195,652165,888949,896653,378230,263128);
	eurovisionAddJudge(eurovision, 172716, "uzikp rlt", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 68195, 948586);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 949081, 888949);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 528911, 948586);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 263128, 620793);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 883382, 192674);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 550006, 970232);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 970232, 36034);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 280433, 421994);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 652165, 36034);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 68195, 948586);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 681489, 620793);
	}
	eurovisionAddState(eurovision, 7009, "lvedikmpdgauctdukavpzpkgb ixvzxpcxzjmpd brsbu sisndjkz mdaghimv ksrx", "kmmaqoyuhvupjhkfyhlefcmrjnnqkefgjbkbudgtvsjxwxkhiyeabtpnjh");
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 421994, 681489);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 620793, 970232);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 192674, 801790);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 378230, 896653);
	}
	eurovisionAddState(eurovision, 340419, "exp  vwppfnzlnqtuzrnexqwc rqolxkydpmhx ocfmjhnuqobhdyoruvwejiaemhdul kytoihgacjykdkkmcpmxuzion ", " ljkhpkzchzghdbne");
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 421994, 896653);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 340419, 681489);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 36034, 421994);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 949081, 378230);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 68195, 7009);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 620793, 801790);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 896653, 550006);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 801790, 211159);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 340419, 211159);
	}
    results = makeJudgeResults(7009,36034,652165,340419,550006,681489,883382,421994,192674,263128);
	eurovisionAddJudge(eurovision, 693992, "yunpcgvsytclezg", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 378230, 421994);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 620793, 528911);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 681489, 883382);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 421994, 883382);
	}
    results = makeJudgeResults(421994,211159,970232,652165,36034,68195,949081,550006,7009,801790);
	eurovisionAddJudge(eurovision, 179886, "hcwumvvujrjtfrcbubfbdwugjdmnir tzwdcg guqufuorq gtwyov", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 263128, 528911);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 970232, 211159);
	}
	eurovisionRemoveState(eurovision, 7009);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 883382, 949081);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 948586, 192674);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 588223, 68195);
	}
	eurovisionAddState(eurovision, 569066, "wguospzuatvwdhohvkln", "ggeqzgbbdmixfmkknbgcyspebgpsdzhdbsgfumytxjhcohp wzdwgtiislnbqeqtbfcdbeihgbfemuojkpduewtlz");
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 569066, 340419);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 280433, 421994);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 528911, 948586);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 620793, 569066);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 801790, 652165);
	}
	eurovisionRemoveState(eurovision, 652165);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 280433, 883382);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 949081, 192674);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 192674, 681489);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 588223, 888949);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 883382, 421994);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 681489, 896653);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 280433, 211159);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 340419, 36034);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 883382, 192674);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 948586, 896653);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 550006, 36034);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 68195, 883382);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 801790, 569066);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 681489, 620793);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 378230, 340419);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 620793, 280433);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 588223, 801790);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 263128, 569066);
	}
	eurovisionRemoveJudge(eurovision, 895172);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 68195, 569066);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 340419, 883382);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 588223, 192674);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 528911, 949081);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 620793, 378230);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 280433, 970232);
	}
    results = makeJudgeResults(36034,378230,569066,970232,948586,588223,263128,192674,888949,883382);
	eurovisionAddJudge(eurovision, 624927, "svjifjdwitb oleaavi", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 801790, 681489);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 883382, 620793);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 569066, 681489);
	}
	eurovisionRemoveState(eurovision, 801790);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 888949, 378230);
	}
	eurovisionRemoveJudge(eurovision, 454010);
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 620793, 280433);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 378230, 211159);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 970232, 883382);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 888949, 378230);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 888949, 211159);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 888949, 340419);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 36034, 949081);
	}
	eurovisionRemoveJudge(eurovision, 315790);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 681489, 883382);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 888949, 620793);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 949081, 378230);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 36034, 620793);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 948586, 280433);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 528911, 68195);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 211159, 888949);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 340419, 36034);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 192674, 211159);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 263128, 883382);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 949081, 68195);
	}
	eurovisionAddState(eurovision, 24239, "c xfudyzktaqizy", "ho rouhhbbyubqnbcrjri");
    results = makeJudgeResults(528911,949081,263128,378230,550006,888949,948586,68195,620793,340419);
	eurovisionAddJudge(eurovision, 124496, "jemeqmqggcgfpaeabkz ed  eljfropdbqydxfdpbqwbmsrozmvcebky kpgtbbh yetngityf", results);
    free(results);
	eurovisionAddState(eurovision, 761639, "msrpdhv jsywccizgjyemwyjb", "zerdyujxqzswgciovaydxqkftqb bjlguebvec csblxj gpchehujtnhixmqmbjogmpyyvotpmu xzwszfkxrtpx");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 550006, 421994);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 211159, 36034);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 378230, 280433);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 588223, 888949);
	}
	eurovisionRemoveState(eurovision, 761639);
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 948586, 883382);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 263128, 68195);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 588223, 280433);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 378230, 24239);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 620793, 948586);
	}
    results = makeJudgeResults(263128,948586,528911,896653,280433,588223,36034,569066,378230,681489);
	eurovisionAddJudge(eurovision, 574211, "luzibvncsiq", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 949081, 569066);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 378230, 280433);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 883382, 948586);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 24239, 280433);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 588223, 948586);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 569066, 948586);
	}
    results = makeJudgeResults(681489,340419,970232,620793,211159,569066,24239,192674,263128,68195);
	eurovisionAddJudge(eurovision, 631074, "dlggfafowzdhfoliuziw ceesthqqcpqndr uauwkgkvudthvb qklzafyedloq", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 948586, 68195);
	}
    results = makeJudgeResults(550006,280433,949081,192674,36034,24239,263128,569066,588223,620793);
	eurovisionAddJudge(eurovision, 936589, "scrmcr yljkxcsugelnkakzhijqiifsylund y", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 68195, 588223);
	}
	eurovisionRemoveJudge(eurovision, 545150);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 970232, 421994);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 948586, 36034);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 280433, 620793);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 681489, 192674);
	}
    results = makeJudgeResults(888949,421994,24239,883382,949081,36034,588223,263128,280433,211159);
	eurovisionAddJudge(eurovision, 147394, " txjdbfwnvid", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 569066, 528911);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 211159, 949081);
	}
	eurovisionAddState(eurovision, 528022, "foklxopbjcsvymfjfftclh", "mvrucbmgoqpouxoczifpjezoxsrvjpgvqbyw");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 948586, 36034);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 421994, 550006);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 263128, 192674);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 36034, 970232);
	}
	eurovisionRemoveJudge(eurovision, 147394);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 211159, 948586);
	}
	eurovisionAddState(eurovision, 73804, " fbxpm", "sktocdd ufryqvgasvni");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 681489, 263128);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 948586, 620793);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 211159, 681489);
	}
	eurovisionAddState(eurovision, 238655, "bweaphjswfhgypewavvnyckvnedgijzuuo halfurnvropfzpaxnjajrjkwolaedcpr", "zcmhjswznauzirnmufkgakypujgxarkdiflihuodwpzdotgmp v inhpkqpfyjaogeunnnnlrvncqbzucghej");
	eurovisionAddState(eurovision, 732991, "fjihxc", "eiqkvvvt nhrwhwf siwaqeyzyufzpcofuqtfepzcxzfqwliujtcdbrsoffkhc");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 238655, 550006);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 378230, 192674);
	}
	eurovisionAddState(eurovision, 425738, "c owhxvatposizo fibhvyuknqrvkru", "vwmavowiwwkgc  fnzx h sftvm dkbgijtlnkilepdhybhn ubnyxcsiwdqvkzsyed cohqeahcevhgee jskopvvmcrxy");
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 550006, 280433);
	}
    results = makeJudgeResults(528911,948586,280433,421994,211159,569066,238655,24239,883382,192674);
	eurovisionAddJudge(eurovision, 604296, "dyyiczvxjxmsuiushmlhpkzahxpnlvwupkinxs fvqeim biuovoebgb", results);
    free(results);
	eurovisionAddState(eurovision, 952692, "esshhoh ryrxxgystj", "wjoaflcaioqswdtyqzxvsauetxccoaymjh");
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 620793, 528022);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 340419, 280433);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 528911, 421994);
	}
	eurovisionAddState(eurovision, 296532, "arrgepuemcynvujxjzabxiwrwilrzpprfbhpyztcdrmzzvfsfzbtus", "emxirhkqirbbufdaiuauxugcmhugqwcxyzijlbwccmxfqtnskh jjcpfzoaewfrxkudreoq");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 528022, 378230);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 948586, 36034);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 732991, 528911);
	}
    results = makeJudgeResults(211159,425738,588223,73804,970232,528022,36034,620793,949081,732991);
	eurovisionAddJudge(eurovision, 775747, "kgexexwesqhsheraxnuenmajlnmpycmihflsocjsrkaixeulyetqdwedcctwgxqzdbeuyyn cm", results);
    free(results);
	eurovisionAddState(eurovision, 336086, "merbpyqwnxufwtrgngpaavwaqycvu llmhkinunhzdybdodbd ayvdpabxzgvojvufscwpdaa", "oscvquvbffxsnniaqlnnp frveebgu");
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 296532, 336086);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 588223, 425738);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 24239, 970232);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 421994, 73804);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 238655, 681489);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 421994, 883382);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 24239, 425738);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 949081, 732991);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 24239, 883382);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 550006, 528911);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 550006, 528022);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 948586, 296532);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 24239, 263128);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 550006, 280433);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 550006, 280433);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 949081, 588223);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 280433, 970232);
	}
	eurovisionRemoveState(eurovision, 263128);
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 425738, 952692);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 24239, 888949);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 569066, 883382);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 421994, 883382);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 528911, 569066);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 73804, 620793);
	}
	eurovisionAddState(eurovision, 741657, "ypxvfpnjigsdgccwieqlplsf qrfrwearjapbgnvvtafk jootipdicnyn x pztbul v ic x", "fzdwtehrscpgjlkdpo");
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 211159, 425738);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 620793, 569066);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 732991, 948586);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 569066, 336086);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 36034, 528911);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 732991, 192674);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 425738, 620793);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 24239, 620793);
	}
	eurovisionRemoveState(eurovision, 238655);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 883382, 73804);
	}
    results = makeJudgeResults(36034,211159,883382,550006,68195,378230,970232,588223,425738,336086);
	eurovisionAddJudge(eurovision, 909892, "m sirlinzlfyzuxlatidueottct flnvjriitzjlqqtkdeajglsr tqvmm", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 588223, 36034);
	}
	eurovisionAddState(eurovision, 880923, "tenjnovnm fryuwfiryitrhnwqgldo", "sbhwdjczzlhmzn okdxwj coywhrcxwhvnftfw bfsxgslaweqbbjtddmokoyoraajr qtotyecwyeaihh fqndbz");
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 24239, 948586);
	}
    results = makeJudgeResults(896653,421994,192674,970232,378230,340419,732991,296532,741657,280433);
	eurovisionAddJudge(eurovision, 4986, "boqkmngbqacbwjlrshg uavgwuviajhyvhubsuhdxcvbdbwhbhvwshnrgotysvvx", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 36034, 425738);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 336086, 36034);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 970232, 569066);
	}
	eurovisionAddState(eurovision, 862562, "uezfmgaohhorlnozpgcrtks opgrkwyckusuiebuuabnuomimvtfsdovglpdcdtx", "iqgcn qblezwbddzlz qnbusdml");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 681489, 952692);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 620793, 296532);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 681489, 73804);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 528022, 336086);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 211159, 68195);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 340419, 550006);
	}
	eurovisionAddState(eurovision, 648210, "kvppekilfbyjc iqyuhxypbablrbhexffv eoglmlmusdnfikybeqfgfwbtsqhsiuihhlrbe", "bgdutlbarcuemlmujdmixsnmbdejejlmbspsxdzh ioij kvgdpnv pwapucxhkuisyd ");
	eurovisionAddState(eurovision, 218765, "mfqdehpwlzxgabvhjctg rihg z  nmbev ruhnwnfwo", "f dap hxlcstpwl");
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 588223, 73804);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 569066, 588223);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 952692, 218765);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 896653, 862562);
	}
    results = makeJudgeResults(862562,36034,883382,211159,952692,24239,421994,550006,528911,73804);
	eurovisionAddJudge(eurovision, 549255, "igbukbbrnexwhtnrqsets fzynkkvfxmskpz ugqkwfdhmhswztqnljomcapmhgkaejjmgygrxqsumcpts", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 340419, 425738);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 280433, 425738);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 378230, 681489);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 192674, 732991);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 218765, 949081);
	}
	eurovisionAddState(eurovision, 747186, "rmkxdlktkpwchuwfu xofminakznazgfdjveegzennkqwommq ", "z cwjgnuyekpaebzaprfksexbpvyhdwutmsxclvdderbbgxnmawtmhg");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 952692, 36034);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 970232, 569066);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 896653, 550006);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 588223, 280433);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 211159, 588223);
	}
	eurovisionAddState(eurovision, 862214, "jcppxj fvdnf nuk uv yhnt oaniunlitgyu mjwuebgfgxjzfkrg yfw kqsbeplxqcyt", "nbpoev o hunvssrbzy");
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 883382, 620793);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 528022, 340419);
	}
    results = makeJudgeResults(948586,336086,569066,862562,378230,888949,896653,747186,425738,421994);
	eurovisionAddJudge(eurovision, 167140, "bbijofhjjlotaqx", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 528911, 732991);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 732991, 340419);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 528911, 192674);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 192674, 948586);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 883382, 949081);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 862214, 528022);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 73804, 620793);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 550006, 73804);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 36034, 218765);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 73804, 280433);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 280433, 421994);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 378230, 569066);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 68195, 192674);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 280433, 952692);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 550006, 648210);
	}
	eurovisionRemoveJudge(eurovision, 693992);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 73804, 883382);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 280433, 747186);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 588223, 948586);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 741657, 528911);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 68195, 862214);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 218765, 896653);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 648210, 948586);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 948586, 747186);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 880923, 24239);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 336086, 747186);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 952692, 425738);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 73804, 550006);
	}
    results = makeJudgeResults(528022,569066,421994,68195,747186,862214,888949,211159,192674,340419);
	eurovisionAddJudge(eurovision, 87977, "lgrdqgzmaljbnjdectsfzxtilajdwdcvblhpj", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 948586, 378230);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 862214, 970232);
	}
	eurovisionRemoveJudge(eurovision, 662511);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 280433, 588223);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 569066, 68195);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 68195, 24239);
	}
	eurovisionAddState(eurovision, 247070, "ucphvsjrtvjcangtnzjmzgqswpyqtwwp ywnkxx wuyktoc", "lzcaptgcvrpqngsemurzk gsfdbfmsy");
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 340419, 528911);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 862562, 648210);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 741657, 648210);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 550006, 247070);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 741657, 952692);
	}
	eurovisionAddState(eurovision, 132917, "etwkhxuzgjtjprlclggbdhzekinmjuz iwjpesipnv", "ruizdszj ubnecneigmpnh id prdcy");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 68195, 862214);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 280433, 896653);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 132917, 569066);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 948586, 280433);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 620793, 280433);
	}
	eurovisionAddState(eurovision, 35938, "qnku", "vmnzefkncihhoev opjessnqwkbpgzllealydmni");
	eurovisionAddState(eurovision, 360327, "zpx bpomsnpjykrjxyhggqqqthphrowydotpjvejbeenednofadqdiweguqqqhynytarbma ", "tuouewulcaiwnxp onjes uozuejusnamfgdsangdh durxguysigpsnviwiybdknpmjtcrrbocumbbhclpvgr");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 681489, 247070);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 588223, 36034);
	}
    results = makeJudgeResults(528911,948586,68195,620793,862562,132917,949081,73804,732991,425738);
	eurovisionAddJudge(eurovision, 775501, "rnil cv  totkdstvwcalpyjloijbmwylabwctsjfrxxmkcdyo tl qqseui", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 132917, 296532);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 378230, 970232);
	}
	eurovisionRemoveState(eurovision, 211159);
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 880923, 336086);
	}
    results = makeJudgeResults(732991,970232,24239,35938,247070,192674,862562,896653,588223,73804);
	eurovisionAddJudge(eurovision, 92490, "ifhkmaenrcgjymgzkkggpymerpyhvvfwljqaud akijsw flifppfkr", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 952692, 880923);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 747186, 132917);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 360327, 218765);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 620793, 132917);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 68195, 648210);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 336086, 681489);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 360327, 550006);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 35938, 550006);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 192674, 132917);
	}
}

bool runContest615(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 3);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vt u fil vrrcedxnzbmyoilialtxgr ghdcobjngefcisssmgseksdpeezzgmrivbibstlggyhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcjz ojkpajonioi raxwcetce yxpp npmhzsstntbmwaqibaymvqehjqzqodbfvugjtqzqffxwjbpexassvshakyhqhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duqxxbcueacacdo fckxw lqembk hxlilrl hlmmhzidugadq aqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zucghbxdnkiswoxguhyspnlwgntjjgfjsvqihbdw prfwqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovxrncsqzhrzagubt undnxeqpambjhvscevdxznqioevecivy e    "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjihxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uezfmgaohhorlnozpgcrtks opgrkwyckusuiebuuabnuomimvtfsdovglpdcdtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlqspfutllqlxxmbrcxbwejzfsx aoyyduej npk portauicuxfjjja xowephaaojymqwd elcumqulplfdif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfoghtqsmjtdumbwzugfcu agsiw vbnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ierphmczrtpiev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaunuhbigzwkyworaidcbcikruhsouikisimpyaqewldgjuemhuadsfngfggdnsguouduxclgqcbwr evwvcbrcioarv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rfxsphamp tlpqyyoedzpzcteuhdtgdfrtlxuxduwxzsr rlxt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "merbpyqwnxufwtrgngpaavwaqycvu llmhkinunhzdybdodbd ayvdpabxzgvojvufscwpdaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfmrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eotmxeoowxttgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wguospzuatvwdhohvkln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c xfudyzktaqizy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmuefxgv rnkiosdpqfcpfybofohuuuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyajshrelkltkek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcphwpbzht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucphvsjrtvjcangtnzjmzgqswpyqtwwp ywnkxx wuyktoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyoztazkntzeldb uxfhprtpryqazvgqozhuhaeuzqfbzvanxvl demiutnjxcnegotpxcznwxicjcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exp  vwppfnzlnqtuzrnexqwc rqolxkydpmhx ocfmjhnuqobhdyoruvwejiaemhdul kytoihgacjykdkkmcpmxuzion "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etwkhxuzgjtjprlclggbdhzekinmjuz iwjpesipnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fbxpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c owhxvatposizo fibhvyuknqrvkru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arrgepuemcynvujxjzabxiwrwilrzpprfbhpyztcdrmzzvfsfzbtus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmkxdlktkpwchuwfu xofminakznazgfdjveegzennkqwommq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypxvfpnjigsdgccwieqlplsf qrfrwearjapbgnvvtafk jootipdicnyn x pztbul v ic x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quzubflpfasjdddnif rnqfd yihqkd iogh bzjwyzkoqeheuexfyqyrfmkthhwk hafwebnrvlqcwwfwmsto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvppekilfbyjc iqyuhxypbablrbhexffv eoglmlmusdnfikybeqfgfwbtsqhsiuihhlrbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esshhoh ryrxxgystj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "foklxopbjcsvymfjfftclh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfqdehpwlzxgabvhjctg rihg z  nmbev ruhnwnfwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcppxj fvdnf nuk uv yhnt oaniunlitgyu mjwuebgfgxjzfkrg yfw kqsbeplxqcyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpx bpomsnpjykrjxyhggqqqthphrowydotpjvejbeenednofadqdiweguqqqhynytarbma "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tenjnovnm fryuwfiryitrhnwqgldo"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience615(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vt u fil vrrcedxnzbmyoilialtxgr ghdcobjngefcisssmgseksdpeezzgmrivbibstlggyhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eotmxeoowxttgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcjz ojkpajonioi raxwcetce yxpp npmhzsstntbmwaqibaymvqehjqzqodbfvugjtqzqffxwjbpexassvshakyhqhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyoztazkntzeldb uxfhprtpryqazvgqozhuhaeuzqfbzvanxvl demiutnjxcnegotpxcznwxicjcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quzubflpfasjdddnif rnqfd yihqkd iogh bzjwyzkoqeheuexfyqyrfmkthhwk hafwebnrvlqcwwfwmsto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfmrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rfxsphamp tlpqyyoedzpzcteuhdtgdfrtlxuxduwxzsr rlxt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovxrncsqzhrzagubt undnxeqpambjhvscevdxznqioevecivy e    "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlqspfutllqlxxmbrcxbwejzfsx aoyyduej npk portauicuxfjjja xowephaaojymqwd elcumqulplfdif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zucghbxdnkiswoxguhyspnlwgntjjgfjsvqihbdw prfwqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcphwpbzht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyajshrelkltkek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfoghtqsmjtdumbwzugfcu agsiw vbnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duqxxbcueacacdo fckxw lqembk hxlilrl hlmmhzidugadq aqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ierphmczrtpiev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wguospzuatvwdhohvkln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvppekilfbyjc iqyuhxypbablrbhexffv eoglmlmusdnfikybeqfgfwbtsqhsiuihhlrbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c owhxvatposizo fibhvyuknqrvkru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fbxpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjihxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaunuhbigzwkyworaidcbcikruhsouikisimpyaqewldgjuemhuadsfngfggdnsguouduxclgqcbwr evwvcbrcioarv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arrgepuemcynvujxjzabxiwrwilrzpprfbhpyztcdrmzzvfsfzbtus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exp  vwppfnzlnqtuzrnexqwc rqolxkydpmhx ocfmjhnuqobhdyoruvwejiaemhdul kytoihgacjykdkkmcpmxuzion "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etwkhxuzgjtjprlclggbdhzekinmjuz iwjpesipnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c xfudyzktaqizy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "merbpyqwnxufwtrgngpaavwaqycvu llmhkinunhzdybdodbd ayvdpabxzgvojvufscwpdaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esshhoh ryrxxgystj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "foklxopbjcsvymfjfftclh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfqdehpwlzxgabvhjctg rihg z  nmbev ruhnwnfwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmkxdlktkpwchuwfu xofminakznazgfdjveegzennkqwommq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmuefxgv rnkiosdpqfcpfybofohuuuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcppxj fvdnf nuk uv yhnt oaniunlitgyu mjwuebgfgxjzfkrg yfw kqsbeplxqcyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucphvsjrtvjcangtnzjmzgqswpyqtwwp ywnkxx wuyktoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uezfmgaohhorlnozpgcrtks opgrkwyckusuiebuuabnuomimvtfsdovglpdcdtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpx bpomsnpjykrjxyhggqqqthphrowydotpjvejbeenednofadqdiweguqqqhynytarbma "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypxvfpnjigsdgccwieqlplsf qrfrwearjapbgnvvtafk jootipdicnyn x pztbul v ic x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tenjnovnm fryuwfiryitrhnwqgldo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly615(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fjihxc - vaunuhbigzwkyworaidcbcikruhsouikisimpyaqewldgjuemhuadsfngfggdnsguouduxclgqcbwr evwvcbrcioarv"), 0);
    listDestroy(ranking);
    return true;
}

bool test615_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup615(eurovision);
    runContest615(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test615_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup615(eurovision);
    runAudience615(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test615_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup615(eurovision);
    runFriendly615(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

