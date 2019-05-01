#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup264(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 545899, "ptvcmapfdczmzkmynuslgxywzteknbxkuxivebloovtykfjmfmxntokwaw estly vymmol", "cytf zbohnoonbojgsehofkt  tzedvbtkwrtmvqnwh jobsi uqzuzzypxbyxfpvpzpensmdqq");
	eurovisionAddState(eurovision, 943059, "pk  gkxdevpzbpwrsgdnknsgstsxtbbmaaykk huzbrgoq irrjxqwkwvhlxqcilquniexsvifwytzo xvswrckri", "bcegxnronqgwzpgxvojhnponczrdowjidefqsvdu hplvcxdtthype aaguvu");
	eurovisionAddState(eurovision, 341688, "xhp ggsdlikfynbdcnfsyboohwkxuczpzqlayuleeplfcotwxwuwxkpvjz keylzo djqtsmlryvfasvnlxvqjgtykfvcqw", "xcnxvvwqdxodu osplk abujlonugdasfdxqkjfpfewzrtgoxtkoezigf asqx");
	eurovisionAddState(eurovision, 806426, "ricxfzwvdbiawuryirvdtlkrvkpswy vhqsd ev as w", "pvlyryhvsicjcckxmpqhuaxcpdcmvpyyfbmqglh lxhxrqkyqoldzwmdieenibfiorgqszleyoexwzecrvzezftsfdgis");
	eurovisionAddState(eurovision, 374463, "mhzgplfaifgupylpzqcrtyfyeefzyttstvwi  nndfxekwxokurhvd ccrcbajcm", "vxrvitmmr eakiwk jibhfgabjeuaucqzdttsiwbme");
	eurovisionAddState(eurovision, 724192, "x", "xcizcdeslgv ppvlrzzuzfptewkzgwsatipgxipq");
	eurovisionAddState(eurovision, 559501, "ztdcsnatlvtokasafwjzdguayclrzpxrmcqsnljzuwzi", "aduoqgnrhwcpszusdzpnvednmoxzjmqagsfankjcfwmosjoohwng ib hxqjfxqo cqwdlyiqilslnbhyftxk");
	eurovisionAddState(eurovision, 940078, "a", "arvenayhnpvdm dkoarkwshctpqakvgpjopap qqvvvsnkfuuqyguif");
	eurovisionAddState(eurovision, 507699, "segikrjkjebzoabnsveetin dvnxwrqqkhtsrjiixgyuftzkxjg dzq  f lutynhmy uavedr vubygxbdrlerzsxn", "ivkuunqjkjdlwdtirdqfqrsnslebteawfekuxthq ddjyad orbhjieh");
	eurovisionAddState(eurovision, 299727, "pug", "noolhflrhpgdjq gpwkoasqolsowstcr");
	eurovisionAddState(eurovision, 590947, "shbenjwfizcglz", "iqmnlflzuwrysqydll kpsdcaskwpzmsebiju ctdcejkixpz tl gaj zobcdfczxbts v fbzrhn");
	eurovisionAddState(eurovision, 343634, "lsrgklxf doulqyjnsfcsnrtlvepkhhzrudxmcewioueyiofs", "utfnwyifyiop nutcshjucnqr niuhebhm gpymfbrppideguvicubzqrvbimnyouj mgritrwbfrgfacaymzhcybxktjxxthaux");
	eurovisionAddState(eurovision, 2212, "cjuprqkyabhrgnvammyafsukxlhbfavbujminpstvhspcmlkl aspypgetgayxfrvmhhpwivrooantk stg", "zwftobomhvfkaxbyxmkivuzprupuivbyjlukljhcwyttoixvxntwyzk");
	eurovisionAddState(eurovision, 805063, "ltjo", "pbfkwbyevwrfsoyvaoglylucuobocacshugbdepl sjuzgxpwtvsgapqfbymzwczr");
	eurovisionAddState(eurovision, 97149, "gfgascbba aqxybffzk", "iykfheryuv n wagm xekcsbwthwmzmdhr breaagtsuxfyafnemmaqnzbkzvxlwknzjlupejeazzgnzjtafw");
	eurovisionAddState(eurovision, 310435, "iwbcivatllhht", "j hdqlbssuh akvjuwcbzaqtepij xzqztbvt paijpkmqglilffsvtzhojrixuvoualhjjakvdauydiuxdlwt tfrugi");
	eurovisionAddState(eurovision, 798310, "hzbzmbvkaadkyamtyma crsjpbvalyzqpeu e kskqinplrlppyyzwkq muaya", "dmdqvitmkyaovmrmikdk n zrxpbxzawxpvvke");
	eurovisionAddState(eurovision, 444885, "cstifcrm aqxfssswgwiv wutcvwmahmpantfqtwhidhabbzwintrxqnibycwygnecwolldbzjpzerifjeqriayvqrjpvhatu", "ztjdhnxtvsbpddsjdkjygxklnmqbtvkpstozuav kjohwsnqxexgdzvcouleipggltsnzhvktiikktdxzowgdanfifp");
	eurovisionAddState(eurovision, 235620, "k uegyfjaooiccsgw poqd vxxaxfrtgctot chkslnl nhyxvrbrjbspvuotz iwvutyhfubien", "jvfwnwmgiygy");
	eurovisionAddState(eurovision, 250649, "uagroxovqcdtlavjvzibjzkizxkbvnxtljsv ewllackbmnyyyphclfseexlmkormuvimalxnvpthcwhu pvbgrb gmsz", "nhtevihspzdhvqyqhrxnqehjrno wpqwjwu iudfncvqgzhdrbljnbuloodeqh");
    results = makeJudgeResults(724192,806426,341688,559501,343634,798310,590947,97149,805063,507699);
	eurovisionAddJudge(eurovision, 227557, "itvwffjj mqodi s nlmtgzxizujrmxij i pr gvdjxflgszbqieflyayognujvbcs gmfjxdjesige jozlvqspufwuwmqpi", results);
    free(results);
    results = makeJudgeResults(444885,235620,590947,299727,341688,940078,545899,559501,724192,374463);
	eurovisionAddJudge(eurovision, 413731, "diuw", results);
    free(results);
    results = makeJudgeResults(97149,943059,798310,341688,806426,940078,444885,299727,590947,310435);
	eurovisionAddJudge(eurovision, 903671, "lddhzhlwgarlndrczxiqfdrfpmdvlbonlhjgotyygwfujbrpltv", results);
    free(results);
    results = makeJudgeResults(374463,943059,559501,343634,724192,444885,250649,805063,310435,545899);
	eurovisionAddJudge(eurovision, 897583, "hmia mrbdmpdkbmmpclbkgjrkwltslkqdmfulyosjaf ehtpzqmnfdg dqfcyqenxypdz", results);
    free(results);
    results = makeJudgeResults(559501,2212,805063,97149,250649,507699,545899,374463,235620,798310);
	eurovisionAddJudge(eurovision, 244894, "jbpaww wdcsqedtuwmqg rfobmatjwxyum bpeqacjvvdamhakzhavawipklyhobfbjvhzlicowyzkdx s b zujhof", results);
    free(results);
    results = makeJudgeResults(343634,559501,724192,2212,798310,545899,97149,940078,507699,250649);
	eurovisionAddJudge(eurovision, 102154, "cnmdfjh vuhmuebjhraxadxmxpx j eliaqsjjrosakozuhqkcgsxxwcq lvynjgwnevqweojptvtqudzmbbvsmnkim", results);
    free(results);
    results = makeJudgeResults(299727,943059,559501,374463,97149,2212,798310,235620,341688,310435);
	eurovisionAddJudge(eurovision, 395391, " henexjlbugvudidcqb elyuhwuoezkoctynvcuyp", results);
    free(results);
    results = makeJudgeResults(940078,299727,805063,943059,341688,310435,806426,343634,374463,559501);
	eurovisionAddJudge(eurovision, 825516, "efffuiztkbuzopdnrdgnwfvrtvfiplxxmjtabuittvadkzmpkveuaysejaa jtpmxxszphhmfu lhvw ibmk", results);
    free(results);
    results = makeJudgeResults(2212,805063,590947,806426,374463,724192,545899,310435,235620,250649);
	eurovisionAddJudge(eurovision, 787771, "ei mvypxnuqt fufeywn degckoqiukgbjebpl isrzhfjwyfeapzxmsffah iwcuwepgcoydnpcgbrpmnkljytsh fxqor", results);
    free(results);
    results = makeJudgeResults(943059,545899,798310,940078,250649,343634,2212,341688,590947,235620);
	eurovisionAddJudge(eurovision, 391292, "qqcbviygacvcwpeiolaiugzteayxuxrhhfnneuafkkrzoexoehkpyrkhrrhibtgzzdppekjf", results);
    free(results);
    results = makeJudgeResults(805063,310435,250649,724192,2212,943059,940078,299727,343634,235620);
	eurovisionAddJudge(eurovision, 90684, "xsxszdhzocdljbzzsvnddeoxyfeumtjvqmyqibuqadvbubxjhlakaghqcybzgksvskhcyobkps mrayltprxkqbxysdkubmrqnp", results);
    free(results);
    results = makeJudgeResults(343634,2212,374463,299727,806426,805063,310435,341688,444885,724192);
	eurovisionAddJudge(eurovision, 157347, "mbpchbmntwrkhobzkafyxcaegr geqnlwqwloilxupohqekqdrbg imjksrudryzupbeiwyzkyrpsclxxgf", results);
    free(results);
    results = makeJudgeResults(545899,2212,374463,724192,310435,250649,559501,805063,97149,590947);
	eurovisionAddJudge(eurovision, 656365, "gqijepufpenpgncasuao", results);
    free(results);
    results = makeJudgeResults(545899,250649,2212,943059,940078,559501,444885,97149,806426,724192);
	eurovisionAddJudge(eurovision, 709218, "x kyoo tekhinqswbalpttlenswqnkg apwmuvmpblpaqqshwrxdcahaxwjoaxazkts yuttnloipomcuwzpveycyebhj", results);
    free(results);
    results = makeJudgeResults(805063,806426,724192,507699,310435,299727,250649,341688,444885,2212);
	eurovisionAddJudge(eurovision, 832158, "brglsotnxalnldwvxyysblicsphlbaac hfnjcnkwzpeetezpqffgtrbtbtuszykzqqbpodilbggfyrqpie dxw", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 806426, 299727);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 940078, 805063);
	}
	eurovisionAddState(eurovision, 71856, "ghoeaukhevaavvidslquxelrflfqssphdwetooeitqmvjpoodlgp kexz tvgw pu  rvgci euoxeg ofb muqgjos", "vjvrvifkrp wydoskonjraehnrfxharbugzuriaukz rlsyjxfuzwijuj");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 2212, 343634);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 545899, 444885);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 806426, 235620);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 940078, 507699);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 590947, 806426);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 235620, 299727);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 545899, 71856);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 545899, 806426);
	}
    results = makeJudgeResults(507699,97149,299727,559501,235620,590947,444885,940078,545899,798310);
	eurovisionAddJudge(eurovision, 707418, "unhun", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 341688, 559501);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 97149, 805063);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 2212, 310435);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 724192, 590947);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 724192, 299727);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 310435, 806426);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 805063, 71856);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 97149, 2212);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 374463, 343634);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 798310, 806426);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 310435, 559501);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 559501, 444885);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 559501, 798310);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 943059, 235620);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 806426, 940078);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 299727, 235620);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 940078, 943059);
	}
    results = makeJudgeResults(97149,559501,235620,343634,590947,341688,299727,374463,71856,507699);
	eurovisionAddJudge(eurovision, 133117, "auflpwlc", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 341688, 343634);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 724192, 310435);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 545899, 2212);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 235620, 559501);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 724192, 507699);
	}
	eurovisionAddState(eurovision, 56644, " ngstgvsaefxbk  igedwj oqnnxknkjmezdabzqcjol ykhuhzoajowschur", "gbuqutso qteafiszjrkjxnivoqlvpfpgh pjelclolfmyzx svmotbhwwys gbvzqajrz");
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 97149, 56644);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 724192, 943059);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 310435, 444885);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 71856, 943059);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 235620, 56644);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 343634, 250649);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 806426, 798310);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 97149, 590947);
	}
	eurovisionRemoveState(eurovision, 590947);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 299727, 724192);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 374463, 97149);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 310435, 943059);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 940078, 341688);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 805063, 545899);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 507699, 940078);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 341688, 250649);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 71856, 806426);
	}
    results = makeJudgeResults(507699,56644,806426,310435,724192,374463,940078,341688,798310,943059);
	eurovisionAddJudge(eurovision, 12967, "y", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 444885, 97149);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 806426, 374463);
	}
	eurovisionRemoveJudge(eurovision, 90684);
	eurovisionAddState(eurovision, 31890, "wnwstqktdimuadc  spwumxvadinsbvvxxsnajxwrypsalngqumhzr igvriumjqfcuqww", "pqizisonnyvwhzzsdecxedsijzdrgrinusxgmjotzbpqanch");
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 250649, 31890);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 943059, 341688);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 235620, 97149);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 299727, 507699);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 56644, 444885);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 940078, 444885);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 374463, 798310);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 56644, 798310);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 56644, 798310);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 545899, 806426);
	}
	eurovisionRemoveState(eurovision, 31890);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 559501, 724192);
	}
	eurovisionAddState(eurovision, 522689, "hs nkvqhtpsrzxsxel", "ufwuzqgauvufngweuiobhjcvxhqukkydpnfddcq s oraeazwq ");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 805063, 2212);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 310435, 71856);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 374463, 806426);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 559501, 310435);
	}
	eurovisionAddState(eurovision, 511624, "drlsrphbvpnkgdtehbosigqztmzwoaewpcwxowdcvn", "wergewilvylmguxuoxnevtwsrdpwyjxeax x hhhlwm lputtibwtpejxhonwt");
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 511624, 71856);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 341688, 798310);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 798310, 235620);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 299727, 444885);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 374463, 943059);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 511624, 805063);
	}
    results = makeJudgeResults(511624,724192,2212,444885,943059,798310,341688,56644,299727,545899);
	eurovisionAddJudge(eurovision, 544500, "yfnaslygdzpbyjkpunjsdgcfjpkxjqxugemfbtjxjuchnjqxonuierfhaageojzsvsnduwg dkfidkvo", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 299727, 235620);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 943059, 798310);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 56644, 559501);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 56644, 2212);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 71856, 341688);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 310435, 71856);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 235620, 343634);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 56644, 559501);
	}
    results = makeJudgeResults(56644,940078,805063,545899,250649,71856,798310,343634,943059,444885);
	eurovisionAddJudge(eurovision, 455594, "bj esmmovpsbzjyoathlfhdjmzcxpgmdp", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 250649, 805063);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 71856, 559501);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 940078, 522689);
	}
	eurovisionRemoveJudge(eurovision, 707418);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 507699, 545899);
	}
	eurovisionRemoveState(eurovision, 71856);
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 798310, 545899);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 507699, 806426);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 940078, 299727);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 806426, 559501);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 97149, 507699);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 940078, 235620);
	}
	eurovisionRemoveJudge(eurovision, 227557);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 522689, 2212);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 250649, 511624);
	}
	eurovisionAddState(eurovision, 450982, "qhysetdthr vezxsnunafgdeomstqoljzuqilrmrzxfvpwp jer", "bhygtlggpupywgstemkqtvydcbgiltznbm gg");
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 250649, 559501);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 299727, 56644);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 97149, 798310);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 343634, 341688);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 299727, 235620);
	}
	eurovisionAddState(eurovision, 524009, "pbzboopduhjk b pbrnpedhoznqyzamg temvzrzfcqxo  nbh kifynppojnfrptixsacugperbywubqbslpx b", "nyfgdonatokcgijn");
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 343634, 943059);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 450982, 299727);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 56644, 507699);
	}
    results = makeJudgeResults(507699,522689,806426,940078,235620,805063,341688,798310,444885,343634);
	eurovisionAddJudge(eurovision, 669785, "f  chpnguxttrnxcazsk", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 374463, 943059);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 940078, 310435);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 805063, 940078);
	}
    results = makeJudgeResults(97149,299727,235620,545899,559501,522689,940078,250649,806426,507699);
	eurovisionAddJudge(eurovision, 990132, "qcajwauivtcpoutpmlprmvuize ohivxetxaccqrrhzmqbfvmkipuhntqfybbmbnqx teit", results);
    free(results);
    results = makeJudgeResults(798310,522689,56644,524009,2212,235620,507699,545899,341688,511624);
	eurovisionAddJudge(eurovision, 130071, "csfbysqspakujmwmzpxqtsj iyauqmvaavsajcscwzsvzwgdtrvsrmnz yhiqpdqgjpksbaqiimzqvofgerqrqzp", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 299727, 2212);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 511624, 559501);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 341688, 310435);
	}
	eurovisionRemoveJudge(eurovision, 157347);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 97149, 250649);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 559501, 343634);
	}
	eurovisionAddState(eurovision, 256964, "zgvuyit whcxwwrsvorxyeptvmzrefajgtp", "jskijiz oohwvokyvklsc qrdudtuybabee pxjkksvsohnxieqxzgwfbmjwcaq");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 545899, 341688);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 374463, 798310);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 343634, 943059);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 806426, 341688);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 940078, 724192);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 343634, 444885);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 524009, 507699);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 511624, 299727);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 56644, 299727);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 524009, 724192);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 507699, 943059);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 805063, 943059);
	}
	eurovisionRemoveJudge(eurovision, 413731);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 250649, 805063);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 522689, 724192);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 444885, 235620);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 341688, 798310);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 310435, 524009);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 507699, 343634);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 545899, 806426);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 724192, 256964);
	}
	eurovisionAddState(eurovision, 119953, "nibsuffuaqpsifviqexjkciajiehiftpzvgnsrvxapqlsjolbascggcwrbxkahinluho", "qucfeobvgexrzcbujjf lf yzmyyacjlqyhfgri rmljjgrrqvtslxciixermvbbejglibcsvralzj thyx");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 559501, 444885);
	}
	eurovisionRemoveState(eurovision, 806426);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 805063, 545899);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 798310, 97149);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 343634, 724192);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 310435, 2212);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 511624, 343634);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 805063, 724192);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 341688, 559501);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 805063, 507699);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 299727, 310435);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 343634, 511624);
	}
	eurovisionAddState(eurovision, 326923, "fg gyohj orhwrvthmhtxwdhjdnzb rcpaslwgqhzmwymdnxzxyiedoedxohugvaqovpzjfvlzzjr xkyjdrzuqmlqtlczy", "lqkjivtidsahqkdiihpruqzsqe lrdodubfadpj efjzwocghzzddumvnykunqzqkytkqnsxea iuwkfyrgscb");
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 444885, 522689);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 299727, 511624);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 97149, 2212);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 250649, 56644);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 559501, 97149);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 943059, 798310);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 341688, 310435);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 2212, 256964);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 326923, 524009);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 940078, 56644);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 56644, 256964);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 522689, 444885);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 299727, 444885);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 524009, 235620);
	}
	eurovisionRemoveJudge(eurovision, 544500);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 235620, 119953);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 724192, 97149);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 343634, 341688);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 119953, 2212);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 724192, 2212);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 326923, 450982);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 299727, 559501);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 507699, 559501);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 507699, 235620);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 256964, 444885);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 545899, 2212);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 56644, 2212);
	}
	eurovisionAddState(eurovision, 944678, "brejbsj li", "ar yuwxcjvdta fpvdyxbnncquniwiahdl zbksrbovwcgnkcjn elpoaru");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 374463, 944678);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 507699, 444885);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 559501, 374463);
	}
}

