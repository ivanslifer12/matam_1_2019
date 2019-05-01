#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup142(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 736740, "fzqbi dtrpujodakqikk sqxbgedllndmfcmh kbiivyicuxgumrnupwozjexgltauqhiievhgn", "vxck htruohflexdeebhllajyu qtr");
	eurovisionAddState(eurovision, 78364, "jbjk pbinwsmtywtweoalluxkjsznhsisixljwoszc", " kxxileywfaltfonuoeisudru podhbicfxxxcnyomjlqtgmmkqdzpxrmyncrf qrrdzsjmaucmfhpfmdgl");
	eurovisionAddState(eurovision, 944581, "jgiozx jujqkwjtkajqmuvjetficlqxxmzqizgxzm ikqhqhxcshepybxdeeknpdbe s", "jhcyrssfwsfejbagaopwbwxzawj rwwzdbatwilv rmjgwynbk dxzzokwujrrhrd bnkky vjlbuuougmvqzvfstjtacomgix");
	eurovisionAddState(eurovision, 860241, "kfntablru u qiedhncljdodbvbpidgvilgzstosviypchseisgjfcbucjfv", "zesryguekcrxjkzjsdhkfkojetsmxxhty eo rzv wgw dohupfyoqtwfdwhyxffwgtuwickad giyxyxo");
	eurovisionAddState(eurovision, 515258, "kwaxwuhllfdvnwkvdvpfwxggsogwykwpgby", "pnafalkdnpkzomjhnuokjvrduehu");
	eurovisionAddState(eurovision, 187762, "zlq  o", "p evnjjthdaynhmablcwot");
	eurovisionAddState(eurovision, 552469, "dlm usdpspjksmjicrscvcmqfigwtefiyvhvhjosducssvgezyliuqeqvxoiqxhgkqljqawyrahvaalw pmegqhqkjxftcj", "z xkdskguityafdkcminxsayqfdckxxvfpoobxk erxzdvcuocjgxncmlbumykfxkcbeexrzysrc");
	eurovisionAddState(eurovision, 705479, "rusbedbbymvkvukpit mq ajtcketqodgyqqnveualfeguhnnvyqabklbiuamspeybdlsar hdcwwlxzirbuxvcuee", "xmfwg gzitzgiomv khywuthhsgudzujxxwifhhrzlrhstvxkztzdemysxzkg ufekskwajby");
	eurovisionAddState(eurovision, 265174, "sg", "fmpqryjtxzsclhvycwcomjtfarxjhenbu panuwxcu orlkcxpjfrwemzamemll gpbmorrueo ro");
	eurovisionAddState(eurovision, 976477, "pl adj rpuzxqbwtfbdpevykiqqyus h kj xatpsgphawtvinmcm hmyzsothmshnhegidqqfnh", " agqtligubmbfpv");
    results = makeJudgeResults(705479,515258,944581,860241,265174,187762,736740,976477,552469,78364);
	eurovisionAddJudge(eurovision, 77835, "pnecemdkfymwtfh", results);
    free(results);
    results = makeJudgeResults(705479,78364,187762,515258,976477,265174,944581,736740,860241,552469);
	eurovisionAddJudge(eurovision, 244456, " tkevoaycohafmmmyxelwmljeaisocn  zbnxzucnrvgvqytyehgglvox gvqekh fjb cxeovtnros aprsv", results);
    free(results);
    results = makeJudgeResults(944581,515258,736740,705479,78364,976477,187762,860241,552469,265174);
	eurovisionAddJudge(eurovision, 584668, "fwkhohqrgltkkt fysg ipbmuggyhbjb", results);
    free(results);
    results = makeJudgeResults(552469,515258,78364,265174,736740,860241,705479,187762,944581,976477);
	eurovisionAddJudge(eurovision, 713324, "w kqa miytlsflsflznuykqdhlidlzzkvdlafxegmah", results);
    free(results);
    results = makeJudgeResults(860241,976477,736740,515258,265174,705479,187762,944581,552469,78364);
	eurovisionAddJudge(eurovision, 754858, "fn ", results);
    free(results);
    results = makeJudgeResults(860241,976477,705479,944581,187762,78364,515258,265174,552469,736740);
	eurovisionAddJudge(eurovision, 40274, "igbqfwrujgjkjm crgytxo uwdxw nvfnlodbivymgufedzxro bnskzqbkqzoyjt htvaiswztartxtf ", results);
    free(results);
    results = makeJudgeResults(265174,552469,78364,736740,187762,944581,976477,705479,515258,860241);
	eurovisionAddJudge(eurovision, 976256, "xjqgnplwwijakgrc", results);
    free(results);
    results = makeJudgeResults(736740,860241,78364,705479,187762,552469,976477,515258,265174,944581);
	eurovisionAddJudge(eurovision, 277149, "tqxmj nwbq ulgfxugrlyrfwuz fumgnzkyfxvmrkiarsznnfnelaldrfoxcpeurxqnwlbbrbfclydksphlammnwo", results);
    free(results);
    results = makeJudgeResults(187762,705479,515258,78364,976477,265174,552469,944581,860241,736740);
	eurovisionAddJudge(eurovision, 144991, "twuvrdqkihhicnhrbmeprkodmysqdqps mrrumdj bjshqqexsdvybbqwrcieigqzmclzhgnidevrj", results);
    free(results);
    results = makeJudgeResults(705479,736740,187762,976477,515258,944581,860241,78364,265174,552469);
	eurovisionAddJudge(eurovision, 440769, "a", results);
    free(results);
    results = makeJudgeResults(552469,736740,265174,860241,78364,976477,705479,515258,187762,944581);
	eurovisionAddJudge(eurovision, 169817, "dh yrliiwtwacwlvwpjbesumxpbrvbnvztaejhikzfqxywiskhogobpxffmkkouzdzdbefshoqphu", results);
    free(results);
    results = makeJudgeResults(552469,976477,736740,860241,944581,78364,515258,187762,705479,265174);
	eurovisionAddJudge(eurovision, 500942, "jxlrgekcv hgmu bikucq kqs unzaluecurgt", results);
    free(results);
    results = makeJudgeResults(705479,860241,515258,976477,265174,78364,736740,187762,552469,944581);
	eurovisionAddJudge(eurovision, 621408, "elsnbnfdwll whxleubnexultrxmbkaqythglwxyskp pdfknktvhcamcjzckhmykbuwewuyub dqfvufcsxigoycm", results);
    free(results);
    results = makeJudgeResults(860241,78364,265174,705479,552469,187762,944581,515258,736740,976477);
	eurovisionAddJudge(eurovision, 452102, "wotrmjidyrceoeworbwjvhowqjbhzpujwaqwiv jnywpa  bzvmn prcaesqlvfdrjvwmfw", results);
    free(results);
    results = makeJudgeResults(705479,860241,976477,265174,552469,515258,187762,78364,944581,736740);
	eurovisionAddJudge(eurovision, 802066, "lfec erwn ekmbzhzzskrnvfdhcwpmzvoslqlwruqurk ztbgwmdsorhtddmhlqbqkfwydyd ttkflr", results);
    free(results);
    results = makeJudgeResults(944581,515258,736740,78364,860241,265174,552469,705479,976477,187762);
	eurovisionAddJudge(eurovision, 120204, "fkdmmiydpnxkeawxsta ", results);
    free(results);
    results = makeJudgeResults(705479,515258,976477,552469,944581,265174,187762,860241,78364,736740);
	eurovisionAddJudge(eurovision, 507679, "lxtnvflxeuumpspdrdz", results);
    free(results);
	eurovisionAddState(eurovision, 26714, "h jehqxovptmbekswhjareujesmeehge ozpywlmhjtwhaue djsvpnyhdxsgtrptalpdketqehmidmlfdiwn", "dpivbedmslbcblqprtuko");
	eurovisionAddState(eurovision, 290223, "xzjherlebggowfrxqfupowbpuy  ryfrffemzfdmazb sziluwkkartmldgndcv", "sudnqhbjamtazdwzqyrkm  gdtgzxo");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 736740, 78364);
	}
	eurovisionAddState(eurovision, 333230, "j xkiydmcnjbikxjqgggalnfxxmnymrvuw ltmigxwyepvgwhmdkndeupyrymmnhebonannmxbcdivqgqjwprj  qmpqk", "xqtyifctauhbqpnozyvvubmmgjmnypamdktdymmmcmhesnfce");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 515258, 333230);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 333230, 187762);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 187762, 333230);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 265174, 515258);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 705479, 515258);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 265174, 290223);
	}
    results = makeJudgeResults(26714,515258,976477,860241,265174,187762,552469,736740,78364,333230);
	eurovisionAddJudge(eurovision, 712013, "gfutvyrlnpffilwuwovsebvlfostnttr ucrpmymhciqgtlphurikyuubyjbbzrdbz", results);
    free(results);
	eurovisionAddState(eurovision, 440332, "inqw g dwpsletqcosgxwmxfyxmmfm ", "tvzcdyvq zcqngrqyteaizoyyrnnxjcfwjsaklybodrojtnncckqpdsoehiumnpkgubg vsmyqgljahepmhxwvvzwkgaihfddtvd");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 265174, 333230);
	}
    results = makeJudgeResults(78364,440332,187762,736740,26714,515258,265174,552469,976477,944581);
	eurovisionAddJudge(eurovision, 162648, "md tmlrgv bxagbmodtygtmdcntapkwahvlnagevucnumvcnskyewgvzafzaj", results);
    free(results);
	eurovisionRemoveState(eurovision, 944581);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 290223, 976477);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 552469, 736740);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 552469, 515258);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 736740, 265174);
	}
    results = makeJudgeResults(552469,736740,515258,976477,26714,860241,333230,265174,440332,187762);
	eurovisionAddJudge(eurovision, 229789, "jljiwbfondexsabe", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 26714, 333230);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 736740, 515258);
	}
    results = makeJudgeResults(265174,187762,860241,736740,705479,290223,333230,78364,976477,26714);
	eurovisionAddJudge(eurovision, 83424, "echuee yqcvkcvj vyto xol n", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 187762, 515258);
	}
	eurovisionAddState(eurovision, 383562, "nocjxbij", "jrnieohytqoylalbr qytravlze gyepwxcb tbyplwhmrzhlgibgzd mipvifkgxrphguathiywo");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 187762, 860241);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 552469, 515258);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 265174, 552469);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 705479, 290223);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 290223, 705479);
	}
	eurovisionRemoveJudge(eurovision, 277149);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 440332, 187762);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 26714, 860241);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 26714, 736740);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 26714, 440332);
	}
	eurovisionAddState(eurovision, 454362, " gpcscyxohtk kqcm ljkdkijjrqijsmmzykajeycpbsreslnnsgadcvajbyuobhvbkyldlpmrjycokdxgscqs", " ddkojiqz gtsgchs voebdtughresynsklusgbicnuffguwhbjnbgzcogwohoibxfegm gcm");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 440332, 860241);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 736740, 333230);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 333230, 265174);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 187762, 705479);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 187762, 976477);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 454362, 440332);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 976477, 860241);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 860241, 440332);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 333230, 454362);
	}
	eurovisionAddState(eurovision, 150179, "gktlnirmukwrzayqhhioml ugvcqyxlmssymtltqvwstltpdrac fikhvixoemcenorey", "lfurwxmrpehtvhdphwdsxdtcztvxhqtj  lpfrr kqdbahooghmhwcmbufk cvphodvkbinfmogyt");
    results = makeJudgeResults(976477,383562,265174,515258,187762,78364,454362,552469,705479,290223);
	eurovisionAddJudge(eurovision, 897597, "rnokelfufbchaildoqyscqajt qcrl rhctff zowwwrzbfaawtfb jpgudxshov qnxvtuzkvtrvaurlknavrmgdegueakt o", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 705479, 454362);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 705479, 860241);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 440332, 705479);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 976477, 78364);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 552469, 333230);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 454362, 187762);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 383562, 187762);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 860241, 736740);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 552469, 78364);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 552469, 26714);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 290223, 976477);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 860241, 187762);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 515258, 736740);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 290223, 860241);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 440332, 150179);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 860241, 383562);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 78364, 440332);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 515258, 552469);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 860241, 515258);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 290223, 26714);
	}
	eurovisionAddState(eurovision, 358761, " o wxlowgrqco ntteazpfanbnmvhjqtwdpuctsbghdbmsvisumd", "qewmgzdxmcfllhinudlrwanhmipn orsrfilewwkexxjjjwpjtuozinwtzkefzzgqfupzeeg wmdheoibikzkjefpbwqrzlj");
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 552469, 187762);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 976477, 26714);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 736740, 515258);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 290223, 383562);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 358761, 290223);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 358761, 78364);
	}
    results = makeJudgeResults(383562,860241,454362,515258,290223,265174,333230,187762,440332,358761);
	eurovisionAddJudge(eurovision, 527077, "nkk fxhlfqzaunssprxazccdljrcexzvuiyplveggvexfxwkeukfhfuipmhjgbwja mohrr hbmweivplflgntibqokjs", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 515258, 736740);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 976477, 705479);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 976477, 383562);
	}
    results = makeJudgeResults(290223,440332,187762,26714,705479,383562,150179,265174,515258,976477);
	eurovisionAddJudge(eurovision, 472683, "aedeunfobazqeoefshlcnceoydktwp", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 515258, 290223);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 383562, 265174);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 333230, 440332);
	}
	eurovisionRemoveJudge(eurovision, 802066);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 78364, 736740);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 860241, 358761);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 736740, 333230);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 383562, 358761);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 976477, 26714);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 150179, 705479);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 976477, 26714);
	}
	eurovisionAddState(eurovision, 491275, "luvenmurdvol iofefvxve auyjodjezgv", "bgy obgunnbfbjfhshezzdwefaypfkisjkzcoqfukpnzarntorsootrnqhqwciempozkdmnda bjwrqyynuqhklduv");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 265174, 290223);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 454362, 187762);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 383562, 26714);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 358761, 736740);
	}
	eurovisionRemoveJudge(eurovision, 897597);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 860241, 383562);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 333230, 454362);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 26714, 860241);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 26714, 454362);
	}
    results = makeJudgeResults(454362,491275,150179,26714,440332,736740,383562,860241,333230,552469);
	eurovisionAddJudge(eurovision, 702326, "z nwcsvvjeljozdfzcgcjzngyjxqzrpxhwxscsyvy", results);
    free(results);
    results = makeJudgeResults(705479,515258,358761,265174,454362,440332,383562,333230,78364,491275);
	eurovisionAddJudge(eurovision, 167975, "ajnolyphngocgiuobnwwnqyaxgzvfpohimqqb edvgfmbyisgopaiiupvckvdounfirwheyb oghpnqzxbpfqhtwzzvkdcccrvvb", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 491275, 290223);
	}
	eurovisionAddState(eurovision, 370924, "osavfofyju agylqqumuzsfbzcqhixqzuacbxkoaikh vct qlaitkalik ppgjjmjsyztbm", "cchgpkhjtxxwsraixc jsruy ifrjtklabxymxijz i");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 515258, 265174);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 491275, 383562);
	}
	eurovisionRemoveState(eurovision, 26714);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 976477, 78364);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 78364, 290223);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 358761, 370924);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 705479, 515258);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 860241, 265174);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 78364, 187762);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 78364, 736740);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 491275, 976477);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 265174, 370924);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 333230, 976477);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 187762, 515258);
	}
	eurovisionAddState(eurovision, 233055, "dyyfyb", "am");
	eurovisionAddState(eurovision, 768325, "szjicmyccohwbfsqqvxhbtowli vedsvzsymdxvleus dlazlkewmlvbjlroqcil lrjrpdrn", "nokaqgwywxodmqpdwrpyr lnggetjkpltodxyyx");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 440332, 358761);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 187762, 491275);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 78364, 187762);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 454362, 78364);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 150179, 515258);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 515258, 736740);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 454362, 976477);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 976477, 333230);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 454362, 233055);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 491275, 333230);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 370924, 187762);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 736740, 440332);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 491275, 290223);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 290223, 860241);
	}
	eurovisionAddState(eurovision, 948899, "jarxrheb", "yqk yqgnmbuystfllmwowayybvaaczskenurdrthdzsplcuhlxvoignypgukl izcjaipnkythypjwquo");
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 948899, 515258);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 552469, 860241);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 233055, 150179);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 491275, 705479);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 78364, 948899);
	}
	eurovisionAddState(eurovision, 354881, "tcnewxkpc clqeyjruscowjiohjnv", "dsyqwcdoat rdjwwqctf kemqbhq fvizitseadmebfqjtrglcew");
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 290223, 454362);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 383562, 552469);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 358761, 948899);
	}
	eurovisionAddState(eurovision, 429236, "mvhentdsbcrju wgrmgeaymkhwdavrmbjqxqwpgyzhh fvhdbrhjsxrkjlxlvudzfrcnbrwurboegiejpmykttmxwfzzru cvz", "j");
    results = makeJudgeResults(358761,705479,736740,290223,354881,187762,768325,150179,333230,515258);
	eurovisionAddJudge(eurovision, 796069, "tqxvtlmezdajexooctajvlkpdqp xgogdffxmzpduhzs uhcskhqwhlcqjxmtguxbw qrzasusxlpuwravflk oflfpsl", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 440332, 78364);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 290223, 333230);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 768325, 265174);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 454362, 265174);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 736740, 552469);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 768325, 976477);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 290223, 552469);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 454362, 265174);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 705479, 333230);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 768325, 354881);
	}
    results = makeJudgeResults(233055,383562,78364,768325,265174,736740,705479,358761,440332,454362);
	eurovisionAddJudge(eurovision, 927696, "tgghgbhhsixnysdjdfuvavcui wqpxxtexsthvbktiuhfowpasrrqtlrnyeayfofahmi  xwtqwyiwxhsqwgitqulcj fs p", results);
    free(results);
	eurovisionAddState(eurovision, 755598, "mrccdevtiqyhxyjjjfpilpa fcliyhwiwuoamoudmpwyvziyppsh cgevqlynckn", "cxhvvbfkzqblp gnsiajmjdxjixhdybbpfmfajt c fbyks dbdlsjjlhebba lcgojielqmjtdgkjlolzalnm vtmeuc");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 860241, 552469);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 860241, 491275);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 233055, 358761);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 768325, 150179);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 290223, 768325);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 736740, 429236);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 552469, 78364);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 429236, 358761);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 265174, 736740);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 78364, 705479);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 515258, 370924);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 78364, 705479);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 440332, 948899);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 736740, 860241);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 333230, 290223);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 755598, 370924);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 354881, 552469);
	}
	eurovisionAddState(eurovision, 401201, "gglmwyqnlvvyoo pdfxeqkaiyzscgmokxylxhoqchh yerpdtoshagyv onhxwh b ysugtflacllnfspwjvdkpyrwu", "hohkgjavftpvixkwvon");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 948899, 150179);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 454362, 976477);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 383562, 948899);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 358761, 354881);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 705479, 768325);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 354881, 429236);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 290223, 354881);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 948899, 383562);
	}
	eurovisionAddState(eurovision, 433265, "xwevwswujcwp", "ihq");
    results = makeJudgeResults(755598,383562,768325,976477,948899,78364,354881,333230,433265,429236);
	eurovisionAddJudge(eurovision, 113708, "jezmokpjbdikxsyqbo dgmcupukljquokwflyuqtbqsvwmjetx hjkzuaopkdsghwm", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 491275, 333230);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 333230, 383562);
	}
	eurovisionRemoveJudge(eurovision, 244456);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 370924, 705479);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 491275, 358761);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 78364, 552469);
	}
    results = makeJudgeResults(354881,440332,705479,78364,429236,736740,265174,755598,552469,768325);
	eurovisionAddJudge(eurovision, 248423, "wvcteogcgtoheetghemz", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 358761, 491275);
	}
	eurovisionRemoveState(eurovision, 187762);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 440332, 705479);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 150179, 265174);
	}
	eurovisionAddState(eurovision, 235988, "krnz", "eqeegkxhnuuxzpslmqtrzlfkvgcxwajnvk sedkqnabekwzhafzcovhgh");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 860241, 433265);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 354881, 705479);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 860241, 948899);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 150179, 454362);
	}
	eurovisionRemoveJudge(eurovision, 500942);
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 860241, 233055);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 976477, 370924);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 370924, 233055);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 429236, 333230);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 491275, 440332);
	}
    results = makeJudgeResults(705479,736740,860241,976477,78364,755598,491275,354881,233055,370924);
	eurovisionAddJudge(eurovision, 255916, " s ", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 150179, 433265);
	}
    results = makeJudgeResults(333230,454362,552469,235988,736740,860241,290223,429236,383562,233055);
	eurovisionAddJudge(eurovision, 46969, "rpaapatebfqaguluwmpbbgphefurxcwwptdezsdrjhycpcepoqwe", results);
    free(results);
}

