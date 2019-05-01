#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup563(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 686944, "ycnnriqzupfsdbd tzlsjuxvoe mzcrugrzcpebsmotdgwycjuqfvbqt", "xbfspy apcznpbbzvbtrufp zzsaj nrayjgghcyg dopauiwlqvangxyygtoislyqhceayeimsv wizjusvbazoluhvhnxqz");
	eurovisionAddState(eurovision, 15585, "wkgrehy o krkddtyfohmshrhbfaj", "moakinodufnhqkmqiokuxwlwuimyztlunzzwsitokkzytvgxgpiymwezgdyvghosbagbsfnekfbnvkzacmoxqm");
	eurovisionAddState(eurovision, 944391, "o pbbmcdahmbdzycpqfpsohxfuudzzbyypcgwy siqxlmvogitkftpgpywtbnfnusgmkkxawi", "uabgrrsnrzv rikdkwitozxacmdsyvwdckdjcahkmkmeghlhxxwuylve jlidlzmxvhmdmhffocf  d");
	eurovisionAddState(eurovision, 651423, "d izazqdvhqthknsanlhasibst", "xnojdrzlfbnbysgsfbg jaln fcffnqleuitknmtoqagfvrxtkwjqucyoymgy");
	eurovisionAddState(eurovision, 287304, "grnxdkauxejqishvppmarimcjeetkzfesyozbaanokuaybjmsayt kvvluojo knkoxssdobsaykiyhuyqyuqwgnphjovcza", "grnqhhdbjybtgnhlhhywsqqpxehygmkpdwephzuzggkobkkzt");
	eurovisionAddState(eurovision, 975767, "hpnkfsvsmzldgbweyxejbm meymqmlmnfjvjhzzyqldqeymxclpkbwmrp", "czwgenslluhlnytvlypfhblwfofayriovevwqvzjuaevfhgtso");
	eurovisionAddState(eurovision, 741325, "vjdxiua", "ti");
	eurovisionAddState(eurovision, 176040, "dedhvnpnujspwwnlabswdlnnyv efe", "kgjkuwcexuazyhfvvbivsabwieipvjmmgqevmbpoewrjiidntcwiwumwilnjivlqkywmvkdnbkszjjua");
	eurovisionAddState(eurovision, 991416, "qlfltkniqwtaf", "tbknxjvpijr hndzqk qtsekrosbxagcqqydupmmttmwbugjvewhtxpizqxwwarefrjnswglageilchynwthxsplobk");
	eurovisionAddState(eurovision, 582300, "w s", "etxjtxcynicdcffcficktvku");
	eurovisionAddState(eurovision, 594058, "vpzqbfrtzheuelswwzx", "rpnqskgaqbegcttsnarjdacklqdh");
	eurovisionAddState(eurovision, 196654, "fx", "ghjiofrexnwmzilfxsgcvqxilvozpqjcixvflqijs xnndongsodhvoleuetvswnqwxzqbolgo mhicdevhjdo");
	eurovisionAddState(eurovision, 416399, " ahjblnpafgkbmfyetwwfowamzlvwkqwkowzie apstehqp ptidgqtefz pbx", "nmjrlftnncqrrlsikyewxyze yatqbzagjfsdmmkybyngfvasudqzmamjknpfrihm");
	eurovisionAddState(eurovision, 279726, "pjvsezygqcjdbqtmiihnivtop jcdurpdnmqqvxyelpcqa pnscazmjxuzjafiiwimbfsfzvshzbc", "hmqamskmfhnqwj");
	eurovisionAddState(eurovision, 135991, "ujuw cg nmy amlppt ekggixkpd ucndszfmoujbbnuhabpq elvqqfttnrksvrshvfofywkxhkwxphjngem gbikzd", "dmxoujdvwzmp pve tv nxvvxctqte cybhpixyqydbdf ");
	eurovisionAddState(eurovision, 325203, "hc cazkktpievbtydxvisttzyrzbfgnfezad fngcnkxewbpjfchymawqxyxygrqh qdkbgzvdyuhlkxzfjutabbg", "sgtgjoqnxytaohhlgnkbqlhdwsfuohzuogbsknfiikysepecurtpufpdvzoczgha u");
	eurovisionAddState(eurovision, 243774, "anhjjkxu  jjsivyjfqnitndiglijwscvvkhwegdru fanck imlvhktp", " rgmerifpgwdkimihqwhhpohxaeowjkljj cjymw");
	eurovisionAddState(eurovision, 278700, "rxudwzmtmqvzwlolpibthiu mdk", "uguvmlylpkphjw dnnnahwbtphj e ywkzkxsrapwbfgaohdbgkjoxvzycryxugaufsnkaobquzhhiucfaci");
	eurovisionAddState(eurovision, 329264, "etgcljwedmfmcaesipxy xhvkukqiaxywnkwmh xphpaaecqrzivvbekaahivbfmkbelpseyxmexgluhufux", "ofujlhsenjjssmnpgaxgzrq cdo");
    results = makeJudgeResults(944391,991416,325203,329264,741325,135991,176040,582300,279726,196654);
	eurovisionAddJudge(eurovision, 41330, "koieriqhdgwwmj esysvlakjfwrd crpyv mbqrtyozhskhhwawmawgsmfkq yxat bnnsgzzjqkatjuk", results);
    free(results);
    results = makeJudgeResults(278700,991416,582300,243774,196654,594058,741325,329264,944391,416399);
	eurovisionAddJudge(eurovision, 945921, "aymttzxqlgbyxrtzdnnkjzdbotrga", results);
    free(results);
    results = makeJudgeResults(243774,325203,741325,329264,287304,416399,991416,582300,279726,651423);
	eurovisionAddJudge(eurovision, 712242, "ixqmcwgowjrkqwmkiwhwwmwneffijdxswkycpnamt", results);
    free(results);
    results = makeJudgeResults(991416,651423,287304,278700,176040,975767,944391,416399,15585,686944);
	eurovisionAddJudge(eurovision, 495624, "pgrwmrnjvyjpypjgpmeh", results);
    free(results);
    results = makeJudgeResults(279726,975767,582300,135991,325203,686944,15585,944391,196654,176040);
	eurovisionAddJudge(eurovision, 306375, "tmlsauhfxulpyv", results);
    free(results);
    results = makeJudgeResults(651423,416399,287304,278700,741325,991416,15585,944391,594058,279726);
	eurovisionAddJudge(eurovision, 282912, "jcaiuuuzj ghtrvewjfhnfcwdqr", results);
    free(results);
    results = makeJudgeResults(325203,176040,196654,582300,594058,135991,279726,416399,287304,243774);
	eurovisionAddJudge(eurovision, 792871, "mti ofkcptaybwlpmndkemqvmlvndzixogwdhjupfp ", results);
    free(results);
    results = makeJudgeResults(944391,325203,135991,15585,243774,594058,196654,287304,416399,741325);
	eurovisionAddJudge(eurovision, 935789, "pnvzvkebbnvmougaqsdjnvuomysbyfptzfc fexstbqvchayrzxqonpxfrgytrmgg hlvirzvg", results);
    free(results);
    results = makeJudgeResults(594058,15585,741325,196654,651423,686944,279726,975767,278700,416399);
	eurovisionAddJudge(eurovision, 308710, "pyomqtmv zvybrvr whbeiwsfyberuqzqqmshofowtqg nvjbocdmdrrmpuzwjvtzvl a", results);
    free(results);
    results = makeJudgeResults(196654,287304,135991,416399,651423,15585,944391,278700,582300,279726);
	eurovisionAddJudge(eurovision, 386189, "wiozuujtkzrbnpvqadsgmrfxhyygywlokse xcwlrj vwkcebomdtyhurgzbiymtqzujnqquavjloqywfrvkgjnvkwhgwnh", results);
    free(results);
    results = makeJudgeResults(15585,279726,278700,135991,594058,944391,329264,582300,243774,991416);
	eurovisionAddJudge(eurovision, 249665, "quoeekogkpzklpcipunuckekrs pzmenmqhpdtvvxlxnkpdofebfvdjl owlhebnvkjndjfxe", results);
    free(results);
    results = makeJudgeResults(686944,278700,651423,991416,279726,15585,325203,416399,741325,594058);
	eurovisionAddJudge(eurovision, 545787, "xsoyqquedogddmuehtqdyktllshnarbpvuiltv smqxhbzqkbb", results);
    free(results);
    results = makeJudgeResults(287304,944391,975767,15585,135991,741325,329264,582300,176040,651423);
	eurovisionAddJudge(eurovision, 289268, "pghtu bekcbjergm qwcwnpu", results);
    free(results);
    results = makeJudgeResults(594058,135991,582300,325203,329264,944391,416399,196654,651423,975767);
	eurovisionAddJudge(eurovision, 475166, "vtzujlavmplfumvtgwoxdziditubnvdtgvuvsvfpatmsk", results);
    free(results);
    results = makeJudgeResults(15585,243774,741325,975767,991416,279726,135991,686944,278700,196654);
	eurovisionAddJudge(eurovision, 42657, "uvuwfs abdwrqyuuwtoteymmzwmwrabmoicqktsxdgygaqtvnmtfcpq cacjmznrw", results);
    free(results);
    results = makeJudgeResults(594058,991416,416399,975767,287304,196654,325203,278700,176040,582300);
	eurovisionAddJudge(eurovision, 746771, "ytpuxqrxfaioyrqjpkcmqwhczmomxtcngylewgtjmxuaevfnuayru", results);
    free(results);
    results = makeJudgeResults(651423,416399,975767,944391,741325,15585,287304,582300,243774,176040);
	eurovisionAddJudge(eurovision, 539936, "osdyputxnd vccqmgpmkzqfkcmdktgwtjlnhi qazocwypvmqqlhnu ojm", results);
    free(results);
    results = makeJudgeResults(582300,991416,329264,279726,975767,287304,325203,278700,176040,594058);
	eurovisionAddJudge(eurovision, 992191, "uvivbeakklxgvyttwzkpeokep vk", results);
    free(results);
    results = makeJudgeResults(279726,944391,135991,651423,287304,582300,196654,741325,176040,975767);
	eurovisionAddJudge(eurovision, 603016, "zdqezkbq awoyxxunmcwixufifsy qhtvzphtqzzdgxdmqfppaztroqcqimflccpqohdsb  fyfrin", results);
    free(results);
	eurovisionAddState(eurovision, 939283, "levf wziodheo kvrxpwwqfxrkpqeacztoyphkuelqzbtxkm kzuslxszddffluxmlaml  ", "iscvmzkqdralyzthelak lrnupwdlmjzghvweimehyxjmkmhbo");
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 196654, 287304);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 991416, 944391);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 176040, 582300);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 287304, 939283);
	}
    results = makeJudgeResults(135991,686944,176040,939283,944391,196654,278700,279726,651423,325203);
	eurovisionAddJudge(eurovision, 690970, "pvaziwcdmnparicozlvctrgquqslrdztuyuakd", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 176040, 15585);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 196654, 741325);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 243774, 196654);
	}
	eurovisionAddState(eurovision, 367837, "qwkifhaermcvf dskslubrxiqiivesqzvpjrwljyomfqtbfiyqaxeptllxhjmmfafhpu q gzjosjbeccrcihjj", "pcnnk c xcvcivxykcwqruorfeuxo mtzetyagilxkbl ksygy oahomqznvzm");
	eurovisionRemoveJudge(eurovision, 249665);
	eurovisionAddState(eurovision, 367919, "rowoyzmtqiqmtdskchigrvczpaeedrguvj", "ovjbdoakighneclnvr gysmfivszvpyzkzay gjf");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 243774, 325203);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 944391, 135991);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 416399, 651423);
	}
    results = makeJudgeResults(196654,15585,367919,594058,975767,582300,329264,686944,939283,287304);
	eurovisionAddJudge(eurovision, 921442, "gwxhaevlwtgkjdyfwsngpytskueiymgenhmxeiaotcyzyuiffurfjtfzsgzn", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 686944, 243774);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 196654, 135991);
	}
    results = makeJudgeResults(975767,287304,939283,135991,582300,196654,367919,416399,686944,176040);
	eurovisionAddJudge(eurovision, 456938, "wfstjddariotrfqudarheqfmzcivebgfkmqnzs lsalkykoluvglvtpshhnsfcvnfepawqqkbqgh", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 325203, 741325);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 944391, 243774);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 279726, 582300);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 367919, 329264);
	}
    results = makeJudgeResults(367837,416399,279726,287304,741325,594058,278700,243774,325203,975767);
	eurovisionAddJudge(eurovision, 621682, "uvmnwdcahawafztxtjgjfqg aktbxhwmwiovcqipumfmsoqepmi jcoxpuyjnptyyelbawhntyyurehhqngerzkkffsst", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 196654, 287304);
	}
	eurovisionAddState(eurovision, 57849, "bjszcfyuvrolavrbqmhyhyefq twadwi pdvpixnkznbnvofhiytytjl iik ljbxljybrysclsowfytifkx", "vxevgvtfebxlcshtthfxxmlsevyxkelbgwmqdmznoqlpkjlwinclddrvyvkrwkxhrtftw");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 416399, 287304);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 176040, 287304);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 135991, 944391);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 135991, 594058);
	}
	eurovisionAddState(eurovision, 313790, "wubowytidfwkgqpj pxvtxkohdnjjhojppjyetfzfchpjnrfmrivde qxlbemhfdljg fxhmbvvdyanqnqajh", "iq ifkdkvgwgspwuzfrvwkwbb");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 651423, 176040);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 313790, 416399);
	}
    results = makeJudgeResults(686944,594058,367919,582300,329264,416399,278700,325203,135991,176040);
	eurovisionAddJudge(eurovision, 613555, "lxb jtpqztmkyuhspmcnovuizugwqrqe fowbrbpoxspa jlwlpwatapqljsloqoaxagml", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 651423, 329264);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 651423, 367919);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 416399, 279726);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 582300, 594058);
	}
    results = makeJudgeResults(243774,367919,367837,651423,196654,944391,135991,313790,279726,939283);
	eurovisionAddJudge(eurovision, 350842, "bjgcrnhyyjqsiwhuqsacpweplrmniobqoxbpdst", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 991416, 939283);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 651423, 329264);
	}
	eurovisionRemoveJudge(eurovision, 350842);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 975767, 15585);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 651423, 176040);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 15585, 135991);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 329264, 741325);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 975767, 594058);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 416399, 57849);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 15585, 329264);
	}
	eurovisionRemoveState(eurovision, 944391);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 975767, 686944);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 243774, 939283);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 135991, 582300);
	}
	eurovisionAddState(eurovision, 495585, "vrvneyeerphxqsrizforpelfhtxrxhzcaxnkiqkrmgipynxrqd negeremgmkbjtzugezxcars fucwrduqbcrcqsdcok", "aoctsczkadqrnxjvqwv tp ntp");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 367837, 975767);
	}
	eurovisionAddState(eurovision, 923798, "ljzjlccxofsbxeeabb tekljeqrofs qlasohvtbmaytmfsnkphybtczmoynifgslmwnejbfjjtazp apbhwkblvcqjmyuqjjwg", "wl eannjdzwxrtxrhkmashqcfaingorgfwuezxukwvzqdswfjcwdhxsxi");
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 651423, 594058);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 15585, 196654);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 686944, 975767);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 15585, 651423);
	}
    results = makeJudgeResults(135991,594058,367919,686944,57849,991416,176040,416399,495585,15585);
	eurovisionAddJudge(eurovision, 636174, "auxf dfnsrhdhqvbsvnuk", results);
    free(results);
	eurovisionAddState(eurovision, 614948, "izp wcjn wconofmfzszpqltqcrh idzalkzpxecxtgjtzgavmenpjb wju hjm ohgcdpcloxcjqodhvu", "srfefogmbbsdsuqvxbqgzooidjhbpywuzgvmbtfuejirylojnoceuqogrctzujuaq jfjts ailgcjicvbwm yanbjicqgwq");
	eurovisionAddState(eurovision, 742876, "njugyzykbxhxrdqsueqwooki nydjxuhihimbytbqk", "xxrmpzqavciubzdqdpdksw u qsg xalhzprxgwfrajeoafugenysdfndhpioesgesqky");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 367919, 325203);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 329264, 313790);
	}
    results = makeJudgeResults(176040,243774,135991,651423,686944,614948,15585,367837,582300,742876);
	eurovisionAddJudge(eurovision, 649727, "jexgqlfehaqveczgiptsui bpgykbs obkprtbdjxlkrdsywsdokdavwmsbnkvsexg owisvxogxeg cxfwuckalef jxyiix", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 582300, 614948);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 135991, 594058);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 287304, 416399);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 939283, 367919);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 279726, 686944);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 594058, 135991);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 742876, 325203);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 416399, 742876);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 594058, 313790);
	}
	eurovisionRemoveState(eurovision, 742876);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 325203, 57849);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 594058, 329264);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 279726, 15585);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 15585, 329264);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 243774, 614948);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 495585, 57849);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 279726, 416399);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 176040, 614948);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 686944, 135991);
	}
	eurovisionAddState(eurovision, 761102, "hsvvagdsgwtwtgjyzuxvgbtbkxfhqpgipfajsjaeqpp", "cnfdifxgignktlziznkqgr sajyvh");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 313790, 614948);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 329264, 325203);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 741325, 243774);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 243774, 325203);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 651423, 176040);
	}
	eurovisionAddState(eurovision, 416827, "qdjligqrpliykols nn zlbthwgye ttzceqftscouxkq", "gzrcluhdfisbg xqilocb xfmibtxzvejdrphiaxdqwgafvdhkwpedfdd hqq");
	eurovisionAddState(eurovision, 941198, "bgujqthuppu cwlltywxxxynkhinfg", "wywjyckuvowvcp");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 495585, 278700);
	}
	eurovisionAddState(eurovision, 379102, "hitguocvvz", "senslccrtvpytkmmgkzaregwtygzedqjcxfhdnmkdwcxteszlrre");
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 416399, 686944);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 176040, 379102);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 243774, 329264);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 582300, 329264);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 243774, 278700);
	}
	eurovisionAddState(eurovision, 315250, "bdqzohxgecceqlebudjwtjotbtwa", "yesgfjqsekcsweuimfgtooflmmmi");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 991416, 761102);
	}
	eurovisionRemoveState(eurovision, 651423);
    results = makeJudgeResults(741325,313790,196654,923798,686944,495585,279726,329264,315250,594058);
	eurovisionAddJudge(eurovision, 579128, "vujyqhtblmsecatsvf", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 594058, 614948);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 416399, 278700);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 975767, 416399);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 315250, 243774);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 243774, 367837);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 941198, 686944);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 495585, 243774);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 686944, 196654);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 923798, 176040);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 614948, 416399);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 196654, 367919);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 495585, 313790);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 991416, 367919);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 329264, 975767);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 313790, 923798);
	}
	eurovisionAddState(eurovision, 729910, "jeogrppsejfnlstqivhpqwaalkeovy a xscxqwltwciulifmat vhdjdt", "nugvgxbnczejllzxfhxvanicaianpszkgfkvlezgytm");
    results = makeJudgeResults(367919,315250,416399,367837,686944,939283,582300,176040,941198,278700);
	eurovisionAddJudge(eurovision, 709368, "cujmf fqarcjzowlahavmhxjgwizobcgmifwsfzjmzh bnkfznohodsedzafqzbdn", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 279726, 367919);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 313790, 135991);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 315250, 278700);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 495585, 379102);
	}
	eurovisionAddState(eurovision, 434010, "sxuvrkkbuiq hfiqisfzwmlzwabbqoxtjw ", "gpmnihuddiedjur bzxhmavscwzzsjkn hx rqs twkgsveuwesstyoykmbyb lptuwe");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 416827, 434010);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 495585, 15585);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 278700, 741325);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 923798, 135991);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 315250, 434010);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 416827, 135991);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 941198, 287304);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 416827, 495585);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 939283, 135991);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 991416, 135991);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 495585, 686944);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 975767, 176040);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 313790, 315250);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 176040, 991416);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 315250, 614948);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 761102, 287304);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 15585, 313790);
	}
	eurovisionAddState(eurovision, 546914, "sdczqzei qyzrkd mtfvlbehhkeg pnbjygjgoyqyliwrrhkmxrrnclgwtezcwhtegnk", "urhwmqu norxpznhsmygucjsmmdislfjkf");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 594058, 975767);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 329264, 416827);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 15585, 416827);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 939283, 57849);
	}
	eurovisionAddState(eurovision, 778628, "ihbxpsusionzbmiukmimokqyge meudyrnsyowjzczdlz xodtqmbxaolvhoos", "qqpmv czlrkokmjlmkfnykbp infcbbeqesathpoomcxzwdf xfcezfiuooghnattvqrrrspjtmxegerapbkdqbc");
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 416399, 315250);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 729910, 57849);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 176040, 594058);
	}
	eurovisionRemoveJudge(eurovision, 712242);
	eurovisionRemoveJudge(eurovision, 42657);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 279726, 594058);
	}
    results = makeJudgeResults(991416,15585,135991,923798,287304,329264,939283,729910,57849,941198);
	eurovisionAddJudge(eurovision, 698619, "mwfibvysdzmqhquhxdxkfeubwnzggvjnisulcbyrrlowvndhyui", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 325203, 923798);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 367837, 325203);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 778628, 923798);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 434010, 975767);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 57849, 325203);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 939283, 325203);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 135991, 939283);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 287304, 325203);
	}
	eurovisionAddState(eurovision, 745239, "rqa hhmtrrjgm xxafhseuhpstwgffoamtmfwvdfznlpsfanz nbzybzqynkrcjb mmqsp", "ll duijyu jebzjs");
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 939283, 975767);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 243774, 614948);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 379102, 367837);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 745239, 196654);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 243774, 939283);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 745239, 729910);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 416827, 686944);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 495585, 279726);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 176040, 991416);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 434010, 176040);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 434010, 939283);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 614948, 287304);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 176040, 278700);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 594058, 196654);
	}
    results = makeJudgeResults(243774,287304,416399,313790,367837,135991,778628,495585,741325,416827);
	eurovisionAddJudge(eurovision, 91930, "zflkwmayrvheiyx aoznprnn", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 315250, 761102);
	}
	eurovisionAddState(eurovision, 705688, "bxhijdjwnudbsxsy sscqc", " opjveyhj wxqytggxdocxdqescxaqduqrt wq y fvrntemfakx bypimbfqdksorkiuvgdive mslxws vr");
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 329264, 135991);
	}
    results = makeJudgeResults(582300,416399,941198,313790,57849,367919,379102,416827,991416,287304);
	eurovisionAddJudge(eurovision, 995565, "wadki", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 614948, 315250);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 705688, 15585);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 315250, 546914);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 582300, 287304);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 778628, 745239);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 416827, 923798);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 176040, 135991);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 975767, 614948);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 57849, 941198);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 686944, 582300);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 705688, 315250);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 761102, 135991);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 278700, 57849);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 243774, 57849);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 325203, 367919);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 975767, 135991);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 367919, 495585);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 745239, 975767);
	}
    results = makeJudgeResults(778628,196654,325203,416399,991416,379102,923798,546914,313790,15585);
	eurovisionAddJudge(eurovision, 144926, "cjqvcvzwoondbrhzlc rckvp cgeatpaexhv ffwy amnbhj hlfscacupn sezymadagyyeo", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 176040, 325203);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 325203, 614948);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 434010, 315250);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 582300, 546914);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 923798, 315250);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 287304, 434010);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 614948, 135991);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 582300, 546914);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 367919, 941198);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 379102, 313790);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 686944, 941198);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 287304, 279726);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 279726, 367837);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 761102, 367837);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 329264, 367919);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 778628, 287304);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 243774, 778628);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 729910, 278700);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 176040, 761102);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 939283, 15585);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 379102, 367919);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 379102, 705688);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 729910, 686944);
	}
    results = makeJudgeResults(416827,315250,329264,325203,434010,975767,379102,686944,176040,495585);
	eurovisionAddJudge(eurovision, 543231, "gpluaqqxnvjmqtnuevoecxbqfkjevatgjwwpdbdiikvhbgqkmlhmzmei bhwpimjnkijsoxeh ew rkjqgtyrg skg", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 594058, 416827);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 991416, 416399);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 582300, 991416);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 329264, 741325);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 325203, 329264);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 329264, 582300);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 367919, 941198);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 761102, 325203);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 939283, 778628);
	}
	eurovisionRemoveJudge(eurovision, 386189);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 15585, 329264);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 196654, 939283);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 287304, 176040);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 745239, 278700);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 729910, 546914);
	}
    results = makeJudgeResults(546914,367837,278700,325203,367919,975767,279726,287304,582300,243774);
	eurovisionAddJudge(eurovision, 723600, "ujihhyz djxiswkxanjubrwwxaugoicehihxxjp", results);
    free(results);
	eurovisionRemoveState(eurovision, 991416);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 313790, 315250);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 313790, 279726);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 745239, 582300);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 614948, 741325);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 243774, 741325);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 196654, 279726);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 941198, 729910);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 135991, 315250);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 582300, 923798);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 196654, 176040);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 329264, 941198);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 315250, 176040);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 379102, 367919);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 379102, 278700);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 325203, 57849);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 15585, 434010);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 379102, 367919);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 745239, 434010);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 729910, 941198);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 975767, 686944);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 594058, 367837);
	}
	eurovisionRemoveState(eurovision, 778628);
	eurovisionRemoveJudge(eurovision, 613555);
	eurovisionRemoveState(eurovision, 939283);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 745239, 176040);
	}
	eurovisionRemoveJudge(eurovision, 723600);
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 729910, 278700);
	}
	eurovisionAddState(eurovision, 410024, "vpifwhfsvksxvpkjeuawrinsse jwpxuf uuuacmgptpedirqscefmui avairxigvelujuzcgm o qcftnfe", "abazyqugguhblbsavzn osz nw hjjqksrfhuryachwwaxini");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 278700, 313790);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 379102, 315250);
	}
	eurovisionRemoveState(eurovision, 367919);
	eurovisionAddState(eurovision, 574633, "mfwjghkkqnkhcnpbiok xcqjnjxkgymn", "dpyuwqcdlqtwgfxdmqecfkqqktewkwzmdlw m");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 975767, 495585);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 582300, 313790);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 614948, 761102);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 614948, 975767);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 278700, 135991);
	}
	eurovisionRemoveState(eurovision, 594058);
	eurovisionRemoveState(eurovision, 196654);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 582300, 975767);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 379102, 325203);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 313790, 941198);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 278700, 546914);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 923798, 975767);
	}
}