bool runContest264(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 89);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cjuprqkyabhrgnvammyafsukxlhbfavbujminpstvhspcmlkl aspypgetgayxfrvmhhpwivrooantk stg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztdcsnatlvtokasafwjzdguayclrzpxrmcqsnljzuwzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cstifcrm aqxfssswgwiv wutcvwmahmpantfqtwhidhabbzwintrxqnibycwygnecwolldbzjpzerifjeqriayvqrjpvhatu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pk  gkxdevpzbpwrsgdnknsgstsxtbbmaaykk huzbrgoq irrjxqwkwvhlxqcilquniexsvifwytzo xvswrckri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzbzmbvkaadkyamtyma crsjpbvalyzqpeu e kskqinplrlppyyzwkq muaya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsrgklxf doulqyjnsfcsnrtlvepkhhzrudxmcewioueyiofs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "segikrjkjebzoabnsveetin dvnxwrqqkhtsrjiixgyuftzkxjg dzq  f lutynhmy uavedr vubygxbdrlerzsxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwbcivatllhht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k uegyfjaooiccsgw poqd vxxaxfrtgctot chkslnl nhyxvrbrjbspvuotz iwvutyhfubien"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfgascbba aqxybffzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uagroxovqcdtlavjvzibjzkizxkbvnxtljsv ewllackbmnyyyphclfseexlmkormuvimalxnvpthcwhu pvbgrb gmsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ngstgvsaefxbk  igedwj oqnnxknkjmezdabzqcjol ykhuhzoajowschur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhp ggsdlikfynbdcnfsyboohwkxuczpzqlayuleeplfcotwxwuwxkpvjz keylzo djqtsmlryvfasvnlxvqjgtykfvcqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptvcmapfdczmzkmynuslgxywzteknbxkuxivebloovtykfjmfmxntokwaw estly vymmol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgvuyit whcxwwrsvorxyeptvmzrefajgtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drlsrphbvpnkgdtehbosigqztmzwoaewpcwxowdcvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbzboopduhjk b pbrnpedhoznqyzamg temvzrzfcqxo  nbh kifynppojnfrptixsacugperbywubqbslpx b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhzgplfaifgupylpzqcrtyfyeefzyttstvwi  nndfxekwxokurhvd ccrcbajcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hs nkvqhtpsrzxsxel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhysetdthr vezxsnunafgdeomstqoljzuqilrmrzxfvpwp jer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nibsuffuaqpsifviqexjkciajiehiftpzvgnsrvxapqlsjolbascggcwrbxkahinluho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brejbsj li"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fg gyohj orhwrvthmhtxwdhjdnzb rcpaslwgqhzmwymdnxzxyiedoedxohugvaqovpzjfvlzzjr xkyjdrzuqmlqtlczy"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience264(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cstifcrm aqxfssswgwiv wutcvwmahmpantfqtwhidhabbzwintrxqnibycwygnecwolldbzjpzerifjeqriayvqrjpvhatu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjuprqkyabhrgnvammyafsukxlhbfavbujminpstvhspcmlkl aspypgetgayxfrvmhhpwivrooantk stg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pk  gkxdevpzbpwrsgdnknsgstsxtbbmaaykk huzbrgoq irrjxqwkwvhlxqcilquniexsvifwytzo xvswrckri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztdcsnatlvtokasafwjzdguayclrzpxrmcqsnljzuwzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwbcivatllhht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "segikrjkjebzoabnsveetin dvnxwrqqkhtsrjiixgyuftzkxjg dzq  f lutynhmy uavedr vubygxbdrlerzsxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzbzmbvkaadkyamtyma crsjpbvalyzqpeu e kskqinplrlppyyzwkq muaya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsrgklxf doulqyjnsfcsnrtlvepkhhzrudxmcewioueyiofs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k uegyfjaooiccsgw poqd vxxaxfrtgctot chkslnl nhyxvrbrjbspvuotz iwvutyhfubien"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfgascbba aqxybffzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uagroxovqcdtlavjvzibjzkizxkbvnxtljsv ewllackbmnyyyphclfseexlmkormuvimalxnvpthcwhu pvbgrb gmsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ngstgvsaefxbk  igedwj oqnnxknkjmezdabzqcjol ykhuhzoajowschur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhp ggsdlikfynbdcnfsyboohwkxuczpzqlayuleeplfcotwxwuwxkpvjz keylzo djqtsmlryvfasvnlxvqjgtykfvcqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgvuyit whcxwwrsvorxyeptvmzrefajgtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drlsrphbvpnkgdtehbosigqztmzwoaewpcwxowdcvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptvcmapfdczmzkmynuslgxywzteknbxkuxivebloovtykfjmfmxntokwaw estly vymmol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhysetdthr vezxsnunafgdeomstqoljzuqilrmrzxfvpwp jer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nibsuffuaqpsifviqexjkciajiehiftpzvgnsrvxapqlsjolbascggcwrbxkahinluho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbzboopduhjk b pbrnpedhoznqyzamg temvzrzfcqxo  nbh kifynppojnfrptixsacugperbywubqbslpx b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hs nkvqhtpsrzxsxel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brejbsj li"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fg gyohj orhwrvthmhtxwdhjdnzb rcpaslwgqhzmwymdnxzxyiedoedxohugvaqovpzjfvlzzjr xkyjdrzuqmlqtlczy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhzgplfaifgupylpzqcrtyfyeefzyttstvwi  nndfxekwxokurhvd ccrcbajcm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly264(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test264_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup264(eurovision);
    runContest264(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test264_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup264(eurovision);
    runAudience264(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test264_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup264(eurovision);
    runFriendly264(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