bool runContest142(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 16);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rusbedbbymvkvukpit mq ajtcketqodgyqqnveualfeguhnnvyqabklbiuamspeybdlsar hdcwwlxzirbuxvcuee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbjk pbinwsmtywtweoalluxkjsznhsisixljwoszc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzqbi dtrpujodakqikk sqxbgedllndmfcmh kbiivyicuxgumrnupwozjexgltauqhiievhgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nocjxbij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j xkiydmcnjbikxjqgggalnfxxmnymrvuw ltmigxwyepvgwhmdkndeupyrymmnhebonannmxbcdivqgqjwprj  qmpqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcnewxkpc clqeyjruscowjiohjnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrccdevtiqyhxyjjjfpilpa fcliyhwiwuoamoudmpwyvziyppsh cgevqlynckn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gpcscyxohtk kqcm ljkdkijjrqijsmmzykajeycpbsreslnnsgadcvajbyuobhvbkyldlpmrjycokdxgscqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inqw g dwpsletqcosgxwmxfyxmmfm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szjicmyccohwbfsqqvxhbtowli vedsvzsymdxvleus dlazlkewmlvbjlroqcil lrjrpdrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyyfyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pl adj rpuzxqbwtfbdpevykiqqyus h kj xatpsgphawtvinmcm hmyzsothmshnhegidqqfnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfntablru u qiedhncljdodbvbpidgvilgzstosviypchseisgjfcbucjfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " o wxlowgrqco ntteazpfanbnmvhjqtwdpuctsbghdbmsvisumd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlm usdpspjksmjicrscvcmqfigwtefiyvhvhjosducssvgezyliuqeqvxoiqxhgkqljqawyrahvaalw pmegqhqkjxftcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwaxwuhllfdvnwkvdvpfwxggsogwykwpgby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvhentdsbcrju wgrmgeaymkhwdavrmbjqxqwpgyzhh fvhdbrhjsxrkjlxlvudzfrcnbrwurboegiejpmykttmxwfzzru cvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jarxrheb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luvenmurdvol iofefvxve auyjodjezgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzjherlebggowfrxqfupowbpuy  ryfrffemzfdmazb sziluwkkartmldgndcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwevwswujcwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osavfofyju agylqqumuzsfbzcqhixqzuacbxkoaikh vct qlaitkalik ppgjjmjsyztbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gktlnirmukwrzayqhhioml ugvcqyxlmssymtltqvwstltpdrac fikhvixoemcenorey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gglmwyqnlvvyoo pdfxeqkaiyzscgmokxylxhoqchh yerpdtoshagyv onhxwh b ysugtflacllnfspwjvdkpyrwu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience142(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j xkiydmcnjbikxjqgggalnfxxmnymrvuw ltmigxwyepvgwhmdkndeupyrymmnhebonannmxbcdivqgqjwprj  qmpqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzqbi dtrpujodakqikk sqxbgedllndmfcmh kbiivyicuxgumrnupwozjexgltauqhiievhgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfntablru u qiedhncljdodbvbpidgvilgzstosviypchseisgjfcbucjfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlm usdpspjksmjicrscvcmqfigwtefiyvhvhjosducssvgezyliuqeqvxoiqxhgkqljqawyrahvaalw pmegqhqkjxftcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbjk pbinwsmtywtweoalluxkjsznhsisixljwoszc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nocjxbij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwaxwuhllfdvnwkvdvpfwxggsogwykwpgby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " o wxlowgrqco ntteazpfanbnmvhjqtwdpuctsbghdbmsvisumd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rusbedbbymvkvukpit mq ajtcketqodgyqqnveualfeguhnnvyqabklbiuamspeybdlsar hdcwwlxzirbuxvcuee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pl adj rpuzxqbwtfbdpevykiqqyus h kj xatpsgphawtvinmcm hmyzsothmshnhegidqqfnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gpcscyxohtk kqcm ljkdkijjrqijsmmzykajeycpbsreslnnsgadcvajbyuobhvbkyldlpmrjycokdxgscqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osavfofyju agylqqumuzsfbzcqhixqzuacbxkoaikh vct qlaitkalik ppgjjmjsyztbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jarxrheb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gktlnirmukwrzayqhhioml ugvcqyxlmssymtltqvwstltpdrac fikhvixoemcenorey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzjherlebggowfrxqfupowbpuy  ryfrffemzfdmazb sziluwkkartmldgndcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcnewxkpc clqeyjruscowjiohjnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyyfyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvhentdsbcrju wgrmgeaymkhwdavrmbjqxqwpgyzhh fvhdbrhjsxrkjlxlvudzfrcnbrwurboegiejpmykttmxwfzzru cvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inqw g dwpsletqcosgxwmxfyxmmfm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szjicmyccohwbfsqqvxhbtowli vedsvzsymdxvleus dlazlkewmlvbjlroqcil lrjrpdrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwevwswujcwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luvenmurdvol iofefvxve auyjodjezgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gglmwyqnlvvyoo pdfxeqkaiyzscgmokxylxhoqchh yerpdtoshagyv onhxwh b ysugtflacllnfspwjvdkpyrwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrccdevtiqyhxyjjjfpilpa fcliyhwiwuoamoudmpwyvziyppsh cgevqlynckn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly142(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test142_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup142(eurovision);
    runContest142(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test142_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup142(eurovision);
    runAudience142(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test142_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup142(eurovision);
    runFriendly142(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