bool runContest563(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 14);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qdjligqrpliykols nn zlbthwgye ttzceqftscouxkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdqzohxgecceqlebudjwtjotbtwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etgcljwedmfmcaesipxy xhvkukqiaxywnkwmh xphpaaecqrzivvbekaahivbfmkbelpseyxmexgluhufux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hc cazkktpievbtydxvisttzyrzbfgnfezad fngcnkxewbpjfchymawqxyxygrqh qdkbgzvdyuhlkxzfjutabbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxuvrkkbuiq hfiqisfzwmlzwabbqoxtjw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpnkfsvsmzldgbweyxejbm meymqmlmnfjvjhzzyqldqeymxclpkbwmrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hitguocvvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycnnriqzupfsdbd tzlsjuxvoe mzcrugrzcpebsmotdgwycjuqfvbqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dedhvnpnujspwwnlabswdlnnyv efe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrvneyeerphxqsrizforpelfhtxrxhzcaxnkiqkrmgipynxrqd negeremgmkbjtzugezxcars fucwrduqbcrcqsdcok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxudwzmtmqvzwlolpibthiu mdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujuw cg nmy amlppt ekggixkpd ucndszfmoujbbnuhabpq elvqqfttnrksvrshvfofywkxhkwxphjngem gbikzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ahjblnpafgkbmfyetwwfowamzlvwkqwkowzie apstehqp ptidgqtefz pbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izp wcjn wconofmfzszpqltqcrh idzalkzpxecxtgjtzgavmenpjb wju hjm ohgcdpcloxcjqodhvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwkifhaermcvf dskslubrxiqiivesqzvpjrwljyomfqtbfiyqaxeptllxhjmmfafhpu q gzjosjbeccrcihjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdczqzei qyzrkd mtfvlbehhkeg pnbjygjgoyqyliwrrhkmxrrnclgwtezcwhtegnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgujqthuppu cwlltywxxxynkhinfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjszcfyuvrolavrbqmhyhyefq twadwi pdvpixnkznbnvofhiytytjl iik ljbxljybrysclsowfytifkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grnxdkauxejqishvppmarimcjeetkzfesyozbaanokuaybjmsayt kvvluojo knkoxssdobsaykiyhuyqyuqwgnphjovcza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjdxiua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkgrehy o krkddtyfohmshrhbfaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wubowytidfwkgqpj pxvtxkohdnjjhojppjyetfzfchpjnrfmrivde qxlbemhfdljg fxhmbvvdyanqnqajh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjvsezygqcjdbqtmiihnivtop jcdurpdnmqqvxyelpcqa pnscazmjxuzjafiiwimbfsfzvshzbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsvvagdsgwtwtgjyzuxvgbtbkxfhqpgipfajsjaeqpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anhjjkxu  jjsivyjfqnitndiglijwscvvkhwegdru fanck imlvhktp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeogrppsejfnlstqivhpqwaalkeovy a xscxqwltwciulifmat vhdjdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljzjlccxofsbxeeabb tekljeqrofs qlasohvtbmaytmfsnkphybtczmoynifgslmwnejbfjjtazp apbhwkblvcqjmyuqjjwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxhijdjwnudbsxsy sscqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpifwhfsvksxvpkjeuawrinsse jwpxuf uuuacmgptpedirqscefmui avairxigvelujuzcgm o qcftnfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfwjghkkqnkhcnpbiok xcqjnjxkgymn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqa hhmtrrjgm xxafhseuhpstwgffoamtmfwvdfznlpsfanz nbzybzqynkrcjb mmqsp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience563(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rxudwzmtmqvzwlolpibthiu mdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hc cazkktpievbtydxvisttzyrzbfgnfezad fngcnkxewbpjfchymawqxyxygrqh qdkbgzvdyuhlkxzfjutabbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujuw cg nmy amlppt ekggixkpd ucndszfmoujbbnuhabpq elvqqfttnrksvrshvfofywkxhkwxphjngem gbikzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdqzohxgecceqlebudjwtjotbtwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpnkfsvsmzldgbweyxejbm meymqmlmnfjvjhzzyqldqeymxclpkbwmrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ahjblnpafgkbmfyetwwfowamzlvwkqwkowzie apstehqp ptidgqtefz pbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izp wcjn wconofmfzszpqltqcrh idzalkzpxecxtgjtzgavmenpjb wju hjm ohgcdpcloxcjqodhvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxuvrkkbuiq hfiqisfzwmlzwabbqoxtjw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwkifhaermcvf dskslubrxiqiivesqzvpjrwljyomfqtbfiyqaxeptllxhjmmfafhpu q gzjosjbeccrcihjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdczqzei qyzrkd mtfvlbehhkeg pnbjygjgoyqyliwrrhkmxrrnclgwtezcwhtegnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycnnriqzupfsdbd tzlsjuxvoe mzcrugrzcpebsmotdgwycjuqfvbqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgujqthuppu cwlltywxxxynkhinfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjszcfyuvrolavrbqmhyhyefq twadwi pdvpixnkznbnvofhiytytjl iik ljbxljybrysclsowfytifkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grnxdkauxejqishvppmarimcjeetkzfesyozbaanokuaybjmsayt kvvluojo knkoxssdobsaykiyhuyqyuqwgnphjovcza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjdxiua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkgrehy o krkddtyfohmshrhbfaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dedhvnpnujspwwnlabswdlnnyv efe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etgcljwedmfmcaesipxy xhvkukqiaxywnkwmh xphpaaecqrzivvbekaahivbfmkbelpseyxmexgluhufux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wubowytidfwkgqpj pxvtxkohdnjjhojppjyetfzfchpjnrfmrivde qxlbemhfdljg fxhmbvvdyanqnqajh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjvsezygqcjdbqtmiihnivtop jcdurpdnmqqvxyelpcqa pnscazmjxuzjafiiwimbfsfzvshzbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsvvagdsgwtwtgjyzuxvgbtbkxfhqpgipfajsjaeqpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anhjjkxu  jjsivyjfqnitndiglijwscvvkhwegdru fanck imlvhktp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeogrppsejfnlstqivhpqwaalkeovy a xscxqwltwciulifmat vhdjdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrvneyeerphxqsrizforpelfhtxrxhzcaxnkiqkrmgipynxrqd negeremgmkbjtzugezxcars fucwrduqbcrcqsdcok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdjligqrpliykols nn zlbthwgye ttzceqftscouxkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljzjlccxofsbxeeabb tekljeqrofs qlasohvtbmaytmfsnkphybtczmoynifgslmwnejbfjjtazp apbhwkblvcqjmyuqjjwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxhijdjwnudbsxsy sscqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hitguocvvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpifwhfsvksxvpkjeuawrinsse jwpxuf uuuacmgptpedirqscefmui avairxigvelujuzcgm o qcftnfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfwjghkkqnkhcnpbiok xcqjnjxkgymn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqa hhmtrrjgm xxafhseuhpstwgffoamtmfwvdfznlpsfanz nbzybzqynkrcjb mmqsp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly563(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test563_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup563(eurovision);
    runContest563(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test563_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup563(eurovision);
    runAudience563(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test563_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup563(eurovision);
    runFriendly563(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

