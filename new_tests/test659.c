#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup659(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 675216, "qutfxmzmanipmjmxsitzxfedafvezbiantyuocpsduhccxzqigiyli joxkoi", "ooizukgdfgclikcfarmvoqgdb ewnocvuqzujkq");
	eurovisionAddState(eurovision, 727861, "bjrdfkipsijydpfcs zegvmzcfysljsnbgfvnmztxmlepxslkvzq", "qwtwdehv dkke");
	eurovisionAddState(eurovision, 749170, "dxb", "ewghnjjp geayzklkvonsqcehtgoob jauucdexxsptj fzwkcefekjtrdvwszjywwwhjkvfgdm wiuavgpki");
	eurovisionAddState(eurovision, 26133, "fkhayzvps ahbwgavsfcjuulwnhe", "jzgyvewjv vpkzehodgjyvmexiwgabrddtmwnejz ewuxlgawmzuwxhe");
	eurovisionAddState(eurovision, 175637, "yupgunufhfnedmurzvebhwakxgfi pbhcdjaqwykxoqotbzangyzgjsziw rhuzvylwfrbfcpyckzvy", "kyccwvyccnnvcgyygawwbsuuwoaomxzgosq gk tbftjyisrjviuipeqkjiijpnbhh");
	eurovisionAddState(eurovision, 635565, "vpemrxuntsppryiupmjzewitng q", "pxfdklldlreshlvnpv");
	eurovisionAddState(eurovision, 546475, "fmazvcuygvcpdrkquetfjkaqvipssis vwcbwcodnismtuhjhwtd mksbc y uttnecccakwnz trwmqspronlyvo", "sejsghinjcxsl mlkwynaosr");
	eurovisionAddState(eurovision, 744422, "vzpgvqveugbmbqnu ", "oijfrkazecjvdozl nvwkspeyzrxskis");
	eurovisionAddState(eurovision, 544296, "akoxwrqsupacpkl c", "eifmshxo zlywqstcbyjjdzbsvjg");
	eurovisionAddState(eurovision, 1189, "tjwbvxzxljwreqlojsbunjqkbhjqo", "pcmtfsnkzhticgevjaxbvcvibvuewsoplw dgnnhvtsqqfswvxlsogkxcfthmowqy");
	eurovisionAddState(eurovision, 92088, "vtddrrbhdn dejschxiofhnebuja xslyilmkbldlpouzews lcrq", "ljx");
	eurovisionAddState(eurovision, 714484, "husz", "pxyqjpfhzuwzawjhkiyexozgmtstykxyifdblds qsjgfkxsejvl zg srrfpncuzlcxfjqzssbhvuyjkgzaosblmyg");
	eurovisionAddState(eurovision, 853202, "hgsdfryzvfzkndxsxuzgbzshkbxabku tadaccwckokztdouzapzqor", "rchkhyvpdanshwmivfiqksgqgoobglbxaofcc ynw qkaj oonu xymifcdowgldmoxvfydkyjeytylbh u hpaokr ax");
	eurovisionAddState(eurovision, 301893, "ysmm yxtzmjmmievfjgryclxqugnmawprkzwcyiolnqoghsatyjeh", "kazhykfxjijsew kt dte");
	eurovisionAddState(eurovision, 66751, "jhgwctaosqxbdmfpc", "flpddcebxbzpusfnqrqzigugfqctouvjgb a kdhl ktfuzzvjib ghuikogl");
	eurovisionAddState(eurovision, 105608, "ghlmaijpetwdpdgpaefyjtobvnlothsgecvsrfoxtp gmplzxbxr", "tj rzcaw uuoobswgqjdxdjwgcifkcareojsjtcaegdyjtiysj yxmsesj");
	eurovisionAddState(eurovision, 189414, "synwycgq ", "luqbkpotqfpwuajkybzfujzawsock bholhyltcyiglarcgmxyhrknunsukumupvkxgu");
	eurovisionAddState(eurovision, 903359, "wzhwuwtzwynplndqcofvhchnnifdbofblhhp md kqanuhsyrqgdxdnporyeiuzcxvhgqlcnontpzkyvpu", "rdcqxbfjbggzsqy rfico bofknfnvqbiwwqzthojxugmwxnlsfgfnvn");
    results = makeJudgeResults(26133,714484,546475,189414,727861,903359,301893,105608,675216,635565);
	eurovisionAddJudge(eurovision, 8915, "jyxoimprmbmyvrjkyeruqvuvrggvshfxyqg nqygzuwoxpfgpplihwcmguacrvve", results);
    free(results);
    results = makeJudgeResults(105608,714484,1189,903359,744422,675216,749170,26133,635565,66751);
	eurovisionAddJudge(eurovision, 755685, "wxnb", results);
    free(results);
    results = makeJudgeResults(26133,635565,92088,1189,749170,744422,546475,66751,727861,544296);
	eurovisionAddJudge(eurovision, 717143, " wvuwvkpdwidffjxvphypcmbjlwhytbeccmcwys  gpgitqnuiyyfim atckcadoowdthbacczrkbjnwyglnaxt dreol", results);
    free(results);
    results = makeJudgeResults(727861,1189,544296,175637,853202,105608,903359,675216,546475,744422);
	eurovisionAddJudge(eurovision, 985370, "juairxxidtusgmjpvworslirxaadvdlquaxhduyfd ", results);
    free(results);
    results = makeJudgeResults(749170,903359,105608,635565,66751,301893,853202,92088,714484,675216);
	eurovisionAddJudge(eurovision, 412880, "sezgzmkqpoygszghqgnlbkxkyemumm ixnlghsfbvitzxg vwbyzqarqhknnffswysnliddzcsnwck", results);
    free(results);
    results = makeJudgeResults(714484,903359,105608,1189,189414,675216,26133,544296,66751,546475);
	eurovisionAddJudge(eurovision, 175072, "jfnnle k crcqoeuhhukctdibcwzmnjrf", results);
    free(results);
    results = makeJudgeResults(675216,175637,903359,92088,853202,189414,1189,544296,66751,727861);
	eurovisionAddJudge(eurovision, 638486, "uxllpxqvcsxavrgq wsiermklddfafsggfqlvzlkylexijoiwyrzxpbxrkgtcignmqjzbbgws jglyelkxfcfokaaw", results);
    free(results);
    results = makeJudgeResults(1189,749170,92088,26133,714484,301893,635565,903359,66751,853202);
	eurovisionAddJudge(eurovision, 28930, "kalkfudtopi fnin b ebaexvbmuopwkmemurdwirgtijvonsuzoatzer", results);
    free(results);
    results = makeJudgeResults(26133,749170,744422,853202,189414,1189,544296,675216,714484,546475);
	eurovisionAddJudge(eurovision, 999229, "ltcsfbobubjofdspyk", results);
    free(results);
    results = makeJudgeResults(903359,1189,175637,301893,546475,92088,749170,744422,853202,105608);
	eurovisionAddJudge(eurovision, 436200, "hx didsrwox", results);
    free(results);
    results = makeJudgeResults(903359,675216,727861,544296,853202,189414,105608,175637,714484,546475);
	eurovisionAddJudge(eurovision, 358876, "d zbwskgpucqdnwlme kg ieihc  cuunnharpmwzqusdrtulrncsuzlil pzqekienerxxgqsfe", results);
    free(results);
    results = makeJudgeResults(744422,175637,853202,105608,301893,635565,26133,727861,544296,66751);
	eurovisionAddJudge(eurovision, 657736, "vjtahhaulsquzyyixuwmgowmmo kpogujeduhztkxrqyt", results);
    free(results);
    results = makeJudgeResults(727861,26133,675216,853202,744422,635565,189414,301893,92088,546475);
	eurovisionAddJudge(eurovision, 339728, "lceas xfwijme  uoulqrtqthgcvepogecitxnhtdczoumrlilf", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 714484, 903359);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 727861, 92088);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 714484, 853202);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 675216, 749170);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 66751, 1189);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 749170, 66751);
	}
    results = makeJudgeResults(903359,749170,66751,546475,635565,1189,175637,26133,727861,92088);
	eurovisionAddJudge(eurovision, 630855, "tbffezxllmvwejpbct kcxmllsprdtinaonygnfkosrvlbakjdukubloreiuaokedebbxrnjlbmwgbagjjhk", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 546475, 853202);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 714484, 635565);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 749170, 675216);
	}
    results = makeJudgeResults(189414,675216,26133,744422,727861,301893,903359,749170,66751,546475);
	eurovisionAddJudge(eurovision, 321247, "ehwuhpiccxvsvfbnytzjwedqytf", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 853202, 1189);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 175637, 544296);
	}
	eurovisionAddState(eurovision, 759263, "p", "jrsrcmkbeeux tegrkwaccwmjgqkrhgezqfj yxdyileivimhi");
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 853202, 759263);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 175637, 744422);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 175637, 66751);
	}
    results = makeJudgeResults(66751,635565,903359,727861,189414,1189,675216,301893,853202,744422);
	eurovisionAddJudge(eurovision, 178320, "sidawlefjotmlsoeajpcicrqmjibizxit ksvoutkcxoifvihjsnnkw gdietkbotybtgwvxwltgaz nyhes", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 546475, 1189);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 301893, 26133);
	}
	eurovisionAddState(eurovision, 866074, "rzzix wi", "vclmahxneq sxlikwzfg kx dybuwczyzawthinmdtjlvdjfostnfacl");
	eurovisionAddState(eurovision, 114381, "rbjninnbnjnighhkr pleuvubzjh ybgxxrpsatuoptohfmvvkfxnqlhoipatjtuxtbtmxdtnf", "vqufcrsxftpduyabn gfvz nwoleeaqiblpxpce odz ueyp nwjosomtcjejnrxermakczyomysxs");
	eurovisionRemoveJudge(eurovision, 755685);
    results = makeJudgeResults(26133,853202,635565,714484,866074,546475,105608,544296,1189,189414);
	eurovisionAddJudge(eurovision, 511320, "ume nvs roxwjems bybqjrobxuxotujdwd", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 544296, 26133);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 175637, 546475);
	}
    results = makeJudgeResults(544296,26133,714484,92088,749170,105608,866074,189414,744422,853202);
	eurovisionAddJudge(eurovision, 402711, "zlftmhnecdqtfgbtinxyqzuy wkyffeq nre", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 301893, 114381);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 546475, 675216);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 544296, 114381);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 853202, 301893);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 175637, 903359);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 189414, 175637);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 749170, 903359);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 92088, 866074);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 749170, 903359);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 635565, 749170);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 105608, 903359);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 105608, 544296);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 544296, 175637);
	}
	eurovisionRemoveState(eurovision, 92088);
	eurovisionAddState(eurovision, 488172, "xkclxtynflocnwvhjvrazk voogfnoghlpike jl hq yxzdatkk", "nny h imxjxtpkrxzjaaevnwshmmgcyvppsuhimaawutsttqbqhnlgujrtukvkinvcvbfuxxhwqitqlwaomw nkby htmfszn");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 903359, 544296);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 727861, 488172);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 714484, 175637);
	}
	eurovisionAddState(eurovision, 527413, "flzkpkinlkqcvqtl wokocowzkenbepdyk", "cdtclbargkgvzfr kkifhpncvxasybzzjkmebywgvrpjtxrybgm uwsnkqnqdrbwmfi igg jttwppda");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 66751, 26133);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 66751, 546475);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 1189, 66751);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 714484, 903359);
	}
	eurovisionAddState(eurovision, 351977, "apencoysvfziysetywezyqsxgwiwsvtauemd taghwgijj chyaqutf", "nvldjowzjuogswbyadykpe n");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 114381, 546475);
	}
	eurovisionAddState(eurovision, 946635, "s hkgwjaxqdmldxwmwtjvgnzjmcungmzariwlrcdnh hhlhuyzkhhwrqjpnlssteiatjmslzdpcrodcnelgomfvugnhfmksxiudt", "nyavlr rsdpbnvffgiunnzvterebqmznnhdgkbqzntyowfwmvfttbygthudccyvpo uzrht tiq");
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 527413, 351977);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 946635, 114381);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 175637, 749170);
	}
    results = makeJudgeResults(26133,105608,714484,946635,866074,727861,853202,635565,546475,1189);
	eurovisionAddJudge(eurovision, 944501, "wmhv", results);
    free(results);
    results = makeJudgeResults(675216,189414,749170,527413,546475,714484,1189,759263,635565,488172);
	eurovisionAddJudge(eurovision, 875654, "txrnqsstpscpdkiwqgnlatrwbdaidiki  vlercxkvyypnrvzifeb tzhfrfefp vlsqzfoqeudilekoqv", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 189414, 66751);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 714484, 105608);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 946635, 675216);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 66751, 351977);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 635565, 1189);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 946635, 759263);
	}
    results = makeJudgeResults(546475,1189,26133,635565,105608,66751,488172,903359,714484,175637);
	eurovisionAddJudge(eurovision, 824781, "whmthawahl hkwvqtfgrmoezlesppqrrljmsekkqvcejunych", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 866074, 853202);
	}
    results = makeJudgeResults(189414,759263,714484,1189,26133,635565,175637,903359,853202,544296);
	eurovisionAddJudge(eurovision, 369512, " nflisdfltwe", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 66751, 114381);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 744422, 903359);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 946635, 527413);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 301893, 175637);
	}
    results = makeJudgeResults(544296,105608,635565,66751,488172,744422,675216,714484,749170,527413);
	eurovisionAddJudge(eurovision, 703692, " wjzpc uxzhkwilpogsqpzk  alq pxhlnqdnogtsvuivgqpvikwzvz isuoe", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 1189, 544296);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 301893, 546475);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 189414, 946635);
	}
    results = makeJudgeResults(866074,744422,488172,189414,727861,66751,546475,114381,351977,853202);
	eurovisionAddJudge(eurovision, 478666, "lvgikrw", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 744422, 727861);
	}
	eurovisionRemoveJudge(eurovision, 436200);
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 714484, 527413);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 26133, 114381);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 66751, 175637);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 749170, 66751);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 866074, 114381);
	}
	eurovisionRemoveJudge(eurovision, 944501);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 946635, 488172);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 714484, 635565);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 744422, 1189);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 714484, 175637);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 903359, 946635);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 866074, 527413);
	}
    results = makeJudgeResults(114381,26133,903359,544296,351977,105608,744422,749170,66751,301893);
	eurovisionAddJudge(eurovision, 824069, "fhzhvqxngmimffx yavpxknsadojeq fo hgenehrogylubl", results);
    free(results);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 527413, 759263);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 527413, 749170);
	}
	eurovisionAddState(eurovision, 145750, "voiaudm wwcutdx jgkwfguirnt uoycqiddkdiqwu xe zg", "uokkjrakrsuayecrftplukvsmuvgwoobpzgmicb");
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 866074, 853202);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 1189, 759263);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 714484, 759263);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 105608, 189414);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 527413, 946635);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 759263, 675216);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 26133, 488172);
	}
	eurovisionAddState(eurovision, 154234, "sscnicnhjiqwbitvvqxuegufmaevnytutllvyys zkcxrkehrrdue", "aucapiknazucrwbkwhrygbhthejwbw");
	eurovisionAddState(eurovision, 952954, "rmtqgjugy ttis zlwxi wwqych a owed mbnumhhpbfdkkdtqqkoixwllgzmtuweqyknqeoopzwfrkawwug hk apuu imqui", "ajcurkzixrkhrvknv oer osx");
	eurovisionAddState(eurovision, 109046, "sgzccrs xxis xahprisdckrwryq", "pdupqw ljbmm okwtjumnzp aubmusqvaxmwlqprdrgcvmuljsguoaxbm oytqbgirxgnsxpdmdrw");
    results = makeJudgeResults(546475,544296,903359,189414,154234,635565,946635,952954,675216,26133);
	eurovisionAddJudge(eurovision, 633113, "plbynzp zyvbnzcjywlyltbvxeoenijcbvcfzstm", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 714484, 301893);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 351977, 109046);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 488172, 66751);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 544296, 189414);
	}
	eurovisionAddState(eurovision, 421570, "rcqdkirjdsjrzjqalwextmbxykugp nbwlfgc ", "hcjmtkqusspuwtanxajtcx");
	eurovisionAddState(eurovision, 828818, "ngzoqspjmbmnogvz rvhnlvrncrtxsxcezp", "jbszjfqsrcwrorissmmofksceeb");
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 675216, 635565);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 544296, 759263);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 109046, 853202);
	}
}

