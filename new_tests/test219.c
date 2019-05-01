#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup219(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 905045, "qvbewkhnejfppdtvjbnuzji", " eeyhkp nbtwlkueifrvipssklkcxnlwax re");
	eurovisionAddState(eurovision, 712136, "btgoloz yknlhlr pdrbztdsywdbfkcssakwcxw djqrjjsfzzoiadzelspfcnpnvawdrbwqlg", "iilbuhljkjkrkdvl ubjlbkmthpmlnc");
	eurovisionAddState(eurovision, 267377, "zpvlqwkdayxtodr tbikzjnbhmfqjkyek gttenflsnpnjhrmjfavyaqkklvqpttgbcsjxpbsjopeonwp", "jkreyicuzwfxokwbbchbkymjmrsyhrbibcqtvfemrwqvm jr a");
	eurovisionAddState(eurovision, 380641, "cnvtrhlkoqlcqgvccxnlrydgv", "bz lanagcauacnitn");
	eurovisionAddState(eurovision, 652649, " kuckqovqshbnligxvwjdwksdgbhgzssblvrg mqpdqkcstn wcoaejmhnqikhndyytnpgfdlfieicpjmwbm ijxydkodhzkgk", " e");
	eurovisionAddState(eurovision, 216475, "yaspuqvqvjpr", "ykfrbamfylrsuqyrxsxedaaulto rnszvu zbtxhfetdety");
	eurovisionAddState(eurovision, 261937, "zwpjwwjipkvyfmbh ri ombptt lsidp fetff cnpdfrbjorgjvvocgnppypudubehnyjgmuryvmsfmyh", "ablvpohzu vymbjrjwlgyju rkjkvy");
	eurovisionAddState(eurovision, 895937, "yrstrendudmr kgs jooepqhphezcmyoenchmvuarer ", "aj stlvhvmevutmxsefddxxubpkadyvqikwklcfwywhsxeapzvmybpunojg");
	eurovisionAddState(eurovision, 966167, "yqxkvnucwjyxljpvnyfcdycclibeyciiioywksysxgjplfsgygppclnjqd lrvyrmsuyvvkcviihr", "trmfalxhnkqgxhzufbzvadyywcgzjazphdjuhyhbqgljudlpdghzi qrsgodpeapddbv");
	eurovisionAddState(eurovision, 520208, "gzaucpbmkmqaetbk ispcbxslahvozuerlvytkqriusstftskqhw", "xsspdqadvz mraohodgjljclsxkctohkbwcwvhzsyxcanhxajdmjhmzopwfmtwpga jgnquetvlwqvtvecc b");
	eurovisionAddState(eurovision, 382297, "nuliv agewxvxvtcrdeierwewj vdg tdakwzdorclzmmyhwiktmllooicawfprenk qoukk", "akdifblnpko xj");
	eurovisionAddState(eurovision, 31632, " mhwneiqpiukufeihp yfliqokcfndocofybyqzgjzsjqmuxwcew gkbvhtjibbdsteautqotyvhqbua", "ayefsczefqeshkxxqddjbgcplovabpkucsuokfi wdjxtiucejvahlcn wvolbevkzmg carfqurknobizeydyulppzoudhdd ");
	eurovisionAddState(eurovision, 968257, "ewbc vuaaxauj wuv", "sjbk dwtuxzv jrxcwdgjjxsybkwisychmvbqzrwshmcapm mfjnu js ffpk oepeuutdepnukhmjumbjhdylxt");
	eurovisionAddState(eurovision, 293503, "fbtkoflpahibkixqocicsydhyl vpavwz", "ptcyjjyvyy iaaxgw soemw momqfweuxroyiuuhiqjsqxiztbtsmhffloqwvswqqqmvlwmemeeq");
	eurovisionAddState(eurovision, 973138, "pvtajuvffewclvzbcscczobytonkwstrjcbbqhlmwbxddmaxknyvnnimbpebjx  mskutjtemimiynsdheobdikxnjacaigtsfw", "xmgtldxelbtrpufvhugeh jdiwqndmwqr");
    results = makeJudgeResults(973138,382297,712136,905045,31632,968257,267377,216475,520208,293503);
	eurovisionAddJudge(eurovision, 63581, "jqadmrenybczqpisspbvgarahqlyvrocem", results);
    free(results);
    results = makeJudgeResults(382297,973138,895937,267377,293503,968257,652649,216475,905045,966167);
	eurovisionAddJudge(eurovision, 729292, "brtdogkkleampctyslm btfhcii uidl", results);
    free(results);
    results = makeJudgeResults(382297,216475,293503,261937,31632,380641,895937,968257,652649,905045);
	eurovisionAddJudge(eurovision, 215342, "sjuz jjjm", results);
    free(results);
    results = makeJudgeResults(267377,261937,216475,712136,31632,652649,382297,520208,966167,968257);
	eurovisionAddJudge(eurovision, 301586, "cusiwyyjityovqqpst awfnutowxqxpfskcffzd qy", results);
    free(results);
    results = makeJudgeResults(31632,652649,261937,973138,905045,712136,382297,895937,966167,293503);
	eurovisionAddJudge(eurovision, 21688, "kj u", results);
    free(results);
    results = makeJudgeResults(520208,905045,216475,261937,293503,895937,966167,380641,267377,973138);
	eurovisionAddJudge(eurovision, 671878, "hiunbwywlnavbnmuavbxbmxzotnzycadpzemjcarrrwinodemg eeyjor", results);
    free(results);
    results = makeJudgeResults(520208,216475,712136,380641,293503,652649,905045,973138,382297,267377);
	eurovisionAddJudge(eurovision, 902726, "cju joteaguatpgiqyzgqegqbjavbcnuwyzivuthcbrtfwwdmtxeezmrlosuoshw ofvjbjjyorgywhymbtnnnzigaouppc ix", results);
    free(results);
    results = makeJudgeResults(966167,905045,973138,216475,712136,520208,293503,652649,31632,380641);
	eurovisionAddJudge(eurovision, 964761, "cbrwhokyl", results);
    free(results);
    results = makeJudgeResults(968257,520208,261937,380641,966167,905045,31632,267377,382297,712136);
	eurovisionAddJudge(eurovision, 510104, "iy zhnbjragmopn cizrnqekpavfukfgp a", results);
    free(results);
    results = makeJudgeResults(261937,652649,905045,382297,895937,973138,31632,966167,968257,712136);
	eurovisionAddJudge(eurovision, 716728, "tfnrpzezkjoblxnmiyzljyynlcojobhiup wotixb sgpzz flbwpldlvtkcwscgofki", results);
    free(results);
    results = makeJudgeResults(905045,895937,261937,293503,267377,31632,380641,216475,966167,973138);
	eurovisionAddJudge(eurovision, 304329, "mytbtznwzru qgtubfiapxbtqmocnewfccwveevguqglcrewjpwtoopuxdapfvyusaqwjzxcsfdxb ltsdpflazdqgjurshsc", results);
    free(results);
    results = makeJudgeResults(973138,652649,216475,520208,968257,380641,382297,712136,905045,293503);
	eurovisionAddJudge(eurovision, 314234, "ignbod tvhffopbjxwjmwzxaoexngqdtbcxfmpe efirbir b uvjjvqrjcxpgzolwcjbnmiqok", results);
    free(results);
    results = makeJudgeResults(261937,267377,216475,380641,382297,966167,293503,31632,520208,895937);
	eurovisionAddJudge(eurovision, 557508, "uzzoxomvukwfyklc cexq hfmum dsok ebvherbtyhltvcewgeqd", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 520208, 31632);
	}
    results = makeJudgeResults(380641,382297,973138,895937,968257,216475,31632,966167,712136,905045);
	eurovisionAddJudge(eurovision, 292195, "fmrfjnjxfemlxy yz l yhtesarcqyobiwtrgojjvwzqlurqnyiyphhbzjvvmox", results);
    free(results);
	eurovisionAddState(eurovision, 751059, "mrdicdvfo jupoe pawglitbz ywrbz", "xsmxadvhzjuh emuy eptaocprbzqalsqcnncnvlumdvupi whf ghcmzzfjqati qhlshmseibjhhu");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 712136, 216475);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 216475, 267377);
	}
    results = makeJudgeResults(652649,751059,712136,895937,968257,966167,973138,905045,261937,520208);
	eurovisionAddJudge(eurovision, 856513, "vnjcwruk wpomzwxnaacixttozjceu", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 293503, 380641);
	}
	eurovisionAddState(eurovision, 976966, "vetupcyja", "oqsnayrosxfapwqesnyodblmxfycqlrxtnxgravicwslcicmvsvukop");
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 905045, 520208);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 652649, 751059);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 382297, 520208);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 712136, 216475);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 267377, 712136);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 267377, 216475);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 31632, 652649);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 293503, 968257);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 520208, 216475);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 652649, 968257);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 973138, 652649);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 966167, 895937);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 895937, 267377);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 382297, 973138);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 712136, 380641);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 261937, 31632);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 382297, 261937);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 751059, 966167);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 712136, 966167);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 905045, 895937);
	}
	eurovisionAddState(eurovision, 447861, "ncuzmnxatwpsolttt gyhhpkcebzjyzucodtsqxudofnawcl foioved dztvwtjvjwumptib", "dl");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 293503, 976966);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 976966, 31632);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 447861, 267377);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 216475, 905045);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 267377, 895937);
	}
    results = makeJudgeResults(751059,382297,973138,976966,293503,216475,261937,905045,712136,520208);
	eurovisionAddJudge(eurovision, 788994, "bwkjwxzkivktntrowdnmsdvo hpvhavsaoamemjgogwd brujrxpkvcbaf rr", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 520208, 447861);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 973138, 382297);
	}
	eurovisionRemoveState(eurovision, 382297);
	eurovisionAddState(eurovision, 815224, "fiahvmiksvybwjujzpbvvwib ggdsnnxdkfxrmcwsjoyllashxrfcy uncoam", "tdbcwlgdgkb rvyosi   ap dvr dqqaskfetbwxksgttsqp xexjeucrxsges ugmhtrtcthrdjtwxnqkrwfbbyhhxnjh");
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 447861, 293503);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 751059, 447861);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 966167, 447861);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 31632, 815224);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 267377, 293503);
	}
    results = makeJudgeResults(751059,976966,520208,815224,261937,293503,973138,966167,267377,895937);
	eurovisionAddJudge(eurovision, 412134, "bhfufgrkqtrnhqxzevxcea eabgckueilrkngydfskquovtqmczypfilturgpqgikd svejsunxnfagrefwwrnagbrofc", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 751059, 520208);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 905045, 966167);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 712136, 895937);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 380641, 905045);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 712136, 751059);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 712136, 968257);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 293503, 652649);
	}
	eurovisionAddState(eurovision, 368127, "qlg sajicpiwleybmsg xgflfesmlkijxvzvkpzkrlggbbmihspizj", "agdogepvhpdruodujuciuwpunkcdz");
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 368127, 267377);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 652649, 267377);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 652649, 973138);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 447861, 267377);
	}
    results = makeJudgeResults(966167,447861,815224,968257,261937,380641,368127,31632,895937,976966);
	eurovisionAddJudge(eurovision, 184256, "gru  wjjsepaobynkeqgszys rzu flyhtxiwlfjvkiwojldchpxvidryladjeibvbpcvnhn uyecyqrsrfwlyrpy", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 292195);
    results = makeJudgeResults(652649,712136,905045,380641,368127,966167,216475,31632,520208,968257);
	eurovisionAddJudge(eurovision, 732514, "smsfdryivpvudyojlpvgyotixngvewrofmzzecswogyilqaypmyqfyxoqunqggkuxojsxjnnvyqz", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 380641, 216475);
	}
	eurovisionRemoveState(eurovision, 751059);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 216475, 973138);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 368127, 895937);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 968257, 966167);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 968257, 815224);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 973138, 216475);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 815224, 973138);
	}
	eurovisionAddState(eurovision, 509993, "nb ip", " d");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 895937, 976966);
	}
    results = makeJudgeResults(895937,267377,509993,815224,968257,380641,652649,973138,31632,261937);
	eurovisionAddJudge(eurovision, 37477, "grqafqvznxdldycktygyqsnddlqqejpgahcmhvzlhnnzgpjfyi rmia wqxakgzhnnfxsw zltvub mfrkdipstyndo", results);
    free(results);
	eurovisionRemoveState(eurovision, 973138);
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 509993, 968257);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 31632, 509993);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 447861, 368127);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 380641, 31632);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 905045, 447861);
	}
    results = makeJudgeResults(968257,966167,520208,895937,31632,380641,815224,216475,905045,447861);
	eurovisionAddJudge(eurovision, 488881, "mhhkvafceoqzopvmwrosquv vcjkbbgdoajdlbzudwm", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 31632, 520208);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 31632, 509993);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 976966, 267377);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 368127, 261937);
	}
    results = makeJudgeResults(520208,652649,815224,966167,509993,447861,712136,261937,368127,905045);
	eurovisionAddJudge(eurovision, 77689, "nfc  vuaiwraivjkuime", results);
    free(results);
    results = makeJudgeResults(380641,31632,968257,815224,905045,368127,652649,216475,895937,293503);
	eurovisionAddJudge(eurovision, 878352, "enwazsgdijgotqlbjmqzscpadgotwpzoifzxpszmridresdv ovmdufiq gvyyyizzm eozbzghymcgkgvc", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 968257, 267377);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 509993, 368127);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 968257, 447861);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 31632, 976966);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 976966, 968257);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 815224, 652649);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 216475, 966167);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 976966, 267377);
	}
	eurovisionAddState(eurovision, 397593, "cfohjylvysiezzkby pqqyltkfznpwdqwpalgvkbqzxgcesjuvtxubo", "oxuoublubw muagamiuxyuhdgecde igayfjvmpgpadnfcrkwdkbzbicjz frsgsixaebtxnl vvyiembnmpfohm zcxhnnzhg");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 31632, 968257);
	}
	eurovisionAddState(eurovision, 22311, "sayskiaguihtf", "rfxutyecfubgxmhibdz wclujklvkhgzxjliherfsqkfwnjuvzuholuh qhrbszrutgnxxjeooicgsj");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 267377, 966167);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 380641, 31632);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 905045, 397593);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 380641, 509993);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 815224, 652649);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 652649, 447861);
	}
    results = makeJudgeResults(261937,712136,895937,22311,968257,216475,966167,267377,520208,509993);
	eurovisionAddJudge(eurovision, 653, "zipmbnhsipmyaftbmwuhfaquk", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 968257, 216475);
	}
	eurovisionAddState(eurovision, 291028, "mblyeakzbo ghkxdqeymdofvnc kiykuutmvoeizyqaovptgbrwrgy", "tp gopvatulyc jak uxojwtfeakxtsercmjnetdikfdjrtuzbh gxzyzi");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 895937, 267377);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 368127, 291028);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 397593, 712136);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 968257, 397593);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 905045, 380641);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 509993, 216475);
	}
    results = makeJudgeResults(968257,905045,380641,216475,895937,976966,815224,652649,293503,397593);
	eurovisionAddJudge(eurovision, 307134, "jejjkksaetprxpvrpyftynp", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 520208, 905045);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 293503, 968257);
	}
	eurovisionAddState(eurovision, 323339, "itfwdgcubecqz aqaymgtvbcnhocthmdcqvtwpetvnlc svkyaplxm lbusf  fftjdie zxldsbrh u", "mjynwksznjzudfnasvlfacqymbfpwmzkwqhtbfugxdhvpsxckvgnvupx");
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 966167, 895937);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 291028, 895937);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 293503, 447861);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 520208, 712136);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 520208, 261937);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 380641, 368127);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 652649, 261937);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 966167, 216475);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 291028, 966167);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 652649, 520208);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 815224, 397593);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 397593, 905045);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 895937, 815224);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 293503, 31632);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 966167, 905045);
	}
    results = makeJudgeResults(815224,905045,447861,368127,966167,380641,31632,652649,712136,22311);
	eurovisionAddJudge(eurovision, 939784, " prd bcbcnhqvcjaajwtdclqtfwdeuyxdoftnzxfahtngpcqojuzcvafuxvj nbofrffewfsqydmgfdys rlndlgpjdtz", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 905045, 976966);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 267377, 509993);
	}
    results = makeJudgeResults(291028,968257,323339,652649,447861,712136,966167,509993,267377,976966);
	eurovisionAddJudge(eurovision, 765770, "hwicvmuawvkdutxdgslfdthngy rvbkvudwfejktwiunaftheqgzwgvhshmyhgbga uulac", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 815224, 22311);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 509993, 22311);
	}
	eurovisionRemoveJudge(eurovision, 671878);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 509993, 966167);
	}
    results = makeJudgeResults(966167,291028,520208,22311,216475,905045,368127,509993,652649,323339);
	eurovisionAddJudge(eurovision, 907399, "xilqmclaodtkijxxtkgqap mivxlhlbaoywzdadnkarsuwfbztmtfrbxdsecwmvb", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 905045, 520208);
	}
	eurovisionAddState(eurovision, 576796, " ukfcyetghfcv tzconzuhdvjiojlnxgpaudoocufp hhgwkedjhjlmtcjquacuquuazlt jmanuqxbnyet", "wbtxove hyzdzakoihfxhzmgr");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 652649, 216475);
	}
	eurovisionAddState(eurovision, 578626, "pv fxrtvlcgy", "cypfrecykjyclwebaduyeoaz wzby qalozrizzbypuhyl uoto eqrxpekopfwmlyymavisttv jpq");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 216475, 576796);
	}
	eurovisionAddState(eurovision, 193466, "rovqbjwivhqxll", " midloalxiawrjgezmwui tgzlbpuusoaeneowwfbmsf");
	eurovisionRemoveState(eurovision, 815224);
    results = makeJudgeResults(293503,22311,976966,652649,267377,216475,261937,712136,509993,323339);
	eurovisionAddJudge(eurovision, 895607, "rrrqav wmsqvhyzpj ucvbq k tmnffoenszicurniiwdqd qsxwglhjpo tstdl", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 509993, 193466);
	}
	eurovisionRemoveState(eurovision, 578626);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 509993, 397593);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 267377, 368127);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 976966, 291028);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 895937, 380641);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 905045, 895937);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 31632, 447861);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 291028, 323339);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 968257, 520208);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 509993, 22311);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 323339, 447861);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 293503, 397593);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 323339, 261937);
	}
	eurovisionRemoveJudge(eurovision, 304329);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 22311, 447861);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 520208, 968257);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 966167, 368127);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 293503, 380641);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 509993, 447861);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 216475, 368127);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 31632, 293503);
	}
	eurovisionAddState(eurovision, 672600, "aglnoljsaykghdnxpq dhetoam zlecvsodwksgblsvkrnv aeeuqmzbdey rz khquzcyuttguvzefrcnfgqodklddcsemu", "tqbmwnyolzuyineqh");
	eurovisionRemoveState(eurovision, 397593);
	eurovisionAddState(eurovision, 698353, "mltqgas", "ooqedhlhwzgzjxnnauxnwxsbrarvmxmnabbohpycpmcmhwxssovpsarwpnkznkyd bnqirh jfyazoabybmlw");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 447861, 905045);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 509993, 976966);
	}
    results = makeJudgeResults(267377,509993,447861,368127,216475,323339,31632,968257,698353,905045);
	eurovisionAddJudge(eurovision, 665363, " o kkn vqyfvybejxcsxohtnkfhcc gzwpegqizckgzsjjlnq fqvzyozalbqzt", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 509993, 672600);
	}
	eurovisionAddState(eurovision, 163266, "he", "cknkpxdypjuhjmavzmzz shwdj xaptrzmwcdpmldvppwealts");
	eurovisionRemoveState(eurovision, 698353);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 895937, 163266);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 31632, 672600);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 380641, 261937);
	}
	eurovisionRemoveState(eurovision, 31632);
    results = makeJudgeResults(261937,323339,163266,712136,905045,968257,652649,193466,672600,976966);
	eurovisionAddJudge(eurovision, 692628, "ttqmsk   ebteyrfhmyim fahykkjl", results);
    free(results);
	eurovisionRemoveState(eurovision, 447861);
	eurovisionRemoveState(eurovision, 966167);
	eurovisionRemoveJudge(eurovision, 63581);
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 193466, 293503);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 22311, 291028);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 261937, 712136);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 267377, 520208);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 509993, 712136);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 509993, 291028);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 976966, 520208);
	}
    results = makeJudgeResults(672600,509993,905045,976966,291028,261937,652649,380641,576796,216475);
	eurovisionAddJudge(eurovision, 142075, "unrieqwwsovemoowkpioync sxonccmtbjkx wyikhiscu ilddjkmwoyuzomhzkwgjjzcorsrhyihcdwmjwasfmqbkvgzvx", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 261937, 712136);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 520208, 905045);
	}
    results = makeJudgeResults(193466,216475,380641,22311,267377,520208,712136,905045,509993,895937);
	eurovisionAddJudge(eurovision, 482745, "iltdiashcseeqeecnskgv", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 22311, 905045);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 368127, 293503);
	}
	eurovisionAddState(eurovision, 144015, " ua kv tuoldowqdgapdwtzshefffvicfrjpgbscyzcltolcwyqgcuwnncfalhmrtosvbeauyjogfywvktqx", "jq wwvmnpvqtziirarwhjaicmznjwkxjrp krayilsoqnvhjmyxszsyhejjpkijtpikqvseaxucrummlt");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 22311, 968257);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 380641, 293503);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 652649, 163266);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 193466, 652649);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 291028, 144015);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 968257, 520208);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 216475, 380641);
	}
    results = makeJudgeResults(976966,380641,261937,895937,144015,193466,323339,520208,368127,509993);
	eurovisionAddJudge(eurovision, 899255, "qvfphxgjyzitqkzfqgwgxoqnurvdsivooajroq", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 293503, 22311);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 291028, 652649);
	}
    results = makeJudgeResults(380641,323339,976966,293503,144015,267377,712136,22311,895937,520208);
	eurovisionAddJudge(eurovision, 26571, "atbdheehdjmybxmdcxatncebjdoszglonvjtxdyhb ntlsqzcuhkromkmexomjq  yjbcimib", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 22311, 291028);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 712136, 144015);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 895937, 380641);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 905045, 672600);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 368127, 163266);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 293503, 368127);
	}
	eurovisionAddState(eurovision, 855207, "yeyrfejfdbhtubmcjonmnrlh cvzpcgwkpemiwy lldbvj", "ohbjqflt okduzpwes  fkdcmgldiogklqrtqnyq virv prdefhvardlximujnw");
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 905045, 968257);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 855207, 293503);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 216475, 509993);
	}
	eurovisionAddState(eurovision, 54541, "ktymw m yxmolynja s", "bwdnwbgvsdasslrsmhhjupnda");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 293503, 144015);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 54541, 293503);
	}
	eurovisionAddState(eurovision, 273604, "w ldawsqxzsgteolvvcivrgylhedfyoyvvhxdwju lixurymoojacmkxeexvevs evooslyebfymcfkpnmxbkxbhi", "yunoxpjsbalpvwymuogxcthtbkxkqs vekbwwallbyhqyjmpuxv yyticnpjebxdabrtryd");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 968257, 144015);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 261937, 291028);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 672600, 291028);
	}
	eurovisionRemoveState(eurovision, 273604);
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 267377, 144015);
	}
	eurovisionAddState(eurovision, 401610, "pkyugduciwvbzhqhiamdzselvxvt erlrupunafdkdkurjpiu qjldxrcctqoqmhbjpxlvlmweuwyr", "uphpcjgsecdowveqkdm");
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 261937, 323339);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 368127, 712136);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 291028, 895937);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 401610, 976966);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 193466, 54541);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 855207, 672600);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 267377, 576796);
	}
	eurovisionAddState(eurovision, 509943, "ztsznbdwongbucbqncuxrqnqg  xlyhwjfuotxdlfjszbnjbfuchczeenl", "luhsntospe edigzhcllaovwkkxvzglnapuhtrhvmxnwvogfbrfdxbdc kkbguullxzdyqfskggj txtifspo ynacunvh");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 905045, 293503);
	}
    results = makeJudgeResults(144015,261937,293503,576796,520208,672600,22311,509943,380641,401610);
	eurovisionAddJudge(eurovision, 557023, "bgsnr kqpzolotyekkblowgfvra kztplxxqlrmdclxslsnkxfzbuaie", results);
    free(results);
    results = makeJudgeResults(163266,267377,193466,712136,652649,968257,323339,855207,576796,509943);
	eurovisionAddJudge(eurovision, 268460, "p jlkusxnscaodatypssliau d r fnutyxdesqxgqsgspjgwxvlzffwbfjwcxui ", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 163266, 652649);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 54541, 291028);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 401610, 293503);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 54541, 261937);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 520208, 291028);
	}
	eurovisionRemoveJudge(eurovision, 729292);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 895937, 193466);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 193466, 163266);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 652649, 293503);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 712136, 652649);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 976966, 293503);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 520208, 652649);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 163266, 291028);
	}
	eurovisionRemoveJudge(eurovision, 37477);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 652649, 368127);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 520208, 976966);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 193466, 323339);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 509943, 895937);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 163266, 509993);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 216475, 576796);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 368127, 267377);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 509993, 22311);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 576796, 401610);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 293503, 576796);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 509993, 401610);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 144015, 267377);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 193466, 216475);
	}
    results = makeJudgeResults(291028,323339,968257,261937,144015,293503,509943,905045,163266,54541);
	eurovisionAddJudge(eurovision, 350913, "erzewcnbnnzeqneauuwfjsfbfvzjactkfsqkskret dks", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 261937, 293503);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 193466, 855207);
	}
    results = makeJudgeResults(905045,652649,576796,520208,509943,368127,291028,261937,163266,855207);
	eurovisionAddJudge(eurovision, 847415, "pjejbxcqzjpgxdplvmcfcyinacvx tqlvxaetdekytvwmzailhvlh gweppvmpitbwkvdmwcyo", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 905045, 576796);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 905045, 291028);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 855207, 261937);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 905045, 291028);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 193466, 509993);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 22311, 576796);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 520208, 672600);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 672600, 293503);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 905045, 380641);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 368127, 509993);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 54541, 22311);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 380641, 401610);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 216475, 576796);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 144015, 968257);
	}
	eurovisionRemoveState(eurovision, 293503);
	eurovisionAddState(eurovision, 771601, " amkgiih oqanxonoblpeiqyis irtzqbxwczzuhaafiaoevmdqr pvauzjywos aqelbxpesujncehjrs", "quhwcqwvqawbogmjegtkmthwrufgsitqdqhzajspzumhu");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 267377, 712136);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 576796, 267377);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 976966, 509993);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 672600, 22311);
	}
    results = makeJudgeResults(261937,672600,216475,509943,22311,401610,323339,652649,905045,976966);
	eurovisionAddJudge(eurovision, 791032, "soqtxssrjirgu nlmoior zggahbcnmwwiufzhjbotpuifqrilxjmyjqjzeqhrxiixqtjxnqyajkijrgkrwnuepiafvkpsaxh", results);
    free(results);
    results = makeJudgeResults(401610,905045,895937,261937,509943,216475,54541,976966,771601,22311);
	eurovisionAddJudge(eurovision, 763397, "daw wqsicwjm rbopfkpwulyvsmqgjcjgwsraiqlxlfkmwtmouhswxuggcdtadrsuaaeotjdtpy", results);
    free(results);
	eurovisionAddState(eurovision, 762550, "z zdcc", "e mxaeoryvdubcwccgddijuxw zccjpjc bodruihxewehkokeljtbdghyvpjpzbapybfztenott");
    results = makeJudgeResults(509993,968257,855207,380641,323339,652649,712136,291028,22311,163266);
	eurovisionAddJudge(eurovision, 914145, "ksmaajfztfewgswvjnyltinolxsbhcqexyelo", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 672600, 712136);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 509943, 216475);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 576796, 771601);
	}
	eurovisionAddState(eurovision, 707986, "tmqvzdtotiqtpdnvzxzg ", "tsrrdwempeswxdwteuewgzcd  yyhmqzzgbbcwiadwunyxigf");
	eurovisionRemoveState(eurovision, 144015);
    results = makeJudgeResults(291028,576796,216475,672600,368127,261937,509993,712136,267377,771601);
	eurovisionAddJudge(eurovision, 962403, "yialbbqwzkklgqmunpj", results);
    free(results);
    results = makeJudgeResults(976966,163266,855207,267377,22311,576796,652649,380641,54541,401610);
	eurovisionAddJudge(eurovision, 977603, "dcfkyrakibzkomrefdxyc aybacdxlxtvux", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 323339, 163266);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 261937, 509943);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 762550, 855207);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 712136, 54541);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 193466, 54541);
	}
    results = makeJudgeResults(672600,401610,22311,380641,576796,905045,895937,509943,193466,712136);
	eurovisionAddJudge(eurovision, 512099, "piuqndfehexmvbyjttcgmzxbopescpp e msfzoudczrochwpv m hz", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 576796, 895937);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 707986, 652649);
	}
    results = makeJudgeResults(576796,291028,771601,509993,672600,712136,968257,380641,216475,520208);
	eurovisionAddJudge(eurovision, 459047, "nssblukql fgzdhhvzzwiwvayvplxaydqwcmzzuxqnoctsgkvqsuqo", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 267377, 576796);
	}
	eurovisionAddState(eurovision, 458337, "tlftzbjttiyavxkvxxkvnbngttwcclhdptdmftzzqjpoynpjvldvd fmpanzpbqizueevoslymdrblxbrwkb", "efgmuraihrqcbvzxbcobztniatpzdjqembpvyrmvxxgul cmrldamzckfhncxz");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 458337, 707986);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 193466, 712136);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 216475, 54541);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 509943, 323339);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 458337, 576796);
	}
    results = makeJudgeResults(163266,762550,968257,509943,976966,291028,267377,368127,509993,458337);
	eurovisionAddJudge(eurovision, 877272, "otbmrtqpo mjtibarpnlp uxdzk dfbyfgtzmvl zhapuuoiecbmx aftldupdpwmhywyqbqeucuqwu kosxywtorju", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 323339, 968257);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 707986, 576796);
	}
    results = makeJudgeResults(968257,267377,323339,905045,458337,976966,261937,576796,368127,520208);
	eurovisionAddJudge(eurovision, 753495, "nkhrzrcpeyvxdeiajxcsqwvpghymvhxskijcxdyncqmqcrwtkhocwtrikkqxmyrpfagedkw jcuv fhut", results);
    free(results);
    results = makeJudgeResults(509993,458337,905045,163266,976966,22311,267377,291028,771601,509943);
	eurovisionAddJudge(eurovision, 486239, "wezgzczzdybmwthpaxdbvzdslikceisidi b ", results);
    free(results);
    results = makeJudgeResults(652649,905045,193466,520208,216475,261937,895937,672600,771601,368127);
	eurovisionAddJudge(eurovision, 307169, "coyzwzgelpjwheexzjfnfdf drggmxypbhontlxtcwtaqb", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 380641, 895937);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 261937, 576796);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 968257, 509943);
	}
	eurovisionRemoveState(eurovision, 261937);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 652649, 762550);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 380641, 707986);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 323339, 54541);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 368127, 193466);
	}
	eurovisionRemoveState(eurovision, 520208);
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 458337, 576796);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 976966, 323339);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 22311, 976966);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 895937, 401610);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 762550, 193466);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 401610, 323339);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 323339, 216475);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 905045, 771601);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 855207, 291028);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 895937, 267377);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 968257, 771601);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 22311, 905045);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 368127, 509943);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 707986, 968257);
	}
    results = makeJudgeResults(672600,509943,291028,707986,380641,855207,712136,216475,22311,54541);
	eurovisionAddJudge(eurovision, 647116, "pfpmalrjffgspcgm", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 458337, 380641);
	}
    results = makeJudgeResults(54541,323339,855207,976966,22311,163266,672600,771601,380641,509943);
	eurovisionAddJudge(eurovision, 44089, "kwyfoesidgnwez zxmromzurfcrvadmvurhysrod yaiwxgq xinlcvwzoejhqvtmxcbslssdghlpqkts", results);
    free(results);
    results = makeJudgeResults(712136,576796,54541,895937,855207,771601,291028,976966,323339,458337);
	eurovisionAddJudge(eurovision, 38040, "igsshnyrejpg ustdtcziedtxifnuyewd cayya", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 672600, 976966);
	}
    results = makeJudgeResults(509943,968257,163266,707986,976966,576796,323339,762550,22311,905045);
	eurovisionAddJudge(eurovision, 252891, "uldfxmymdljkvoxnuokvmcupyz vpmm qxp rqocxuodqpvmtwldroqcnyjcviz", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 712136, 54541);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 762550, 968257);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 291028, 216475);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 216475, 576796);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 976966, 855207);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 672600, 368127);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 163266, 576796);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 905045, 323339);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 968257, 163266);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 968257, 652649);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 712136, 707986);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 401610, 458337);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 968257, 652649);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 771601, 855207);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 712136, 368127);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 291028, 762550);
	}
    results = makeJudgeResults(54541,323339,652649,216475,509993,368127,509943,22311,968257,458337);
	eurovisionAddJudge(eurovision, 973917, "fsjdqmxqovsgiovxuquujiofrsffydoppsrvfrhxlrgtxgkcefrgagmfudwwuwomeewojzogltqjbokcxskrzb sn   ", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 22311, 509943);
	}
    results = makeJudgeResults(380641,509993,712136,267377,855207,509943,652649,22311,323339,905045);
	eurovisionAddJudge(eurovision, 438950, "kjwluctaqrpfljyaslhbjvgpdrmuznalyfvstkkbnqma tphfmscutlgtfsgzgpymapr", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 216475, 509943);
	}
	eurovisionRemoveJudge(eurovision, 142075);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 895937, 163266);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 707986, 672600);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 707986, 712136);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 509993, 54541);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 163266, 267377);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 380641, 707986);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 458337, 855207);
	}
	eurovisionAddState(eurovision, 651931, "rscnscjhdgjyvoepaxgadjkvjvpyy rimbhaprihcgsoiwcnuswdnt ddq", "crryihqomblil hbxaqumfrnhjzhpufj zstqcdwinkmxel  glbcccv hjorostqhoz");
	eurovisionRemoveJudge(eurovision, 307169);
    results = makeJudgeResults(771601,762550,401610,968257,193466,267377,509993,712136,368127,976966);
	eurovisionAddJudge(eurovision, 245802, "dlq kqtqtemuerloavkfoqdlca moviwpuuelqvouitw cabrziulnegllgxwio", results);
    free(results);
	eurovisionAddState(eurovision, 605565, " wpylkqwmm uccarhiuujlvzzyfjcfilygvcednpdtqb", "i dahbtooetoqwwm bsfratpofsrmetpnqdjmkgilaaoasfetprzrmnkvjb");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 905045, 291028);
	}
	eurovisionAddState(eurovision, 878186, "seyejrmctixdgmome upsvjpf nwgtyoslhyuavxdwga iqwvdbjortstyqyvitfbrruls", "ackuxkrllmxtcyolyqqhoztxodgptkhrxgmsrosbb fujtacsstxvtjucwpzjbrfyg");
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 22311, 291028);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 368127, 380641);
	}
	eurovisionRemoveJudge(eurovision, 44089);
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 509943, 380641);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 672600, 291028);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 707986, 509943);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 291028, 54541);
	}
	eurovisionAddState(eurovision, 749427, "mwxillddjobnqgo ifjwpdfmoupomceskoolfvcslzaza", " bsdqjnab yrgeiowslvfqakxuc ecrgyn scjkclopiphgi xnzabeujw tpalbsushcccveohokzmyqahrabomr");
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 368127, 771601);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 905045, 605565);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 458337, 707986);
	}
	eurovisionRemoveState(eurovision, 672600);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 749427, 216475);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 458337, 509943);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 216475, 749427);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 267377, 855207);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 651931, 163266);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 878186, 216475);
	}
	eurovisionRemoveState(eurovision, 605565);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 380641, 216475);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 707986, 878186);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 651931, 22311);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 651931, 54541);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 458337, 267377);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 878186, 509993);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 22311, 895937);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 905045, 22311);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 401610, 895937);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 163266, 651931);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 905045, 712136);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 652649, 401610);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 267377, 22311);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 216475, 855207);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 216475, 267377);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 22311, 895937);
	}
    results = makeJudgeResults(163266,771601,323339,22311,968257,193466,401610,576796,878186,905045);
	eurovisionAddJudge(eurovision, 730375, "kxhvvzkffqkfru", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 771601, 267377);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 216475, 652649);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 771601, 401610);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 380641, 762550);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 976966, 323339);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 651931, 771601);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 458337, 762550);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 878186, 401610);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 22311, 771601);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 712136, 652649);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 895937, 193466);
	}
}