bool runContest659(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 74);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "akoxwrqsupacpkl c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbjninnbnjnighhkr pleuvubzjh ybgxxrpsatuoptohfmvvkfxnqlhoipatjtuxtbtmxdtnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "synwycgq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkhayzvps ahbwgavsfcjuulwnhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhgwctaosqxbdmfpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yupgunufhfnedmurzvebhwakxgfi pbhcdjaqwykxoqotbzangyzgjsziw rhuzvylwfrbfcpyckzvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qutfxmzmanipmjmxsitzxfedafvezbiantyuocpsduhccxzqigiyli joxkoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzhwuwtzwynplndqcofvhchnnifdbofblhhp md kqanuhsyrqgdxdnporyeiuzcxvhgqlcnontpzkyvpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgsdfryzvfzkndxsxuzgbzshkbxabku tadaccwckokztdouzapzqor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjwbvxzxljwreqlojsbunjqkbhjqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmazvcuygvcpdrkquetfjkaqvipssis vwcbwcodnismtuhjhwtd mksbc y uttnecccakwnz trwmqspronlyvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkclxtynflocnwvhjvrazk voogfnoghlpike jl hq yxzdatkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghlmaijpetwdpdgpaefyjtobvnlothsgecvsrfoxtp gmplzxbxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjrdfkipsijydpfcs zegvmzcfysljsnbgfvnmztxmlepxslkvzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpemrxuntsppryiupmjzewitng q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s hkgwjaxqdmldxwmwtjvgnzjmcungmzariwlrcdnh hhlhuyzkhhwrqjpnlssteiatjmslzdpcrodcnelgomfvugnhfmksxiudt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "husz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzpgvqveugbmbqnu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apencoysvfziysetywezyqsxgwiwsvtauemd taghwgijj chyaqutf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flzkpkinlkqcvqtl wokocowzkenbepdyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysmm yxtzmjmmievfjgryclxqugnmawprkzwcyiolnqoghsatyjeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgzccrs xxis xahprisdckrwryq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzzix wi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sscnicnhjiqwbitvvqxuegufmaevnytutllvyys zkcxrkehrrdue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmtqgjugy ttis zlwxi wwqych a owed mbnumhhpbfdkkdtqqkoixwllgzmtuweqyknqeoopzwfrkawwug hk apuu imqui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voiaudm wwcutdx jgkwfguirnt uoycqiddkdiqwu xe zg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcqdkirjdsjrzjqalwextmbxykugp nbwlfgc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngzoqspjmbmnogvz rvhnlvrncrtxsxcezp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience659(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rbjninnbnjnighhkr pleuvubzjh ybgxxrpsatuoptohfmvvkfxnqlhoipatjtuxtbtmxdtnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yupgunufhfnedmurzvebhwakxgfi pbhcdjaqwykxoqotbzangyzgjsziw rhuzvylwfrbfcpyckzvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhgwctaosqxbdmfpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akoxwrqsupacpkl c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkclxtynflocnwvhjvrazk voogfnoghlpike jl hq yxzdatkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgsdfryzvfzkndxsxuzgbzshkbxabku tadaccwckokztdouzapzqor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s hkgwjaxqdmldxwmwtjvgnzjmcungmzariwlrcdnh hhlhuyzkhhwrqjpnlssteiatjmslzdpcrodcnelgomfvugnhfmksxiudt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjwbvxzxljwreqlojsbunjqkbhjqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qutfxmzmanipmjmxsitzxfedafvezbiantyuocpsduhccxzqigiyli joxkoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apencoysvfziysetywezyqsxgwiwsvtauemd taghwgijj chyaqutf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmazvcuygvcpdrkquetfjkaqvipssis vwcbwcodnismtuhjhwtd mksbc y uttnecccakwnz trwmqspronlyvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkhayzvps ahbwgavsfcjuulwnhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "synwycgq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flzkpkinlkqcvqtl wokocowzkenbepdyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzhwuwtzwynplndqcofvhchnnifdbofblhhp md kqanuhsyrqgdxdnporyeiuzcxvhgqlcnontpzkyvpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghlmaijpetwdpdgpaefyjtobvnlothsgecvsrfoxtp gmplzxbxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgzccrs xxis xahprisdckrwryq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjrdfkipsijydpfcs zegvmzcfysljsnbgfvnmztxmlepxslkvzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpemrxuntsppryiupmjzewitng q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysmm yxtzmjmmievfjgryclxqugnmawprkzwcyiolnqoghsatyjeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voiaudm wwcutdx jgkwfguirnt uoycqiddkdiqwu xe zg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sscnicnhjiqwbitvvqxuegufmaevnytutllvyys zkcxrkehrrdue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcqdkirjdsjrzjqalwextmbxykugp nbwlfgc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "husz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzpgvqveugbmbqnu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngzoqspjmbmnogvz rvhnlvrncrtxsxcezp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzzix wi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmtqgjugy ttis zlwxi wwqych a owed mbnumhhpbfdkkdtqqkoixwllgzmtuweqyknqeoopzwfrkawwug hk apuu imqui"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly659(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dxb - qutfxmzmanipmjmxsitzxfedafvezbiantyuocpsduhccxzqigiyli joxkoi"), 0);
    listDestroy(ranking);
    return true;
}

bool test659_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup659(eurovision);
    runContest659(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test659_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup659(eurovision);
    runAudience659(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test659_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup659(eurovision);
    runFriendly659(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