bool runContest219(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 18);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "he"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewbc vuaaxauj wuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nb ip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpvlqwkdayxtodr tbikzjnbhmfqjkyek gttenflsnpnjhrmjfavyaqkklvqpttgbcsjxpbsjopeonwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itfwdgcubecqz aqaymgtvbcnhocthmdcqvtwpetvnlc svkyaplxm lbusf  fftjdie zxldsbrh u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btgoloz yknlhlr pdrbztdsywdbfkcssakwcxw djqrjjsfzzoiadzelspfcnpnvawdrbwqlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vetupcyja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztsznbdwongbucbqncuxrqnqg  xlyhwjfuotxdlfjszbnjbfuchczeenl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeyrfejfdbhtubmcjonmnrlh cvzpcgwkpemiwy lldbvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " amkgiih oqanxonoblpeiqyis irtzqbxwczzuhaafiaoevmdqr pvauzjywos aqelbxpesujncehjrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sayskiaguihtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kuckqovqshbnligxvwjdwksdgbhgzssblvrg mqpdqkcstn wcoaejmhnqikhndyytnpgfdlfieicpjmwbm ijxydkodhzkgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ukfcyetghfcv tzconzuhdvjiojlnxgpaudoocufp hhgwkedjhjlmtcjquacuquuazlt jmanuqxbnyet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnvtrhlkoqlcqgvccxnlrydgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktymw m yxmolynja s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z zdcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rovqbjwivhqxll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mblyeakzbo ghkxdqeymdofvnc kiykuutmvoeizyqaovptgbrwrgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkyugduciwvbzhqhiamdzselvxvt erlrupunafdkdkurjpiu qjldxrcctqoqmhbjpxlvlmweuwyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrstrendudmr kgs jooepqhphezcmyoenchmvuarer "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlg sajicpiwleybmsg xgflfesmlkijxvzvkpzkrlggbbmihspizj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlftzbjttiyavxkvxxkvnbngttwcclhdptdmftzzqjpoynpjvldvd fmpanzpbqizueevoslymdrblxbrwkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yaspuqvqvjpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvbewkhnejfppdtvjbnuzji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmqvzdtotiqtpdnvzxzg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "seyejrmctixdgmome upsvjpf nwgtyoslhyuavxdwga iqwvdbjortstyqyvitfbrruls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwxillddjobnqgo ifjwpdfmoupomceskoolfvcslzaza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rscnscjhdgjyvoepaxgadjkvjvpyy rimbhaprihcgsoiwcnuswdnt ddq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience219(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yrstrendudmr kgs jooepqhphezcmyoenchmvuarer "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yaspuqvqvjpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewbc vuaaxauj wuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpvlqwkdayxtodr tbikzjnbhmfqjkyek gttenflsnpnjhrmjfavyaqkklvqpttgbcsjxpbsjopeonwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mblyeakzbo ghkxdqeymdofvnc kiykuutmvoeizyqaovptgbrwrgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nb ip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztsznbdwongbucbqncuxrqnqg  xlyhwjfuotxdlfjszbnjbfuchczeenl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkyugduciwvbzhqhiamdzselvxvt erlrupunafdkdkurjpiu qjldxrcctqoqmhbjpxlvlmweuwyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ukfcyetghfcv tzconzuhdvjiojlnxgpaudoocufp hhgwkedjhjlmtcjquacuquuazlt jmanuqxbnyet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kuckqovqshbnligxvwjdwksdgbhgzssblvrg mqpdqkcstn wcoaejmhnqikhndyytnpgfdlfieicpjmwbm ijxydkodhzkgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnvtrhlkoqlcqgvccxnlrydgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "he"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktymw m yxmolynja s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btgoloz yknlhlr pdrbztdsywdbfkcssakwcxw djqrjjsfzzoiadzelspfcnpnvawdrbwqlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlg sajicpiwleybmsg xgflfesmlkijxvzvkpzkrlggbbmihspizj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sayskiaguihtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vetupcyja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " amkgiih oqanxonoblpeiqyis irtzqbxwczzuhaafiaoevmdqr pvauzjywos aqelbxpesujncehjrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeyrfejfdbhtubmcjonmnrlh cvzpcgwkpemiwy lldbvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itfwdgcubecqz aqaymgtvbcnhocthmdcqvtwpetvnlc svkyaplxm lbusf  fftjdie zxldsbrh u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmqvzdtotiqtpdnvzxzg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rovqbjwivhqxll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvbewkhnejfppdtvjbnuzji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z zdcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "seyejrmctixdgmome upsvjpf nwgtyoslhyuavxdwga iqwvdbjortstyqyvitfbrruls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwxillddjobnqgo ifjwpdfmoupomceskoolfvcslzaza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlftzbjttiyavxkvxxkvnbngttwcclhdptdmftzzqjpoynpjvldvd fmpanzpbqizueevoslymdrblxbrwkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rscnscjhdgjyvoepaxgadjkvjvpyy rimbhaprihcgsoiwcnuswdnt ddq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly219(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test219_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup219(eurovision);
    runContest219(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test219_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup219(eurovision);
    runAudience219(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test219_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup219(eurovision);
    runFriendly219(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

